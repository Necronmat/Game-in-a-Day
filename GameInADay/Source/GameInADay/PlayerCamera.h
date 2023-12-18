// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCamera.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class GAMEINADAY_API APlayerCamera : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(EditAnywhere)
		USceneComponent* mScene;

	UPROPERTY(EditAnywhere)
		USpringArmComponent* mSpringArm;

	UPROPERTY(EditAnywhere)
		UCameraComponent* mCamera;

	float mRotX = 0;
	float mRotY = 0;

	void LookUp(float AxisAmount);
	void LookRight(float AxisAmount);
	void Zoom(float AxisAmount);
};
