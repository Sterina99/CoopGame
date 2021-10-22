// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_CGPlayerController_generated_h
#error "CGPlayerController.generated.h already included, missing '#pragma once' in CGPlayerController.h"
#endif
#define COOPGAME_CGPlayerController_generated_h

#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGPlayerController(); \
	friend struct Z_Construct_UClass_ACGPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGPlayerController)


#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACGPlayerController(); \
	friend struct Z_Construct_UClass_ACGPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ACGPlayerController)


#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGPlayerController(ACGPlayerController&&); \
	NO_API ACGPlayerController(const ACGPlayerController&); \
public:


#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGPlayerController(ACGPlayerController&&); \
	NO_API ACGPlayerController(const ACGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGPlayerController)


#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(ACGPlayerController, HUDClass); } \
	FORCEINLINE static uint32 __PPO__HUD() { return STRUCT_OFFSET(ACGPlayerController, HUD); }


#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_CGPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ACGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_CGPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
