// Copyright Epic Games, Inc. All Rights Reserved.

#include "CovenCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InventoryComponent.h"
#include "InputActionValue.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ItemBase.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCoven.h"
#include "RitualTea.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ACovenCharacter

ACovenCharacter::ACovenCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller


	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent")); // Create an inventory component for the character

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACovenCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ACovenCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Player Interaction
		EnhancedInputComponent->BindAction(PlayerInteractionAction, ETriggerEvent::Triggered, this, &ACovenCharacter::PlayerInteraction);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACovenCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ACovenCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ACovenCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ACovenCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}


void ACovenCharacter::PlayerInteraction() {

	TArray<AActor*> OverlappingActors; // Array to hold actors that overlap with the sphere
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes; // Define the object types to check for overlaps
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic)); // Add dynamic objects to the overlap check
	const TArray<AActor*> ActorsToIgnore; // No actors to ignore in this case

	UKismetSystemLibrary::SphereOverlapActors(GetWorld(), GetActorLocation(), 200.f, ObjectTypes, nullptr, ActorsToIgnore, OverlappingActors); // Perform a sphere overlap check to find nearby actors of type AItemBase

	DrawDebugSphere(GetWorld(), GetActorLocation(), 200.f, 12, FColor::Red, false, 1.f); // Draw a debug sphere to visualize the overlap area

	if (OverlappingActors.Num() > 0 && OverlappingActors[0] != nullptr) { // Check if there are any overlapping actors found

		if (AItemBase* Item = Cast<AItemBase>(OverlappingActors[0])) { // Check if the first overlapping actor is of type AItemBase
			Item->Interact(this); // Call the Interact function on the item, passing this character as the interactor
		}

		
	}
}

void ACovenCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	PlayerCoven = Cast<APlayerCoven>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCoven::StaticClass())); // Set the Player Coven
	
	if (PlayerCoven != nullptr) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Player Coven Set.")); // Print a debug for if the coven is set successfully
	} else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player Coven NOT Set.")); // Print a debug for if the coven is not set successfully
	}
}
