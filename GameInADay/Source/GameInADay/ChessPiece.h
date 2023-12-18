// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChessPiece.generated.h"

enum EPieceType{
	Pawn,
	Rook,
	Knight,
	Bishop,
	Queen,
	King,
	Wall
};

class AGameInADayGameModeBase;
class ASpace;

UCLASS()
class GAMEINADAY_API AChessPiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChessPiece();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	EPieceType GetType();

	void SetType(EPieceType newType);

	int GetPlayerID();

	void SetPlayerID(int newID);

	ASpace* GetSpace();

	void SetSpace(ASpace* newSpace);

	void SwapMaterial();

	void SetScale(FVector newScale);

	UFUNCTION()
		void MakeMove(AActor* TouchedActor, FKey ButtonPressed);

	UFUNCTION()
		void HoverOver(UPrimitiveComponent* TouchedComponent);

private:

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

	ASpace* mCurrentSpace;

	EPieceType mType = EPieceType::Pawn;

	int mPlayerID = 0;

public:

	struct
	{
		int X = 0;
		int Y = 0;
	};

};
