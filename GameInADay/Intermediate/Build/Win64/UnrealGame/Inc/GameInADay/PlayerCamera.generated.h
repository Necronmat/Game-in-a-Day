// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEINADAY_PlayerCamera_generated_h
#error "PlayerCamera.generated.h already included, missing '#pragma once' in PlayerCamera.h"
#endif
#define GAMEINADAY_PlayerCamera_generated_h

#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_SPARSE_DATA
#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_RPC_WRAPPERS
#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCamera(); \
	friend struct Z_Construct_UClass_APlayerCamera_Statics; \
public: \
	DECLARE_CLASS(APlayerCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInADay"), NO_API) \
	DECLARE_SERIALIZER(APlayerCamera)


#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCamera(); \
	friend struct Z_Construct_UClass_APlayerCamera_Statics; \
public: \
	DECLARE_CLASS(APlayerCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInADay"), NO_API) \
	DECLARE_SERIALIZER(APlayerCamera)


#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCamera(APlayerCamera&&); \
	NO_API APlayerCamera(const APlayerCamera&); \
public:


#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCamera(APlayerCamera&&); \
	NO_API APlayerCamera(const APlayerCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCamera)


#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_12_PROLOG
#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_SPARSE_DATA \
	FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_RPC_WRAPPERS \
	FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_INCLASS \
	FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_SPARSE_DATA \
	FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameInADay_Source_GameInADay_PlayerCamera_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEINADAY_API UClass* StaticClass<class APlayerCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameInADay_Source_GameInADay_PlayerCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
