// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Board.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameInADayGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GAMEINADAY_API AGameInADayGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:

	struct Wall
	{
		Wall(AChessPiece* newWall, int time) { Piece = newWall; Time = time; };

		AChessPiece* Piece;
		int Time;

		friend bool operator<(Wall const& lhs, Wall const& rhs)
		{
			return lhs.Time < rhs.Time;
		}
		friend bool operator>(Wall const& lhs, Wall const& rhs)
		{
			return lhs.Time > rhs.Time;
		}
		friend bool operator==(Wall const& lhs, Wall const& rhs)
		{
			return lhs.Time == rhs.Time;
		}
	};

public:
	// Sets default values for this actor's properties
	AGameInADayGameModeBase();

	void SetSelecetedPiece(AChessPiece* newPiece);

	AChessPiece* GetSelecetedPiece();

	void SetSelecetedSpace(ASpace* newSpace);

	ASpace* GetSelecetedSpace();

	void SetCurrentPlayer(int newPlayer);

	int GetCurrentPlayer();

	void AddWall(AChessPiece* newWall, int timer);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void GameOver(int winner);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void DisplayHover(int player, int piece);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void DisplayPlayersTurn(int player);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void DisplaySpace(int x, int y);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

private:

	UPROPERTY(EditAnywhere)
		ABoard* mGameBoard;

	AChessPiece* mSelectedPiece;

	ASpace* mSelectedSpace;

	int mCurrentPlayer = 0;

	UPROPERTY(EditAnywhere)
		bool mGameWon = false;

	TArray<Wall> mWalls;

	int mHoverPlayer = 0;
	int mHovertype = 0;;

};
