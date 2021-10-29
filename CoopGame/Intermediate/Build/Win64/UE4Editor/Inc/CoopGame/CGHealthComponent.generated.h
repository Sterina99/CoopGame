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
#ifdef COOPGAME_CGHealthComponent_generated_h
#error "CGHealthComponent.generated.h already included, missing '#pragma once' in CGHealthComponent.h"
#endif
#define COOPGAME_CGHealthComponent_generated_h

#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_9_DELEGATE \
struct _Script_CoopGame_eventOnHealthChangedSignature_Parms \
{ \
	UCGHealthComponent* OwningHealthComp; \
	float Health; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, UCGHealthComponent* OwningHealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_CoopGame_eventOnHealthChangedSignature_Parms Parms; \
	Parms.OwningHealthComp=OwningHealthComp; \
	Parms.Health=Health; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage); \
	DECLARE_FUNCTION(execOnRep_Health);


#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage); \
	DECLARE_FUNCTION(execOnRep_Health);


#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCGHealthComponent(); \
	friend struct Z_Construct_UClass_UCGHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UCGHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(UCGHealthComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCGHealthComponent(); \
	friend struct Z_Construct_UClass_UCGHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UCGHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(UCGHealthComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCGHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCGHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCGHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCGHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCGHealthComponent(UCGHealthComponent&&); \
	NO_API UCGHealthComponent(const UCGHealthComponent&); \
public:


#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCGHealthComponent(UCGHealthComponent&&); \
	NO_API UCGHealthComponent(const UCGHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCGHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCGHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCGHealthComponent)


#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(UCGHealthComponent, DefaultHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(UCGHealthComponent, Health); }


#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_11_PROLOG
#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_INCLASS \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class UCGHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_Components_CGHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
