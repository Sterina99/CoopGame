// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACGGun;
class UCGHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_CGCharacter_generated_h
#error "CGCharacter.generated.h already included, missing '#pragma once' in CGCharacter.h"
#endif
#define COOPGAME_CGCharacter_generated_h

#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsZooming); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execGetMagazines); \
	DECLARE_FUNCTION(execGetAmmos); \
	DECLARE_FUNCTION(execGetCurrentWeaponName); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsZooming); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execGetMagazines); \
	DECLARE_FUNCTION(execGetAmmos); \
	DECLARE_FUNCTION(execGetCurrentWeaponName); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGCharacter(); \
	friend struct Z_Construct_UClass_ACGCharacter_Statics; \
public: \
	DECLARE_CLASS(ACGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		bIsDead, \
		NETFIELD_REP_END=bIsDead	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACGCharacter(); \
	friend struct Z_Construct_UClass_ACGCharacter_Statics; \
public: \
	DECLARE_CLASS(ACGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		bIsDead, \
		NETFIELD_REP_END=bIsDead	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGCharacter(ACGCharacter&&); \
	NO_API ACGCharacter(const ACGCharacter&); \
public:


#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGCharacter(ACGCharacter&&); \
	NO_API ACGCharacter(const ACGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGCharacter)


#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ACGCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ACGCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ACGCharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(ACGCharacter, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__ZoomedFOV() { return STRUCT_OFFSET(ACGCharacter, ZoomedFOV); } \
	FORCEINLINE static uint32 __PPO__WeaponSocketName() { return STRUCT_OFFSET(ACGCharacter, WeaponSocketName); } \
	FORCEINLINE static uint32 __PPO__DefaultWeaponClass() { return STRUCT_OFFSET(ACGCharacter, DefaultWeaponClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ACGCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__bIsDead() { return STRUCT_OFFSET(ACGCharacter, bIsDead); }


#define CoopGame_Source_CoopGame_Public_CGCharacter_h_14_PROLOG
#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_INCLASS \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
