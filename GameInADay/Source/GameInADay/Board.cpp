// Fill out your copyright notice in the Description page of Project Settings.

#include "Board.h"
#include "GameInADayGameModeBase.h"

// Sets default values
ABoard::ABoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mScene = CreateDefaultSubobject<USceneComponent>("Root");
	SetRootComponent(mScene);
}

// Called when the game starts or when spawned
void ABoard::BeginPlay()
{
	Super::BeginPlay();

	SetUpBoard();

	mGameMode = Cast<AGameInADayGameModeBase>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void ABoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABoard::SetUpBoard()
{
	//Make sure the board is at least the min size of 8x8
	if (mBoardX < 8)
	{
		mBoardX = 8;
	}
	if (mBoardY < 8)
	{
		mBoardY = 8;
	}

	SetActorLocation(FVector((mBoardX / 2) * -100, (mBoardY / 2) * -100, 100));

	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = GetInstigator();

	FAttachmentTransformRules rules = FAttachmentTransformRules::SnapToTargetIncludingScale;
	rules.LocationRule = EAttachmentRule::KeepWorld;
	rules.RotationRule = EAttachmentRule::KeepWorld;
	rules.ScaleRule = EAttachmentRule::KeepWorld;
	rules.bWeldSimulatedBodies = true;

	for (int i = 0; i < mBoardY; ++i)
	{
		TArray<ASpace*> tempArray;
		for (int j = 0; j < mBoardX; ++j)
		{
			//Spawn the board tiles
			ASpace* newSpace = GetWorld()->SpawnActor<ASpace>(mSpace, GetActorLocation() + FTransform(GetActorRotation()).TransformVector(FVector3d(100 * i, 100 * j, 0.0f)), GetActorRotation(), spawnParams);
			newSpace->AttachToComponent(mScene, rules);
			newSpace->X = j;
			newSpace->Y = i;
			//Swap the colour of every other tile
			if (i % 2 == j % 2)
			{
				newSpace->SwapMaterial();
			}
			newSpace->SetBoard(this);
			tempArray.Add(newSpace);
		}
		mSpaces.Add(tempArray);
	}

	for (int i = 0; i < mBoardY; ++i)
	{
		//Spawn the pawn pieces
		AChessPiece* newPiece = GetWorld()->SpawnActor<AChessPiece>(mChessPiece, GetActorLocation() + FTransform(GetActorRotation()).TransformVector(FVector3d(100.0f, 100.0f * i, 100.0f)), GetActorRotation(), spawnParams);
		newPiece->AttachToComponent(mScene, rules);
		newPiece->X = i;
		newPiece->Y = 1;
		mSpaces[1][i]->SetPiece(newPiece);
		newPiece->SetSpace(mSpaces[1][i]);
		mPieces.Add(newPiece);

		newPiece = GetWorld()->SpawnActor<AChessPiece>(mChessPiece, GetActorLocation() + FTransform(GetActorRotation()).TransformVector(FVector3d(100.0f * (mBoardY - 2), 100.0f * i, 100.0f)), GetActorRotation(), spawnParams);
		newPiece->AttachToComponent(mScene, rules);
		newPiece->X = i;
		newPiece->Y = 6;
		mSpaces[mBoardY - 2][i]->SetPiece(newPiece);
		newPiece->SetSpace(mSpaces[mBoardY - 2][i]);
		newPiece->SwapMaterial();
		newPiece->SetPlayerID(1);
		mPieces.Add(newPiece);

		//Spawn rest of the pieces
		EPieceType temptype = EPieceType::Pawn;
		if (i == 0 || i == mBoardY - 1)
		{
			temptype = EPieceType::Rook;
		}
		else if (i == 1 || i == mBoardY - 2)
		{
			temptype = EPieceType::Knight;
		}
		else if (i == 2 || i == mBoardY - 3)
		{
			temptype = EPieceType::Bishop;
		}
		else if (i == 3 )
		{
			temptype = EPieceType::Queen;
		}
		else if (i == mBoardY - 4)
		{
			temptype = EPieceType::King;
		}

		newPiece = GetWorld()->SpawnActor<AChessPiece>(mChessPiece, GetActorLocation() + FTransform(GetActorRotation()).TransformVector(FVector3d(0.0f, 100.0f * i, 100.0f)), GetActorRotation(), spawnParams);
		newPiece->AttachToComponent(mScene, rules);
		newPiece->X = i;
		newPiece->Y = 0;
		mSpaces[0][i]->SetPiece(newPiece);
		newPiece->SetSpace(mSpaces[0][i]);
		newPiece->SetType(temptype);
		mPieces.Add(newPiece);

		newPiece = GetWorld()->SpawnActor<AChessPiece>(mChessPiece, GetActorLocation() + FTransform(GetActorRotation()).TransformVector(FVector3d(100.0f * (mBoardY - 1), 100.0f * i, 100.0f)), GetActorRotation(), spawnParams);
		newPiece->AttachToComponent(mScene, rules);
		newPiece->X = i;
		newPiece->Y = mBoardY - 1;
		mSpaces[mBoardY - 1][i]->SetPiece(newPiece);
		newPiece->SetSpace(mSpaces[mBoardY - 1][i]);
		newPiece->SetType(temptype);
		newPiece->SwapMaterial();
		newPiece->SetPlayerID(1);
		mPieces.Add(newPiece);

	}
}

bool ABoard::CheckMove()
{
	AChessPiece* piece = mGameMode->GetSelecetedPiece();
	ASpace* space = mGameMode->GetSelecetedSpace();

	if (piece != nullptr)
	{
		EPieceType type = piece->GetType();
		bool canMove = false;

		//If a piece of the same colour or a wall is currently on the space it is a invalid move
		if (space->GetPiece() != nullptr && (space->GetPiece()->GetPlayerID() == piece->GetPlayerID() || space->GetPiece()->GetType() == Wall))
		{
			return false;
		}

		if (type == Pawn)
		{
			//If its a white pawn
			if (piece->GetPlayerID() == 0)
			{
				//Normal Move
				if (space->Y - piece->Y == 1 && abs(piece->X - space->X) == 0)
				{
					//If the pawn reaches the other side, make it a queen
					if (space->Y == mBoardY - 1)
					{
						piece->SetType(Queen);
					}

					SpawnWall(piece->X, piece->Y, 8);

					return true;
				}
				//Can move 2 spaces if it hasn't moved yet
				else if (piece->Y == 1 && space->Y - piece->Y == 2 && abs(piece->X - space->X) == 0)
				{
					//Check nothing is directly infront of it
					if (mSpaces[piece->Y + 1][piece->X]->GetPiece() == nullptr)
					{
						SpawnWall(piece->X, piece->Y, 4);
						SpawnWall(piece->X, piece->Y + 1, 6);
						return true;
					}					
				}
				//Diagonal Move to take a piece
				else if (space->Y - piece->Y == 1 && abs(piece->X - space->X) == 1 && space->GetPiece() != nullptr && space->GetPiece()->GetPlayerID() != piece->GetPlayerID())
				{
					//If the pawn reaches the other side, make it a queen
					if (space->Y == mBoardY - 1)
					{
						piece->SetType(Queen);
					}

					SpawnWall(piece->X, piece->Y, 8);

					return true;
				}
			}
			//If its a black pawn
			if (piece->GetPlayerID() == 1)
			{
				//Normal Move
				if (space->Y - piece->Y == - 1 && abs(piece->X - space->X) == 0)
				{
					//If the pawn reaches the other side, make it a queen
					if (space->Y == 0)
					{
						piece->SetType(Queen);
					}

					SpawnWall(piece->X, piece->Y, 8);

					return true;
				}
				//Can move 2 spaces if it hasn't moved yet
				else if (piece->Y == 6 && space->Y - piece->Y == -2 && abs(piece->X - space->X) == 0)
				{
					//Check nothing is directly infront of it
					if (mSpaces[piece->Y - 1][piece->X]->GetPiece() == nullptr)
					{
						SpawnWall(piece->X, piece->Y, 4);
						SpawnWall(piece->X, piece->Y - 1, 6);
						return true;
					}
				}
				//Diagonal Move to take a piece
				else if (space->Y - piece->Y == -1 && abs(piece->X - space->X) == 1 && space->GetPiece() != nullptr && space->GetPiece()->GetPlayerID() != piece->GetPlayerID())
				{
					//If the pawn reaches the other side, make it a queen
					if (space->Y == 0)
					{
						piece->SetType(Queen);
					}

					SpawnWall(piece->X, piece->Y, 8);

					return true;
				}
			}
		}
		else if (type == Rook)
		{
			if ((abs(piece->Y - space->Y) > 0 && piece->X - space->X == 0)
				|| (abs(piece->X - space->X) > 0 && piece->Y - space->Y == 0))
			{
				int tempX = piece->X;
				int tempY = piece->Y;

				//Check if another piece is blocking the move
				while (tempX != space->X || tempY != space->Y)
				{
					//Iterate between the piece and selected space horizontally/vertical line				
					if (tempX != space->X)
					{
						tempX > space->X ? --tempX : ++tempX;
					}
					else
					{
						tempY > space->Y ? --tempY : ++tempY;
					}

					//Check the space to see if something is in the way
					if (mSpaces[tempY][tempX]->GetPiece() != nullptr && (tempX != space->X || tempY != space->Y))
					{
						return false;
					}
				}

				//Place walls along where the piece is moving
				tempX = piece->X;
				tempY = piece->Y;
				int timer = 2;
				while (tempX != space->X || tempY != space->Y)
				{
					SpawnWall(tempX, tempY, timer);
					//Iterate between the piece and selected space horizontally/vertical line				
					if (tempX != space->X)
					{
						tempX > space->X ? --tempX : ++tempX;
					}
					else
					{
						tempY > space->Y ? --tempY : ++tempY;
					}					
					timer += 2;
				}
				return true;
			}
		}
		else if (type == Bishop)
		{
			if (abs(piece->Y - space->Y) == abs(piece->X - space->X))
			{
				int tempX = piece->X;
				int tempY = piece->Y;

				//Check if another piece is blocking the move
				while (tempX != space->X && tempY != space->Y)
				{
					//Iterate between the piece and selected space diagonally					
					tempX > space->X ? --tempX : ++tempX;
					tempY > space->Y ? --tempY : ++tempY;					

					//Check the space to see if something is in the way
					if (mSpaces[tempY][tempX]->GetPiece() != nullptr && (tempX != space->X && tempY != space->Y))
					{
						return false;
					}
				}

				//Place walls along where the piece is moving
				tempX = piece->X;
				tempY = piece->Y;
				int timer = 2;
				while (tempX != space->X && tempY != space->Y)
				{
					SpawnWall(tempX, tempY, timer);
					//Iterate between the piece and selected space diagonally					
					tempX > space->X ? --tempX : ++tempX;
					tempY > space->Y ? --tempY : ++tempY;
					timer += 2;
				}

				return true;
			}
		}
		else if (type == Knight)
		{
			if ((abs(piece->Y - space->Y) == 2 && abs(piece->X - space->X) == 1)
				|| (abs(piece->Y - space->Y) == 1 && abs(piece->X - space->X) == 2))
			{
				return true;
			}
		}
		else if (type == Queen)
		{
			if ((piece->Y != space->Y || piece->X != space->X)
				&& (abs(piece->Y - space->Y) == abs(piece->X - space->X) || piece->Y == space->Y || piece->X == space->X))
			{
				int tempX = piece->X;
				int tempY = piece->Y;	

				//Check if another piece is blocking the move
				while (tempX != space->X || tempY != space->Y)
				{
					//Iterate between the piece and selected space either in a horizontally/Vertical line or diagonally
					if (tempX != space->X)
					{
						tempX > space->X ? --tempX : ++tempX;
					}
					if (tempY != space->Y)
					{
						tempY > space->Y ? --tempY : ++tempY;
					}

					//Check the space to see if something is in the way
					if (mSpaces[tempY][tempX]->GetPiece() != nullptr && (tempX != space->X || tempY != space->Y))
					{
						return false;
					}
				}

				//Place walls along where the piece is moving
				tempX = piece->X;
				tempY = piece->Y;
				int timer = 2;
				while (tempX != space->X || tempY != space->Y)
				{
					SpawnWall(tempX, tempY, timer);
					//Iterate between the piece and selected space horizontally/vertical line				
					if (tempX != space->X)
					{
						tempX > space->X ? --tempX : ++tempX;
					}
					if (tempY != space->Y)
					{
						tempY > space->Y ? --tempY : ++tempY;
					}
					timer += 2;
				}
				return true;
			}
		}
		else if (type == King)
		{
			if ((abs(piece->Y - space->Y) == 1 && abs(piece->X - space->X) == 1)
				|| (abs(piece->Y - space->Y) == 0 && abs(piece->X - space->X) == 1)
				|| (abs(piece->Y - space->Y) == 1 && abs(piece->X - space->X) == 0))
			{
				SpawnWall(piece->X, piece->Y, 10);
				return true;
			}
		}

		return false;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No piece selected"));
	}

	return false;
}

void ABoard::RemovePiece(AChessPiece* piece)
{
	mPieces.Remove(piece);
}

void ABoard::SpawnWall(int x, int y, int time)
{
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = GetInstigator();

	FAttachmentTransformRules rules = FAttachmentTransformRules::SnapToTargetIncludingScale;
	rules.LocationRule = EAttachmentRule::KeepWorld;
	rules.RotationRule = EAttachmentRule::KeepWorld;
	rules.ScaleRule = EAttachmentRule::KeepWorld;
	rules.bWeldSimulatedBodies = true;

	AChessPiece* newPiece = GetWorld()->SpawnActor<AChessPiece>(mChessPiece, GetActorLocation() + FTransform(GetActorRotation()).TransformVector(FVector3d(100.0f * y, 100.0f * x, 100.0f)), GetActorRotation(), spawnParams);
	newPiece->AttachToComponent(mScene, rules);
	newPiece->X = x;
	newPiece->Y = y;
	mSpaces[y][x]->SetPiece(newPiece);
	newPiece->SetSpace(mSpaces[y][x]);
	newPiece->SetType(Wall);
	newPiece->SetScale(FVector(1, 1, 1));
	newPiece->SetPlayerID(mGameMode->GetCurrentPlayer());

	if (mGameMode->GetCurrentPlayer() == 1)
	{
		newPiece->SwapMaterial();
	}
	mGameMode->AddWall(newPiece, time);
}
