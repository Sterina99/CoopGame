// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/CGPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGPlayerState() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ACGPlayerState_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ACGPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	DEFINE_FUNCTION(ACGPlayerState::execAddScore)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScoreDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScore(Z_Param_ScoreDelta);
		P_NATIVE_END;
	}
	void ACGPlayerState::StaticRegisterNativesACGPlayerState()
	{
		UClass* Class = ACGPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScore", &ACGPlayerState::execAddScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACGPlayerState_AddScore_Statics
	{
		struct CGPlayerState_eventAddScore_Parms
		{
			float ScoreDelta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::NewProp_ScoreDelta = { "ScoreDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGPlayerState_eventAddScore_Parms, ScoreDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::NewProp_ScoreDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "Public/CGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGPlayerState, nullptr, "AddScore", nullptr, nullptr, sizeof(CGPlayerState_eventAddScore_Parms), Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGPlayerState_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGPlayerState_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACGPlayerState_NoRegister()
	{
		return ACGPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ACGPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACGPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACGPlayerState_AddScore, "AddScore" }, // 169101993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CGPlayerState.h" },
		{ "ModuleRelativePath", "Public/CGPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGPlayerState_Statics::ClassParams = {
		&ACGPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACGPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGPlayerState, 2986309879);
	template<> COOPGAME_API UClass* StaticClass<ACGPlayerState>()
	{
		return ACGPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGPlayerState(Z_Construct_UClass_ACGPlayerState, &ACGPlayerState::StaticClass, TEXT("/Script/CoopGame"), TEXT("ACGPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
