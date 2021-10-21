// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_CGGrenadeLauncher_generated_h
#error "CGGrenadeLauncher.generated.h already included, missing '#pragma once' in CGGrenadeLauncher.h"
#endif
#define COOPGAME_CGGrenadeLauncher_generated_h

#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGGrenadeLauncher(); \
	friend struct Z_Construct_UClass_ACGGrenadeLauncher_Statics; \
public: \
	DECLARE_CLASS(ACGGrenadeLauncher, ACGGun, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGrenadeLauncher)


#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACGGrenadeLauncher(); \
	friend struct Z_Construct_UClass_ACGGrenadeLauncher_Statics; \
public: \
	DECLARE_CLASS(ACGGrenadeLauncher, ACGGun, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGGrenadeLauncher)


#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGGrenadeLauncher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGGrenadeLauncher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGrenadeLauncher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGrenadeLauncher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGrenadeLauncher(ACGGrenadeLauncher&&); \
	NO_API ACGGrenadeLauncher(const ACGGrenadeLauncher&); \
public:


#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGGrenadeLauncher(ACGGrenadeLauncher&&); \
	NO_API ACGGrenadeLauncher(const ACGGrenadeLauncher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGGrenadeLauncher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGGrenadeLauncher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGGrenadeLauncher)


#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ACGGrenadeLauncher, ProjectileClass); }


#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGGrenadeLauncher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGGrenadeLauncher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
