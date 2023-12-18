// Fill out your copyright notice in the Description page of Project Settings.

#include "ChessPiece.h"
#include "GameInADayGameModeBase.h"

// Sets default values
AChessPiece::AChessPiece()
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
}

// Called when the game starts or when spawned
void AChessPiece::BeginPlay()
{
	Super::BeginPlay();
	
	mDynamicMaterialInstBlack = UMaterialInstanceDynamic::Create(mMaterialBlack, this);
	mDynamicMaterialInstWhite = UMaterialInstanceDynamic::Create(mMaterialWhite, this);

	mMesh->SetMaterial(0, mDynamicMaterialInstWhite);

	OnClicked.AddDynamic(this, &AChessPiece::MakeMove);
	mMesh->OnBeginCursorOver.AddDynamic(this, &AChessPiece::HoverOver);

	mGameMode = Cast<AGameInADayGameModeBase>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void AChessPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

EPieceType AChessPiece::GetType()
{
	return mType;
}

void AChessPiece::SetType(EPieceType newType)
{
	mType = newType;
}

int AChessPiece::GetPlayerID()
{
	return mPlayerID;
}

void AChessPiece::SetPlayerID(int newID)
{
	mPlayerID = newID;
}

ASpace* AChessPiece::GetSpace()
{
	return mCurrentSpace;
}

void AChessPiece::SetSpace(ASpace* newSpace)
{
	mCurrentSpace = newSpace;
}

void AChessPiece::SwapMaterial()
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

void AChessPiece::SetScale(FVector newScale)
{
	mMesh->SetWorldScale3D(newScale);
}

UFUNCTION()
void AChessPiece::MakeMove(AActor* TouchedActor, FKey ButtonPressed)
{
	UE_LOG(LogTemp, Warning, TEXT("X: %f  Y: %f"), float(X), float(Y));
	if (mGameMode->GetCurrentPlayer() == mPlayerID && mType != Wall)
	{
		mGameMode->SetSelecetedPiece(this);
	}	
}

void AChessPiece::HoverOver(UPrimitiveComponent* TouchedComponent)
{
	mGameMode->DisplayHover(mPlayerID, mType);
}
