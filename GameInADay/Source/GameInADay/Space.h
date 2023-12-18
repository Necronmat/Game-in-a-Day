// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChessPiece.h"
#include "Space.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class ABoard;

UCLASS()
class GAMEINADAY_API ASpace : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpace();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SwapMaterial();

	void SetBoard(ABoard* newBoard);

	AChessPiece* GetPiece();

	void SetPiece(AChessPiece* newActor);

	UFUNCTION()
		void CheckMove(AActor* TouchedActor, FKey ButtonPressed);

	UFUNCTION()
		void HoverOver(UPrimitiveComponent* TouchedComponent);

private:

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mMesh;

	UPROPERTY(EditAnywhere)
		UMaterialInterface* mMaterialBlack;

	UMaterialInstanceDynamic* mDynamicMaterialInstBlack;

	UPROPERTY(EditAnywhere)
		UMaterialInterface* mMaterialWhite;

	UMaterialInstanceDynamic* mDynamicMaterialInstWhite;

	AGameInADayGameModeBase* mGameMode;

	ABoard* mBoard;

	AChessPiece* mCurrentPiece = nullptr;

public:

	struct
	{
		int X = 0;
		int Y = 0;
	};

};
