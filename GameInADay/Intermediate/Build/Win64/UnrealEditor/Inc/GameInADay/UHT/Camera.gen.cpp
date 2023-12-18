// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInADay/Camera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	GAMEINADAY_API UClass* Z_Construct_UClass_ACamera();
	GAMEINADAY_API UClass* Z_Construct_UClass_ACamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInADay();
// End Cross Module References
	void ACamera::StaticRegisterNativesACamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACamera);
	UClass* Z_Construct_UClass_ACamera_NoRegister()
	{
		return ACamera::StaticClass();
	}
	struct Z_Construct_UClass_ACamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInADay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Camera.h" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_mScene_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_mScene = { "mScene", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACamera, mScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_mScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_mScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_mSpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_mSpringArm = { "mSpringArm", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACamera, mSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_mSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_mSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_mCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_mCamera = { "mCamera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACamera, mCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_mCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_mCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_mScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_mSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_mCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACamera_Statics::ClassParams = {
		&ACamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamera()
	{
		if (!Z_Registration_Info_UClass_ACamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACamera.OuterSingleton, Z_Construct_UClass_ACamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACamera.OuterSingleton;
	}
	template<> GAMEINADAY_API UClass* StaticClass<ACamera>()
	{
		return ACamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamera);
	ACamera::~ACamera() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Advance_Games_Game_in_a_Day_GameInADay_Source_GameInADay_Camera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Advance_Games_Game_in_a_Day_GameInADay_Source_GameInADay_Camera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACamera, ACamera::StaticClass, TEXT("ACamera"), &Z_Registration_Info_UClass_ACamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACamera), 2072114522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Advance_Games_Game_in_a_Day_GameInADay_Source_GameInADay_Camera_h_954237945(TEXT("/Script/GameInADay"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Advance_Games_Game_in_a_Day_GameInADay_Source_GameInADay_Camera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Advance_Games_Game_in_a_Day_GameInADay_Source_GameInADay_Camera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
