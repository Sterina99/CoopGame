// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWaveState : uint8;
#ifdef COOPGAME_CGGameState_generated_h
#error "CGGameState.generated.h already included, missing '#pragma once' in CGGameState.h"
#endif
#define COOPGAME_CGGameState_generated_h

#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState);


#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState);


#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_EVENT_PARMS \
	struct CGGameState_eventWaveStateChanged_Parms \
	{ \
		EWaveState NewState; \
		EWaveState OldState; \
	};


#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_CALLBACK_WRAPPERS
#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGGameState(); \
	friend struct Z_Construct_UClass_ACGGameState_Statics; \
public: \
	DECLARE_CLASS(ACGGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WaveState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WaveState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_INCLASS \
private: \
	static void StaticRegisterNativesACGGameState(); \
	friend struct Z_Construct_UClass_ACGGameState_Statics; \
public: \
	DECLARE_CLASS(ACGGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WaveState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WaveState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGameState(ACGGameState&&); \
	NO_API ACGGameState(const ACGGameState&); \
public:


#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGameState(ACGGameState&&); \
	NO_API ACGGameState(const ACGGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGGameState)


#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaveState() { return STRUCT_OFFSET(ACGGameState, WaveState); }


#define CoopGame_Source_CoopGame_Public_CGGameState_h_26_PROLOG \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_EVENT_PARMS


#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_INCLASS \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGGameState_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGameState_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGGameState_h


#define FOREACH_ENUM_EWAVESTATE(op) \
	op(EWaveState::WaitingToStart) \
	op(EWaveState::WaveInprogess) \
	op(EWaveState::WaitingToComplete) \
	op(EWaveState::WaveComplete) \
	op(EWaveState::GameOver) 

enum class EWaveState : uint8;
template<> COOPGAME_API UEnum* StaticEnum<EWaveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
