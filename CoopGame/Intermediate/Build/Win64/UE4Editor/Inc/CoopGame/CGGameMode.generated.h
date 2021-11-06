// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
#ifdef COOPGAME_CGGameMode_generated_h
#error "CGGameMode.generated.h already included, missing '#pragma once' in CGGameMode.h"
#endif
#define COOPGAME_CGGameMode_generated_h

#define CoopGame_Source_CoopGame_Public_CGGameMode_h_13_DELEGATE \
struct _Script_CoopGame_eventOnActorKilled_Parms \
{ \
	AActor* VictimActor; \
	AActor* KillerActor; \
	AController* KillerController; \
}; \
static inline void FOnActorKilled_DelegateWrapper(const FMulticastScriptDelegate& OnActorKilled, AActor* VictimActor, AActor* KillerActor, AController* KillerController) \
{ \
	_Script_CoopGame_eventOnActorKilled_Parms Parms; \
	Parms.VictimActor=VictimActor; \
	Parms.KillerActor=KillerActor; \
	Parms.KillerController=KillerController; \
	OnActorKilled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_EVENT_PARMS
#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_CALLBACK_WRAPPERS
#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGGameMode(); \
	friend struct Z_Construct_UClass_ACGGameMode_Statics; \
public: \
	DECLARE_CLASS(ACGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGameMode)


#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesACGGameMode(); \
	friend struct Z_Construct_UClass_ACGGameMode_Statics; \
public: \
	DECLARE_CLASS(ACGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGameMode)


#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGameMode(ACGGameMode&&); \
	NO_API ACGGameMode(const ACGGameMode&); \
public:


#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGameMode(ACGGameMode&&); \
	NO_API ACGGameMode(const ACGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGGameMode)


#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeBetweenWaves() { return STRUCT_OFFSET(ACGGameMode, TimeBetweenWaves); }


#define CoopGame_Source_CoopGame_Public_CGGameMode_h_19_PROLOG \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_EVENT_PARMS


#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_INCLASS \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGGameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
