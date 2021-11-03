// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_CGPickUp_generated_h
#error "CGPickUp.generated.h already included, missing '#pragma once' in CGPickUp.h"
#endif
#define COOPGAME_CGPickUp_generated_h

#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGPickUp(); \
	friend struct Z_Construct_UClass_ACGPickUp_Statics; \
public: \
	DECLARE_CLASS(ACGPickUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGPickUp)


#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACGPickUp(); \
	friend struct Z_Construct_UClass_ACGPickUp_Statics; \
public: \
	DECLARE_CLASS(ACGPickUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGPickUp)


#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGPickUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGPickUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGPickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGPickUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGPickUp(ACGPickUp&&); \
	NO_API ACGPickUp(const ACGPickUp&); \
public:


#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGPickUp(ACGPickUp&&); \
	NO_API ACGPickUp(const ACGPickUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGPickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGPickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGPickUp)


#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ACGPickUp, SphereComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(ACGPickUp, DecalComp); } \
	FORCEINLINE static uint32 __PPO__PowerupClass() { return STRUCT_OFFSET(ACGPickUp, PowerupClass); } \
	FORCEINLINE static uint32 __PPO__CooldownDuration() { return STRUCT_OFFSET(ACGPickUp, CooldownDuration); }


#define CoopGame_Source_CoopGame_Public_CGPickUp_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGPickUp_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGPickUp_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGPickUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGPickUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
