// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Space.h"
#include "Board.generated.h"


UCLASS()
class GAMEINADAY_API ABoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetUpBoard();

	bool CheckMove();

	void RemovePiece(AChessPiece* piece);

	void SpawnWall(int x, int y, int time);

private:

	struct
	{
		int mBoardX = 8;
		int mBoardY = 8;
	};

	USceneComponent* mScene;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ASpace> mSpace;

	TArray<TArray<ASpace*>> mSpaces;

	UPROPERTY(EditAnywhere)
		TSubclassOf<AChessPiece> mChessPiece;

	TArray<AChessPiece*> mPieces;

	AGameInADayGameModeBase* mGameMode;


	
};
