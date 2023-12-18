// Fill out your copyright notice in the Description page of Project Settings.

#include "Space.h"
#include "GameInADayGameModeBase.h"

// Sets default values
ASpace::ASpace()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	ConstructorHelpers::FObjectFinder<UStaticMesh>FoundMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (FoundMesh.Succeeded())
	{
		mMesh->SetStaticMesh(FoundMesh.Object);
	}
	SetRootComponent(mMesh);

	ConstructorHelpers::FObjectFinder<UMaterialInstance>FoundMaterial(TEXT("MaterialInstanceConstant'/Game/Objects/M_BoardMaterial_Inst.M_BoardMaterial_Inst'"));
	if (FoundMaterial.Succeeded())
	{
		mMaterialBlack = FoundMaterial.Object;
	}	

	ConstructorHelpers::FObjectFinder<UMaterialInstance>FoundMaterial2(TEXT("MaterialInstanceConstant'/Game/Objects/M_BoardMaterial2_Inst.M_BoardMaterial2_Inst'"));
	if (FoundMaterial2.Succeeded())
	{
		mMaterialWhite = FoundMaterial2.Object;
	}	

	OnClicked.AddDynamic(this, &ASpace::CheckMove);
}

// Called when the game starts or when spawned
void ASpace::BeginPlay()
{
	Super::BeginPlay();

	mDynamicMaterialInstBlack = UMaterialInstanceDynamic::Create(mMaterialBlack, this);
	mDynamicMaterialInstWhite = UMaterialInstanceDynamic::Create(mMaterialWhite, this);

	mMesh->SetMaterial(0, mDynamicMaterialInstWhite);

	mMesh->OnBeginCursorOver.AddDynamic(this, &ASpace::HoverOver);

	mGameMode = Cast<AGameInADayGameModeBase>(GetWorld()->GetAuthGameMode());	
}

// Called every frame
void ASpace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ASpace::SwapMaterial()
{
	if (mMesh->GetMaterial(0) == mDynamicMaterialInstBlack)
	{
		mMesh->SetMaterial(0, mDynamicMaterialInstWhite);
	}
	else
	{
		mMesh->SetMaterial(0, mDynamicMaterialInstBlack);
	}
}

void ASpace::SetBoard(ABoard* newBoard)
{
	mBoard = newBoard;
}

AChessPiece* ASpace::GetPiece()
{
	return mCurrentPiece;
}

void ASpace::SetPiece(AChessPiece* newActor)
{
	mCurrentPiece = newActor;
}

UFUNCTION()
void ASpace::CheckMove(AActor* TouchedActor, FKey ButtonPressed)
{
	UE_LOG(LogTemp, Warning, TEXT("X: %f  Y: %f"), float(X), float(Y));
	mGameMode->SetSelecetedSpace(this);

	if (mBoard->CheckMove())
	{
		AChessPiece* piece = mGameMode->GetSelecetedPiece();
		
		if (mCurrentPiece != nullptr)
		{
			if (mCurrentPiece->GetType() == King)
			{
				mGameMode->GameOver(piece->GetPlayerID());
			}

			mBoard->RemovePiece(mCurrentPiece);
			mCurrentPiece->Destroy();
		}

		//Move the piece to this tile
		piece->X = X;
		piece->Y = Y;
		piece->SetActorLocation(GetActorLocation() + FVector(0, 0, 100.0f));
		if (piece->GetType() == Knight)
		{
			piece->GetSpace()->SetPiece(nullptr);
		}
		piece->SetSpace(this);
		mCurrentPiece = piece;

		//reset the selected piece and space. Set it to the other players turn
		mGameMode->SetCurrentPlayer(abs(mGameMode->GetCurrentPlayer() - 1));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid Move"));
	}	

	mGameMode->SetSelecetedPiece(nullptr);
	mGameMode->SetSelecetedSpace(nullptr);
}

void ASpace::HoverOver(UPrimitiveComponent* TouchedComponent)
{
	mGameMode->DisplaySpace(X, Y);
}

