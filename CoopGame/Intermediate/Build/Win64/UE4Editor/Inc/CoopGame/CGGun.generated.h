// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_CGGun_generated_h
#error "CGGun.generated.h already included, missing '#pragma once' in CGGun.h"
#endif
#define COOPGAME_CGGun_generated_h

#define CoopGame_Source_CoopGame_Public_CGGun_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrace_Statics; \
	COOPGAME_API static class UScriptStruct* StaticStruct();


template<> COOPGAME_API UScriptStruct* StaticStruct<struct FHitScanTrace>();

#define CoopGame_Source_CoopGame_Public_CGGun_h_28_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGGun_h_28_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAmmos); \
	DECLARE_FUNCTION(execOnRep_HitScanTrace); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire);


#define CoopGame_Source_CoopGame_Public_CGGun_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAmmos); \
	DECLARE_FUNCTION(execOnRep_HitScanTrace); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire);


#define CoopGame_Source_CoopGame_Public_CGGun_h_28_EVENT_PARMS
#define CoopGame_Source_CoopGame_Public_CGGun_h_28_CALLBACK_WRAPPERS
#define CoopGame_Source_CoopGame_Public_CGGun_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGGun(); \
	friend struct Z_Construct_UClass_ACGGun_Statics; \
public: \
	DECLARE_CLASS(ACGGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGun) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_CGGun_h_28_INCLASS \
private: \
	static void StaticRegisterNativesACGGun(); \
	friend struct Z_Construct_UClass_ACGGun_Statics; \
public: \
	DECLARE_CLASS(ACGGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGun) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_CGGun_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGun(ACGGun&&); \
	NO_API ACGGun(const ACGGun&); \
public:


#define CoopGame_Source_CoopGame_Public_CGGun_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGun(ACGGun&&); \
	NO_API ACGGun(const ACGGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGGun)


#define CoopGame_Source_CoopGame_Public_CGGun_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ACGGun, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ACGGun, DamageType); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(ACGGun, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(ACGGun, FireRate); } \
	FORCEINLINE static uint32 __PPO__bCanPenetrate() { return STRUCT_OFFSET(ACGGun, bCanPenetrate); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ACGGun, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TargetTracerName() { return STRUCT_OFFSET(ACGGun, TargetTracerName); } \
	FORCEINLINE static uint32 __PPO__FireCamShake() { return STRUCT_OFFSET(ACGGun, FireCamShake); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ACGGun, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__DefaulImpactEffect() { return STRUCT_OFFSET(ACGGun, DefaulImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(ACGGun, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(ACGGun, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__MaxAmmos() { return STRUCT_OFFSET(ACGGun, MaxAmmos); } \
	FORCEINLINE static uint32 __PPO__BulletSpread() { return STRUCT_OFFSET(ACGGun, BulletSpread); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(ACGGun, HitScanTrace); }


#define CoopGame_Source_CoopGame_Public_CGGun_h_25_PROLOG \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_EVENT_PARMS


#define CoopGame_Source_CoopGame_Public_CGGun_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_INCLASS \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGGun_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGun_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
