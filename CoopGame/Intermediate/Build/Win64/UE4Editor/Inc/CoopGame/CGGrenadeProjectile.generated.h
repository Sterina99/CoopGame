// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_CGGrenadeProjectile_generated_h
#error "CGGrenadeProjectile.generated.h already included, missing '#pragma once' in CGGrenadeProjectile.h"
#endif
#define COOPGAME_CGGrenadeProjectile_generated_h

#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGGrenadeProjectile(); \
	friend struct Z_Construct_UClass_ACGGrenadeProjectile_Statics; \
public: \
	DECLARE_CLASS(ACGGrenadeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGrenadeProjectile)


#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACGGrenadeProjectile(); \
	friend struct Z_Construct_UClass_ACGGrenadeProjectile_Statics; \
public: \
	DECLARE_CLASS(ACGGrenadeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGrenadeProjectile)


#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGGrenadeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGGrenadeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGrenadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGrenadeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGrenadeProjectile(ACGGrenadeProjectile&&); \
	NO_API ACGGrenadeProjectile(const ACGGrenadeProjectile&); \
public:


#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGrenadeProjectile(ACGGrenadeProjectile&&); \
	NO_API ACGGrenadeProjectile(const ACGGrenadeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGrenadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGrenadeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGGrenadeProjectile)


#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ACGGrenadeProjectile, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACGGrenadeProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACGGrenadeProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ACGGrenadeProjectile, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ACGGrenadeProjectile, DamageType); } \
	FORCEINLINE static uint32 __PPO__IgnoredActors() { return STRUCT_OFFSET(ACGGrenadeProjectile, IgnoredActors); } \
	FORCEINLINE static uint32 __PPO__DamageRadius() { return STRUCT_OFFSET(ACGGrenadeProjectile, DamageRadius); }


#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_13_PROLOG
#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_INCLASS \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGGrenadeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGGrenadeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
