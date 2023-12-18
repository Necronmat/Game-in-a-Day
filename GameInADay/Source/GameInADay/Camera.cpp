// Fill out your copyright notice in the Description page of Project Settings.


#include "Camera.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ACamera::ACamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
void ACamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ACamera::LookUp);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &ACamera::LookRight);
	PlayerInputComponent->BindAxis(TEXT("Zoom"), this, &ACamera::Zoom);

}

void ACamera::LookUp(float AxisAmount)
{
	AddControllerPitchInput(AxisAmount);
}

void ACamera::LookRight(float AxisAmount)
{
	AddControllerYawInput(AxisAmount);
}

void ACamera::Zoom(float AxisAmount)
{
	mSpringArm->TargetArmLength += AxisAmount * 10;
}