// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FKey;
#ifdef GAMEINADAY_Space_generated_h
#error "Space.generated.h already included, missing '#pragma once' in Space.h"
#endif
#define GAMEINADAY_Space_generated_h

#define FID_GameInADay_Source_GameInADay_Space_h_18_SPARSE_DATA
#define FID_GameInADay_Source_GameInADay_Space_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHoverOver); \
	DECLARE_FUNCTION(execCheckMove);


#define FID_GameInADay_Source_GameInADay_Space_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHoverOver); \
	DECLARE_FUNCTION(execCheckMove);


#define FID_GameInADay_Source_GameInADay_Space_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpace(); \
	friend struct Z_Construct_UClass_ASpace_Statics; \
public: \
	DECLARE_CLASS(ASpace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInADay"), NO_API) \
	DECLARE_SERIALIZER(ASpace)


#define FID_GameInADay_Source_GameInADay_Space_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASpace(); \
	friend struct Z_Construct_UClass_ASpace_Statics; \
public: \
	DECLARE_CLASS(ASpace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInADay"), NO_API) \
	DECLARE_SERIALIZER(ASpace)


#define FID_GameInADay_Source_GameInADay_Space_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpace(ASpace&&); \
	NO_API ASpace(const ASpace&); \
public:


#define FID_GameInADay_Source_GameInADay_Space_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpace(ASpace&&); \
	NO_API ASpace(const ASpace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpace)


#define FID_GameInADay_Source_GameInADay_Space_h_15_PROLOG
#define FID_GameInADay_Source_GameInADay_Space_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameInADay_Source_GameInADay_Space_h_18_SPARSE_DATA \
	FID_GameInADay_Source_GameInADay_Space_h_18_RPC_WRAPPERS \
	FID_GameInADay_Source_GameInADay_Space_h_18_INCLASS \
	FID_GameInADay_Source_GameInADay_Space_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameInADay_Source_GameInADay_Space_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameInADay_Source_GameInADay_Space_h_18_SPARSE_DATA \
	FID_GameInADay_Source_GameInADay_Space_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameInADay_Source_GameInADay_Space_h_18_INCLASS_NO_PURE_DECLS \
	FID_GameInADay_Source_GameInADay_Space_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEINADAY_API UClass* StaticClass<class ASpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameInADay_Source_GameInADay_Space_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
