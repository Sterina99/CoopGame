// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/CGPowerUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGPowerUp() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ACGPowerUp_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ACGPowerUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	DEFINE_FUNCTION(ACGPowerUp::execOnTickPowerUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickPowerUp();
		P_NATIVE_END;
	}
	static FName NAME_ACGPowerUp_OnActivated = FName(TEXT("OnActivated"));
	void ACGPowerUp::OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACGPowerUp_OnActivated),NULL);
	}
	static FName NAME_ACGPowerUp_OnExpired = FName(TEXT("OnExpired"));
	void ACGPowerUp::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACGPowerUp_OnExpired),NULL);
	}
	static FName NAME_ACGPowerUp_OnPowerUpTicked = FName(TEXT("OnPowerUpTicked"));
	void ACGPowerUp::OnPowerUpTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACGPowerUp_OnPowerUpTicked),NULL);
	}
	void ACGPowerUp::StaticRegisterNativesACGPowerUp()
	{
		UClass* Class = ACGPowerUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTickPowerUp", &ACGPowerUp::execOnTickPowerUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACGPowerUp_OnActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGPowerUp_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "Public/CGPowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGPowerUp_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGPowerUp, nullptr, "OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGPowerUp_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGPowerUp_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGPowerUp_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGPowerUp_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACGPowerUp_OnExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGPowerUp_OnExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "Public/CGPowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGPowerUp_OnExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGPowerUp, nullptr, "OnExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGPowerUp_OnExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGPowerUp_OnExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGPowerUp_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGPowerUp_OnExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACGPowerUp_OnPowerUpTicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGPowerUp_OnPowerUpTicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUp" },
		{ "ModuleRelativePath", "Public/CGPowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGPowerUp_OnPowerUpTicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGPowerUp, nullptr, "OnPowerUpTicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGPowerUp_OnPowerUpTicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGPowerUp_OnPowerUpTicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGPowerUp_OnPowerUpTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGPowerUp_OnPowerUpTicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACGPowerUp_OnTickPowerUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGPowerUp_OnTickPowerUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGPowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGPowerUp_OnTickPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGPowerUp, nullptr, "OnTickPowerUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGPowerUp_OnTickPowerUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGPowerUp_OnTickPowerUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGPowerUp_OnTickPowerUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGPowerUp_OnTickPowerUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACGPowerUp_NoRegister()
	{
		return ACGPowerUp::StaticClass();
	}
	struct Z_Construct_UClass_ACGPowerUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerUpInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNrOfTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNrOfTicks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGPowerUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACGPowerUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACGPowerUp_OnActivated, "OnActivated" }, // 3782462370
		{ &Z_Construct_UFunction_ACGPowerUp_OnExpired, "OnExpired" }, // 2728339253
		{ &Z_Construct_UFunction_ACGPowerUp_OnPowerUpTicked, "OnPowerUpTicked" }, // 65364580
		{ &Z_Construct_UFunction_ACGPowerUp_OnTickPowerUp, "OnTickPowerUp" }, // 3684209990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGPowerUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CGPowerUp.h" },
		{ "ModuleRelativePath", "Public/CGPowerUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGPowerUp_Statics::NewProp_PowerUpInterval_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "Comment", "//Time between powerup ticks\n" },
		{ "ModuleRelativePath", "Public/CGPowerUp.h" },
		{ "ToolTip", "Time between powerup ticks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGPowerUp_Statics::NewProp_PowerUpInterval = { "PowerUpInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGPowerUp, PowerUpInterval), METADATA_PARAMS(Z_Construct_UClass_ACGPowerUp_Statics::NewProp_PowerUpInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGPowerUp_Statics::NewProp_PowerUpInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGPowerUp_Statics::NewProp_TotalNrOfTicks_MetaData[] = {
		{ "Category", "PowerUp" },
		{ "Comment", "//Total Times we apply the powerup effect\n" },
		{ "ModuleRelativePath", "Public/CGPowerUp.h" },
		{ "ToolTip", "Total Times we apply the powerup effect" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACGPowerUp_Statics::NewProp_TotalNrOfTicks = { "TotalNrOfTicks", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGPowerUp, TotalNrOfTicks), METADATA_PARAMS(Z_Construct_UClass_ACGPowerUp_Statics::NewProp_TotalNrOfTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGPowerUp_Statics::NewProp_TotalNrOfTicks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGPowerUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGPowerUp_Statics::NewProp_PowerUpInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGPowerUp_Statics::NewProp_TotalNrOfTicks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGPowerUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGPowerUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGPowerUp_Statics::ClassParams = {
		&ACGPowerUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACGPowerUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACGPowerUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACGPowerUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGPowerUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGPowerUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGPowerUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGPowerUp, 2894614344);
	template<> COOPGAME_API UClass* StaticClass<ACGPowerUp>()
	{
		return ACGPowerUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGPowerUp(Z_Construct_UClass_ACGPowerUp, &ACGPowerUp::StaticClass, TEXT("/Script/CoopGame"), TEXT("ACGPowerUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGPowerUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
