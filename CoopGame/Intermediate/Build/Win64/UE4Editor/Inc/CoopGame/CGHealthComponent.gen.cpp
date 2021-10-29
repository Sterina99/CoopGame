// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/Components/CGHealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGHealthComponent() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UClass* Z_Construct_UClass_UCGHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_UCGHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics
	{
		struct _Script_CoopGame_eventOnHealthChangedSignature_Parms
		{
			UCGHealthComponent* OwningHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_OwningHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_OwningHealthComp = { "OwningHealthComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, OwningHealthComp), Z_Construct_UClass_UCGHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_OwningHealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_OwningHealthComp_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_OwningHealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CoopGame, nullptr, "OnHealthChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_CoopGame_eventOnHealthChangedSignature_Parms), Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCGHealthComponent::execHandleTakeAnyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCGHealthComponent::execOnRep_Health)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_OldHealth);
		P_NATIVE_END;
	}
	void UCGHealthComponent::StaticRegisterNativesUCGHealthComponent()
	{
		UClass* Class = UCGHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakeAnyDamage", &UCGHealthComponent::execHandleTakeAnyDamage },
			{ "OnRep_Health", &UCGHealthComponent::execOnRep_Health },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics
	{
		struct CGHealthComponent_eventHandleTakeAnyDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGHealthComponent_eventHandleTakeAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGHealthComponent_eventHandleTakeAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGHealthComponent_eventHandleTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGHealthComponent_eventHandleTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGHealthComponent_eventHandleTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCGHealthComponent, nullptr, "HandleTakeAnyDamage", nullptr, nullptr, sizeof(CGHealthComponent_eventHandleTakeAnyDamage_Parms), Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics
	{
		struct CGHealthComponent_eventOnRep_Health_Parms
		{
			float OldHealth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGHealthComponent_eventOnRep_Health_Parms, OldHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCGHealthComponent, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(CGHealthComponent_eventOnRep_Health_Parms), Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCGHealthComponent_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCGHealthComponent_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCGHealthComponent_NoRegister()
	{
		return UCGHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCGHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCGHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCGHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCGHealthComponent_HandleTakeAnyDamage, "HandleTakeAnyDamage" }, // 911075553
		{ &Z_Construct_UFunction_UCGHealthComponent_OnRep_Health, "OnRep_Health" }, // 2967065814
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCGHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "COOP" },
		{ "IncludePath", "Components/CGHealthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CGHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_DefaultHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/CGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_DefaultHealth = { "DefaultHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCGHealthComponent, DefaultHealth), METADATA_PARAMS(Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_DefaultHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_DefaultHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/CGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCGHealthComponent, Health), METADATA_PARAMS(Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "// Called every frame\n//\x09virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;\n// \n" },
		{ "ModuleRelativePath", "Public/Components/CGHealthComponent.h" },
		{ "ToolTip", "Called every frame\n      virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCGHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_OnHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_OnHealthChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCGHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_DefaultHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCGHealthComponent_Statics::NewProp_OnHealthChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCGHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCGHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCGHealthComponent_Statics::ClassParams = {
		&UCGHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCGHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCGHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCGHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCGHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCGHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCGHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCGHealthComponent, 1609911259);
	template<> COOPGAME_API UClass* StaticClass<UCGHealthComponent>()
	{
		return UCGHealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCGHealthComponent(Z_Construct_UClass_UCGHealthComponent, &UCGHealthComponent::StaticClass, TEXT("/Script/CoopGame"), TEXT("UCGHealthComponent"), false, nullptr, nullptr, nullptr);

	void UCGHealthComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCGHealthComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCGHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
