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

#define CoopGame_Source_CoopGame_Public_CGGun_h_14_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGGun_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire);


#define CoopGame_Source_CoopGame_Public_CGGun_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define CoopGame_Source_CoopGame_Public_CGGun_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGGun(); \
	friend struct Z_Construct_UClass_ACGGun_Statics; \
public: \
	DECLARE_CLASS(ACGGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGun)


#define CoopGame_Source_CoopGame_Public_CGGun_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACGGun(); \
	friend struct Z_Construct_UClass_ACGGun_Statics; \
public: \
	DECLARE_CLASS(ACGGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGun)


#define CoopGame_Source_CoopGame_Public_CGGun_h_14_STANDARD_CONSTRUCTORS \
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


#define CoopGame_Source_CoopGame_Public_CGGun_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGun(ACGGun&&); \
	NO_API ACGGun(const ACGGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGGun)


#define CoopGame_Source_CoopGame_Public_CGGun_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ACGGun, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ACGGun, DamageType); }


#define CoopGame_Source_CoopGame_Public_CGGun_h_11_PROLOG
#define CoopGame_Source_CoopGame_Public_CGGun_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_INCLASS \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGGun_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGun_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
