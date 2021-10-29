// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCGHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_CGTrackerBot_generated_h
#error "CGTrackerBot.generated.h already included, missing '#pragma once' in CGTrackerBot.h"
#endif
#define COOPGAME_CGTrackerBot_generated_h

#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGTrackerBot(); \
	friend struct Z_Construct_UClass_ACGTrackerBot_Statics; \
public: \
	DECLARE_CLASS(ACGTrackerBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGTrackerBot)


#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACGTrackerBot(); \
	friend struct Z_Construct_UClass_ACGTrackerBot_Statics; \
public: \
	DECLARE_CLASS(ACGTrackerBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGTrackerBot)


#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGTrackerBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGTrackerBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGTrackerBot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGTrackerBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGTrackerBot(ACGTrackerBot&&); \
	NO_API ACGTrackerBot(const ACGTrackerBot&); \
public:


#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGTrackerBot(ACGTrackerBot&&); \
	NO_API ACGTrackerBot(const ACGTrackerBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGTrackerBot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGTrackerBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGTrackerBot)


#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ACGTrackerBot, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ACGTrackerBot, HealthComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ACGTrackerBot, SphereComp); } \
	FORCEINLINE static uint32 __PPO__RequiredDistanceToTarget() { return STRUCT_OFFSET(ACGTrackerBot, RequiredDistanceToTarget); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ACGTrackerBot, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__SpeedForce() { return STRUCT_OFFSET(ACGTrackerBot, SpeedForce); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ACGTrackerBot, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__DamageRadius() { return STRUCT_OFFSET(ACGTrackerBot, DamageRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamage() { return STRUCT_OFFSET(ACGTrackerBot, ExplosionDamage); } \
	FORCEINLINE static uint32 __PPO__SelfDestructionSound() { return STRUCT_OFFSET(ACGTrackerBot, SelfDestructionSound); } \
	FORCEINLINE static uint32 __PPO__ExplosionSound() { return STRUCT_OFFSET(ACGTrackerBot, ExplosionSound); }


#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_14_PROLOG
#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_INCLASS \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGTrackerBot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_AI_CGTrackerBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
