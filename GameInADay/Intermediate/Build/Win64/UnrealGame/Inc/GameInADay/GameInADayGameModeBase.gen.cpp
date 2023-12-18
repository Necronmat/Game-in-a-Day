// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInADay/GameInADayGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInADayGameModeBase() {}
// Cross Module References
	GAMEINADAY_API UClass* Z_Construct_UClass_AGameInADayGameModeBase_NoRegister();
	GAMEINADAY_API UClass* Z_Construct_UClass_AGameInADayGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameInADay();
	GAMEINADAY_API UClass* Z_Construct_UClass_ABoard_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameInADayGameModeBase::execDisplaySpace)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplaySpace_Implementation(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameInADayGameModeBase::execDisplayPlayersTurn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayPlayersTurn_Implementation(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameInADayGameModeBase::execDisplayHover)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_player);
		P_GET_PROPERTY(FIntProperty,Z_Param_piece);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayHover_Implementation(Z_Param_player,Z_Param_piece);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameInADayGameModeBase::execGameOver)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_winner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameOver_Implementation(Z_Param_winner);
		P_NATIVE_END;
	}
	static FName NAME_AGameInADayGameModeBase_DisplayHover = FName(TEXT("DisplayHover"));
	void AGameInADayGameModeBase::DisplayHover(int32 player, int32 piece)
	{
		GameInADayGameModeBase_eventDisplayHover_Parms Parms;
		Parms.player=player;
		Parms.piece=piece;
		ProcessEvent(FindFunctionChecked(NAME_AGameInADayGameModeBase_DisplayHover),&Parms);
	}
	static FName NAME_AGameInADayGameModeBase_DisplayPlayersTurn = FName(TEXT("DisplayPlayersTurn"));
	void AGameInADayGameModeBase::DisplayPlayersTurn(int32 player)
	{
		GameInADayGameModeBase_eventDisplayPlayersTurn_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_AGameInADayGameModeBase_DisplayPlayersTurn),&Parms);
	}
	static FName NAME_AGameInADayGameModeBase_DisplaySpace = FName(TEXT("DisplaySpace"));
	void AGameInADayGameModeBase::DisplaySpace(int32 x, int32 y)
	{
		GameInADayGameModeBase_eventDisplaySpace_Parms Parms;
		Parms.x=x;
		Parms.y=y;
		ProcessEvent(FindFunctionChecked(NAME_AGameInADayGameModeBase_DisplaySpace),&Parms);
	}
	static FName NAME_AGameInADayGameModeBase_GameOver = FName(TEXT("GameOver"));
	void AGameInADayGameModeBase::GameOver(int32 winner)
	{
		GameInADayGameModeBase_eventGameOver_Parms Parms;
		Parms.winner=winner;
		ProcessEvent(FindFunctionChecked(NAME_AGameInADayGameModeBase_GameOver),&Parms);
	}
	void AGameInADayGameModeBase::StaticRegisterNativesAGameInADayGameModeBase()
	{
		UClass* Class = AGameInADayGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayHover", &AGameInADayGameModeBase::execDisplayHover },
			{ "DisplayPlayersTurn", &AGameInADayGameModeBase::execDisplayPlayersTurn },
			{ "DisplaySpace", &AGameInADayGameModeBase::execDisplaySpace },
			{ "GameOver", &AGameInADayGameModeBase::execGameOver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_player;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_piece;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInADayGameModeBase_eventDisplayHover_Parms, player), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::NewProp_piece = { "piece", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInADayGameModeBase_eventDisplayHover_Parms, piece), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::NewProp_piece,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameInADayGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameInADayGameModeBase, nullptr, "DisplayHover", nullptr, nullptr, sizeof(GameInADayGameModeBase_eventDisplayHover_Parms), Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInADayGameModeBase_eventDisplayPlayersTurn_Parms, player), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameInADayGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameInADayGameModeBase, nullptr, "DisplayPlayersTurn", nullptr, nullptr, sizeof(GameInADayGameModeBase_eventDisplayPlayersTurn_Parms), Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInADayGameModeBase_eventDisplaySpace_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInADayGameModeBase_eventDisplaySpace_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameInADayGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameInADayGameModeBase, nullptr, "DisplaySpace", nullptr, nullptr, sizeof(GameInADayGameModeBase_eventDisplaySpace_Parms), Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_winner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::NewProp_winner = { "winner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInADayGameModeBase_eventGameOver_Parms, winner), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::NewProp_winner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameInADayGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameInADayGameModeBase, nullptr, "GameOver", nullptr, nullptr, sizeof(GameInADayGameModeBase_eventGameOver_Parms), Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameInADayGameModeBase_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameInADayGameModeBase_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameInADayGameModeBase);
	UClass* Z_Construct_UClass_AGameInADayGameModeBase_NoRegister()
	{
		return AGameInADayGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGameInADayGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameBoard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGameBoard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameWon_MetaData[];
#endif
		static void NewProp_mGameWon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mGameWon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameInADayGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInADay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameInADayGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameInADayGameModeBase_DisplayHover, "DisplayHover" }, // 3114284430
		{ &Z_Construct_UFunction_AGameInADayGameModeBase_DisplayPlayersTurn, "DisplayPlayersTurn" }, // 2430082025
		{ &Z_Construct_UFunction_AGameInADayGameModeBase_DisplaySpace, "DisplaySpace" }, // 2633618517
		{ &Z_Construct_UFunction_AGameInADayGameModeBase_GameOver, "GameOver" }, // 1624343801
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameInADayGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameInADayGameModeBase.h" },
		{ "ModuleRelativePath", "GameInADayGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameBoard_MetaData[] = {
		{ "Category", "GameInADayGameModeBase" },
		{ "ModuleRelativePath", "GameInADayGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameBoard = { "mGameBoard", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameInADayGameModeBase, mGameBoard), Z_Construct_UClass_ABoard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameBoard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameBoard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameWon_MetaData[] = {
		{ "Category", "GameInADayGameModeBase" },
		{ "ModuleRelativePath", "GameInADayGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameWon_SetBit(void* Obj)
	{
		((AGameInADayGameModeBase*)Obj)->mGameWon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameWon = { "mGameWon", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameInADayGameModeBase), &Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameWon_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameWon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameWon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameInADayGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameBoard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameInADayGameModeBase_Statics::NewProp_mGameWon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameInADayGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameInADayGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameInADayGameModeBase_Statics::ClassParams = {
		&AGameInADayGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameInADayGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameInADayGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameInADayGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameInADayGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameInADayGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGameInADayGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameInADayGameModeBase.OuterSingleton, Z_Construct_UClass_AGameInADayGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameInADayGameModeBase.OuterSingleton;
	}
	template<> GAMEINADAY_API UClass* StaticClass<AGameInADayGameModeBase>()
	{
		return AGameInADayGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameInADayGameModeBase);
	struct Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameInADayGameModeBase, AGameInADayGameModeBase::StaticClass, TEXT("AGameInADayGameModeBase"), &Z_Registration_Info_UClass_AGameInADayGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameInADayGameModeBase), 3290045513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_2897108515(TEXT("/Script/GameInADay"),
		Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
