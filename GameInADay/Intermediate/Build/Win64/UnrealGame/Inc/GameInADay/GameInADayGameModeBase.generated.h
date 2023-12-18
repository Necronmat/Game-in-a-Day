// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEINADAY_GameInADayGameModeBase_generated_h
#error "GameInADayGameModeBase.generated.h already included, missing '#pragma once' in GameInADayGameModeBase.h"
#endif
#define GAMEINADAY_GameInADayGameModeBase_generated_h

#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_SPARSE_DATA
#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_RPC_WRAPPERS \
	virtual void DisplaySpace_Implementation(int32 x, int32 y); \
	virtual void DisplayPlayersTurn_Implementation(int32 player); \
	virtual void DisplayHover_Implementation(int32 player, int32 piece); \
	virtual void GameOver_Implementation(int32 winner); \
 \
	DECLARE_FUNCTION(execDisplaySpace); \
	DECLARE_FUNCTION(execDisplayPlayersTurn); \
	DECLARE_FUNCTION(execDisplayHover); \
	DECLARE_FUNCTION(execGameOver);


#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DisplaySpace_Implementation(int32 x, int32 y); \
	virtual void DisplayPlayersTurn_Implementation(int32 player); \
	virtual void DisplayHover_Implementation(int32 player, int32 piece); \
	virtual void GameOver_Implementation(int32 winner); \
 \
	DECLARE_FUNCTION(execDisplaySpace); \
	DECLARE_FUNCTION(execDisplayPlayersTurn); \
	DECLARE_FUNCTION(execDisplayHover); \
	DECLARE_FUNCTION(execGameOver);


#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_EVENT_PARMS \
	struct GameInADayGameModeBase_eventDisplayHover_Parms \
	{ \
		int32 player; \
		int32 piece; \
	}; \
	struct GameInADayGameModeBase_eventDisplayPlayersTurn_Parms \
	{ \
		int32 player; \
	}; \
	struct GameInADayGameModeBase_eventDisplaySpace_Parms \
	{ \
		int32 x; \
		int32 y; \
	}; \
	struct GameInADayGameModeBase_eventGameOver_Parms \
	{ \
		int32 winner; \
	};


#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_CALLBACK_WRAPPERS
#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameInADayGameModeBase(); \
	friend struct Z_Construct_UClass_AGameInADayGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGameInADayGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInADay"), NO_API) \
	DECLARE_SERIALIZER(AGameInADayGameModeBase)


#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGameInADayGameModeBase(); \
	friend struct Z_Construct_UClass_AGameInADayGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGameInADayGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInADay"), NO_API) \
	DECLARE_SERIALIZER(AGameInADayGameModeBase)


#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameInADayGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameInADayGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameInADayGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameInADayGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameInADayGameModeBase(AGameInADayGameModeBase&&); \
	NO_API AGameInADayGameModeBase(const AGameInADayGameModeBase&); \
public:


#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameInADayGameModeBase(AGameInADayGameModeBase&&); \
	NO_API AGameInADayGameModeBase(const AGameInADayGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameInADayGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameInADayGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameInADayGameModeBase)


#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_14_PROLOG \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_EVENT_PARMS


#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_SPARSE_DATA \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_RPC_WRAPPERS \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_CALLBACK_WRAPPERS \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_INCLASS \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_SPARSE_DATA \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_CALLBACK_WRAPPERS \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEINADAY_API UClass* StaticClass<class AGameInADayGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameInADay_Source_GameInADay_GameInADayGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
