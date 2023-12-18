// Copyright Epic Games, Inc. All Rights Reserved.


#include "GameInADayGameModeBase.h"

AGameInADayGameModeBase::AGameInADayGameModeBase()
{

}

void AGameInADayGameModeBase::SetSelecetedPiece(AChessPiece* newPiece)
{
	mSelectedPiece = newPiece;
}

AChessPiece* AGameInADayGameModeBase::GetSelecetedPiece()
{
	return mSelectedPiece;
}

void AGameInADayGameModeBase::SetSelecetedSpace(ASpace* newSpace)
{
	mSelectedSpace = newSpace;
}

ASpace* AGameInADayGameModeBase::GetSelecetedSpace()
{
	return mSelectedSpace;
}

void AGameInADayGameModeBase::SetCurrentPlayer(int newPlayer)
{
	mCurrentPlayer = newPlayer;
	DisplayPlayersTurn(mCurrentPlayer);

	//Check to see if any walls expire as the players turn sawps
	mWalls.Sort();
	for (int i = 0; i < mWalls.Num(); ++i)
	{
		mWalls[i].Time -= 1;
	}

	if (mWalls.Num() > 0)
	{
		while (mWalls[0].Time <= 0)
		{
			mWalls[0].Piece->GetSpace()->SetPiece(nullptr);
			mWalls[0].Piece->Destroy();
			mWalls.RemoveAt(0);
		}
	}	
}

int AGameInADayGameModeBase::GetCurrentPlayer()
{
	return mCurrentPlayer;
}

void AGameInADayGameModeBase::AddWall(AChessPiece* newWall, int timer)
{
	mWalls.Add(Wall(newWall, timer));
}

void AGameInADayGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	DisplayPlayersTurn(mCurrentPlayer);
}

void AGameInADayGameModeBase::GameOver_Implementation(int winner)
{
	
}

void AGameInADayGameModeBase::DisplayHover_Implementation(int player, int piece)
{

}

void AGameInADayGameModeBase::DisplayPlayersTurn_Implementation(int player)
{

}

void AGameInADayGameModeBase::DisplaySpace_Implementation(int x, int y)
{

}


