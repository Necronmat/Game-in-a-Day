// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInADay/Board.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoard() {}
// Cross Module References
	GAMEINADAY_API UClass* Z_Construct_UClass_ABoard_NoRegister();
	GAMEINADAY_API UClass* Z_Construct_UClass_ABoard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameInADay();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEINADAY_API UClass* Z_Construct_UClass_ASpace_NoRegister();
	GAMEINADAY_API UClass* Z_Construct_UClass_AChessPiece_NoRegister();
// End Cross Module References
	void ABoard::StaticRegisterNativesABoard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoard);
	UClass* Z_Construct_UClass_ABoard_NoRegister()
	{
		return ABoard::StaticClass();
	}
	struct Z_Construct_UClass_ABoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpace_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mChessPiece_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mChessPiece;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInADay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Board.h" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_mSpace_MetaData[] = {
		{ "Category", "Board" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_mSpace = { "mSpace", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, mSpace), Z_Construct_UClass_ASpace_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_mSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_mSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_mChessPiece_MetaData[] = {
		{ "Category", "Board" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_mChessPiece = { "mChessPiece", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, mChessPiece), Z_Construct_UClass_AChessPiece_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_mChessPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_mChessPiece_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_mSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_mChessPiece,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoard_Statics::ClassParams = {
		&ABoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoard()
	{
		if (!Z_Registration_Info_UClass_ABoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoard.OuterSingleton, Z_Construct_UClass_ABoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoard.OuterSingleton;
	}
	template<> GAMEINADAY_API UClass* StaticClass<ABoard>()
	{
		return ABoard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoard);
	struct Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_Board_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_Board_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoard, ABoard::StaticClass, TEXT("ABoard"), &Z_Registration_Info_UClass_ABoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoard), 441755353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_Board_h_3603459998(TEXT("/Script/GameInADay"),
		Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_Board_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_Board_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
