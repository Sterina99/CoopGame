// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/CGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGGameMode() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ACGGameMode_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ACGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics
	{
		struct _Script_CoopGame_eventOnActorKilled_Parms
		{
			AActor* VictimActor;
			AActor* KillerActor;
			AController* KillerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictimActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::NewProp_VictimActor = { "VictimActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnActorKilled_Parms, VictimActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::NewProp_KillerActor = { "KillerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnActorKilled_Parms, KillerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::NewProp_KillerController = { "KillerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnActorKilled_Parms, KillerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::NewProp_VictimActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::NewProp_KillerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::NewProp_KillerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CoopGame, nullptr, "OnActorKilled__DelegateSignature", nullptr, nullptr, sizeof(_Script_CoopGame_eventOnActorKilled_Parms), Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_ACGGameMode_SpawnNewBot = FName(TEXT("SpawnNewBot"));
	void ACGGameMode::SpawnNewBot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACGGameMode_SpawnNewBot),NULL);
	}
	void ACGGameMode::StaticRegisterNativesACGGameMode()
	{
	}
	struct Z_Construct_UFunction_ACGGameMode_SpawnNewBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGGameMode_SpawnNewBot_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "Comment", "//spawn one bot\n" },
		{ "ModuleRelativePath", "Public/CGGameMode.h" },
		{ "ToolTip", "spawn one bot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGGameMode_SpawnNewBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGGameMode, nullptr, "SpawnNewBot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGGameMode_SpawnNewBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGGameMode_SpawnNewBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGGameMode_SpawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGGameMode_SpawnNewBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACGGameMode_NoRegister()
	{
		return ACGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenWaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenWaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorKilled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorKilled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACGGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACGGameMode_SpawnNewBot, "SpawnNewBot" }, // 3402887131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CGGameMode.h" },
		{ "ModuleRelativePath", "Public/CGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGGameMode_Statics::NewProp_TimeBetweenWaves_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/CGGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGGameMode_Statics::NewProp_TimeBetweenWaves = { "TimeBetweenWaves", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGGameMode, TimeBetweenWaves), METADATA_PARAMS(Z_Construct_UClass_ACGGameMode_Statics::NewProp_TimeBetweenWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGGameMode_Statics::NewProp_TimeBetweenWaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGGameMode_Statics::NewProp_OnActorKilled_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/CGGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACGGameMode_Statics::NewProp_OnActorKilled = { "OnActorKilled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGGameMode, OnActorKilled), Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACGGameMode_Statics::NewProp_OnActorKilled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGGameMode_Statics::NewProp_OnActorKilled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGGameMode_Statics::NewProp_TimeBetweenWaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGGameMode_Statics::NewProp_OnActorKilled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGGameMode_Statics::ClassParams = {
		&ACGGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACGGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACGGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACGGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGGameMode, 620321190);
	template<> COOPGAME_API UClass* StaticClass<ACGGameMode>()
	{
		return ACGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGGameMode(Z_Construct_UClass_ACGGameMode, &ACGGameMode::StaticClass, TEXT("/Script/CoopGame"), TEXT("ACGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
