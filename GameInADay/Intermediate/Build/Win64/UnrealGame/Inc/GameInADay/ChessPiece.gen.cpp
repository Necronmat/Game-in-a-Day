// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInADay/ChessPiece.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChessPiece() {}
// Cross Module References
	GAMEINADAY_API UClass* Z_Construct_UClass_AChessPiece_NoRegister();
	GAMEINADAY_API UClass* Z_Construct_UClass_AChessPiece();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameInADay();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AChessPiece::execHoverOver)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoverOver(Z_Param_TouchedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChessPiece::execMakeMove)
	{
		P_GET_OBJECT(AActor,Z_Param_TouchedActor);
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeMove(Z_Param_TouchedActor,Z_Param_ButtonPressed);
		P_NATIVE_END;
	}
	void AChessPiece::StaticRegisterNativesAChessPiece()
	{
		UClass* Class = AChessPiece::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HoverOver", &AChessPiece::execHoverOver },
			{ "MakeMove", &AChessPiece::execMakeMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChessPiece_HoverOver_Statics
	{
		struct ChessPiece_eventHoverOver_Parms
		{
			UPrimitiveComponent* TouchedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessPiece_HoverOver_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChessPiece_HoverOver_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessPiece_eventHoverOver_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AChessPiece_HoverOver_Statics::NewProp_TouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_HoverOver_Statics::NewProp_TouchedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessPiece_HoverOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessPiece_HoverOver_Statics::NewProp_TouchedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessPiece_HoverOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessPiece_HoverOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessPiece, nullptr, "HoverOver", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChessPiece_HoverOver_Statics::ChessPiece_eventHoverOver_Parms), Z_Construct_UFunction_AChessPiece_HoverOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_HoverOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessPiece_HoverOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_HoverOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessPiece_HoverOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChessPiece_HoverOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChessPiece_MakeMove_Statics
	{
		struct ChessPiece_eventMakeMove_Parms
		{
			AActor* TouchedActor;
			FKey ButtonPressed;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChessPiece_MakeMove_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessPiece_eventMakeMove_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChessPiece_MakeMove_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessPiece_eventMakeMove_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessPiece_MakeMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessPiece_MakeMove_Statics::NewProp_TouchedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessPiece_MakeMove_Statics::NewProp_ButtonPressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessPiece_MakeMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessPiece_MakeMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessPiece, nullptr, "MakeMove", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChessPiece_MakeMove_Statics::ChessPiece_eventMakeMove_Parms), Z_Construct_UFunction_AChessPiece_MakeMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_MakeMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessPiece_MakeMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_MakeMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessPiece_MakeMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChessPiece_MakeMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChessPiece);
	UClass* Z_Construct_UClass_AChessPiece_NoRegister()
	{
		return AChessPiece::StaticClass();
	}
	struct Z_Construct_UClass_AChessPiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaterialBlack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mMaterialBlack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaterialWhite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mMaterialWhite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChessPiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInADay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChessPiece_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChessPiece_HoverOver, "HoverOver" }, // 4180523864
		{ &Z_Construct_UFunction_AChessPiece_MakeMove, "MakeMove" }, // 2764519020
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChessPiece.h" },
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_mMesh_MetaData[] = {
		{ "Category", "ChessPiece" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_mMesh = { "mMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChessPiece, mMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_mMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_mMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialBlack_MetaData[] = {
		{ "Category", "ChessPiece" },
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialBlack = { "mMaterialBlack", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChessPiece, mMaterialBlack), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialBlack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialBlack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialWhite_MetaData[] = {
		{ "Category", "ChessPiece" },
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialWhite = { "mMaterialWhite", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChessPiece, mMaterialWhite), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialWhite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialWhite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChessPiece_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_mMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialBlack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_mMaterialWhite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChessPiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChessPiece>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChessPiece_Statics::ClassParams = {
		&AChessPiece::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChessPiece_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChessPiece()
	{
		if (!Z_Registration_Info_UClass_AChessPiece.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChessPiece.OuterSingleton, Z_Construct_UClass_AChessPiece_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChessPiece.OuterSingleton;
	}
	template<> GAMEINADAY_API UClass* StaticClass<AChessPiece>()
	{
		return AChessPiece::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChessPiece);
	struct Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_ChessPiece_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_ChessPiece_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChessPiece, AChessPiece::StaticClass, TEXT("AChessPiece"), &Z_Registration_Info_UClass_AChessPiece, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChessPiece), 447227287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_ChessPiece_h_3898624432(TEXT("/Script/GameInADay"),
		Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_ChessPiece_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameInADay_Source_GameInADay_ChessPiece_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
