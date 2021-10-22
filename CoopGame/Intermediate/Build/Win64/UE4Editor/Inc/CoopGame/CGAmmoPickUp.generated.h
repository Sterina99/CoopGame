// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef COOPGAME_CGAmmoPickUp_generated_h
#error "CGAmmoPickUp.generated.h already included, missing '#pragma once' in CGAmmoPickUp.h"
#endif
#define COOPGAME_CGAmmoPickUp_generated_h

#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickUp);


#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickUp);


#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGAmmoPickUp(); \
	friend struct Z_Construct_UClass_ACGAmmoPickUp_Statics; \
public: \
	DECLARE_CLASS(ACGAmmoPickUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGAmmoPickUp)


#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACGAmmoPickUp(); \
	friend struct Z_Construct_UClass_ACGAmmoPickUp_Statics; \
public: \
	DECLARE_CLASS(ACGAmmoPickUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGAmmoPickUp)


#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGAmmoPickUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGAmmoPickUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGAmmoPickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGAmmoPickUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGAmmoPickUp(ACGAmmoPickUp&&); \
	NO_API ACGAmmoPickUp(const ACGAmmoPickUp&); \
public:


#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGAmmoPickUp(ACGAmmoPickUp&&); \
	NO_API ACGAmmoPickUp(const ACGAmmoPickUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGAmmoPickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGAmmoPickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGAmmoPickUp)


#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ACGAmmoPickUp, SphereComp); }


#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_11_PROLOG
#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_INCLASS \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGAmmoPickUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGAmmoPickUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
