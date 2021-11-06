// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/CGGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGGameState() {}
// Cross Module References
	COOPGAME_API UEnum* Z_Construct_UEnum_CoopGame_EWaveState();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UClass* Z_Construct_UClass_ACGGameState_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ACGGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
// End Cross Module References
	static UEnum* EWaveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoopGame_EWaveState, Z_Construct_UPackage__Script_CoopGame(), TEXT("EWaveState"));
		}
		return Singleton;
	}
	template<> COOPGAME_API UEnum* StaticEnum<EWaveState>()
	{
		return EWaveState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWaveState(EWaveState_StaticEnum, TEXT("/Script/CoopGame"), TEXT("EWaveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoopGame_EWaveState_Hash() { return 3173704616U; }
	UEnum* Z_Construct_UEnum_CoopGame_EWaveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoopGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWaveState"), 0, Get_Z_Construct_UEnum_CoopGame_EWaveState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWaveState::WaitingToStart", (int64)EWaveState::WaitingToStart },
				{ "EWaveState::WaveInprogess", (int64)EWaveState::WaveInprogess },
				{ "EWaveState::WaitingToComplete", (int64)EWaveState::WaitingToComplete },
				{ "EWaveState::WaveComplete", (int64)EWaveState::WaveComplete },
				{ "EWaveState::GameOver", (int64)EWaveState::GameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameOver.Name", "EWaveState::GameOver" },
				{ "ModuleRelativePath", "Public/CGGameState.h" },
				{ "WaitingToComplete.Comment", "//no more bots to spawn, waiting for player to kill all\n" },
				{ "WaitingToComplete.Name", "EWaveState::WaitingToComplete" },
				{ "WaitingToComplete.ToolTip", "no more bots to spawn, waiting for player to kill all" },
				{ "WaitingToStart.Name", "EWaveState::WaitingToStart" },
				{ "WaveComplete.Name", "EWaveState::WaveComplete" },
				{ "WaveInprogess.Name", "EWaveState::WaveInprogess" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoopGame,
				nullptr,
				"EWaveState",
				"EWaveState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ACGGameState::execOnRep_WaveState)
	{
		P_GET_ENUM(EWaveState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WaveState(EWaveState(Z_Param_OldState));
		P_NATIVE_END;
	}
	static FName NAME_ACGGameState_WaveStateChanged = FName(TEXT("WaveStateChanged"));
	void ACGGameState::WaveStateChanged(EWaveState NewState, EWaveState OldState)
	{
		CGGameState_eventWaveStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.OldState=OldState;
		ProcessEvent(FindFunctionChecked(NAME_ACGGameState_WaveStateChanged),&Parms);
	}
	void ACGGameState::StaticRegisterNativesACGGameState()
	{
		UClass* Class = ACGGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_WaveState", &ACGGameState::execOnRep_WaveState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics
	{
		struct CGGameState_eventOnRep_WaveState_Parms
		{
			EWaveState OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGGameState_eventOnRep_WaveState_Parms, OldState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CGGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGGameState, nullptr, "OnRep_WaveState", nullptr, nullptr, sizeof(CGGameState_eventOnRep_WaveState_Parms), Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGGameState_OnRep_WaveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGGameState_OnRep_WaveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGGameState_eventWaveStateChanged_Parms, NewState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGGameState_eventWaveStateChanged_Parms, OldState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/CGGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGGameState, nullptr, "WaveStateChanged", nullptr, nullptr, sizeof(CGGameState_eventWaveStateChanged_Parms), Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGGameState_WaveStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGGameState_WaveStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACGGameState_NoRegister()
	{
		return ACGGameState::StaticClass();
	}
	struct Z_Construct_UClass_ACGGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WaveState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WaveState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACGGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACGGameState_OnRep_WaveState, "OnRep_WaveState" }, // 320515501
		{ &Z_Construct_UFunction_ACGGameState_WaveStateChanged, "WaveStateChanged" }, // 3478708362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CGGameState.h" },
		{ "ModuleRelativePath", "Public/CGGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACGGameState_Statics::NewProp_WaveState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGGameState_Statics::NewProp_WaveState_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/CGGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACGGameState_Statics::NewProp_WaveState = { "WaveState", "OnRep_WaveState", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGGameState, WaveState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(Z_Construct_UClass_ACGGameState_Statics::NewProp_WaveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGGameState_Statics::NewProp_WaveState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGGameState_Statics::NewProp_WaveState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGGameState_Statics::NewProp_WaveState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGGameState_Statics::ClassParams = {
		&ACGGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACGGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACGGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACGGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGGameState, 4097472956);
	template<> COOPGAME_API UClass* StaticClass<ACGGameState>()
	{
		return ACGGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGGameState(Z_Construct_UClass_ACGGameState, &ACGGameState::StaticClass, TEXT("/Script/CoopGame"), TEXT("ACGGameState"), false, nullptr, nullptr, nullptr);

	void ACGGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WaveState(TEXT("WaveState"));

		const bool bIsValid = true
			&& Name_WaveState == ClassReps[(int32)ENetFields_Private::WaveState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACGGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
