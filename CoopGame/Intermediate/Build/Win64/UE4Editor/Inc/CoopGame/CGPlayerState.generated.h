// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_CGPlayerState_generated_h
#error "CGPlayerState.generated.h already included, missing '#pragma once' in CGPlayerState.h"
#endif
#define COOPGAME_CGPlayerState_generated_h

#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddScore);


#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddScore);


#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGPlayerState(); \
	friend struct Z_Construct_UClass_ACGPlayerState_Statics; \
public: \
	DECLARE_CLASS(ACGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGPlayerState)


#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACGPlayerState(); \
	friend struct Z_Construct_UClass_ACGPlayerState_Statics; \
public: \
	DECLARE_CLASS(ACGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGPlayerState)


#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGPlayerState(ACGPlayerState&&); \
	NO_API ACGPlayerState(const ACGPlayerState&); \
public:


#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGPlayerState(ACGPlayerState&&); \
	NO_API ACGPlayerState(const ACGPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGPlayerState)


#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_PRIVATE_PROPERTY_OFFSET
#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
