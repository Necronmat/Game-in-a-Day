// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCamera.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APlayerCamera::APlayerCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(mScene);

	//Setiting up the spring arm
	mSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Attachment Arm"));
	mSpringArm->SetupAttachment(mScene);

	//Setting up the camera
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	mCamera->SetupAttachment(mSpringArm);

	//Have the player automatically possess this character
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void APlayerCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APlayerCamera::LookUp);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APlayerCamera::LookRight);
	PlayerInputComponent->BindAxis(TEXT("Zoom"), this, &APlayerCamera::Zoom);

}

void APlayerCamera::LookUp(float AxisAmount)
{
	AddControllerPitchInput(AxisAmount);
}

void APlayerCamera::LookRight(float AxisAmount)
{
	AddControllerYawInput(AxisAmount);
}

void APlayerCamera::Zoom(float AxisAmount)
{
	mSpringArm->TargetArmLength += AxisAmount * 10;
}

