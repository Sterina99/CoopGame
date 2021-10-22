// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/CGGrenadeLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGGrenadeLauncher() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ACGGrenadeLauncher_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ACGGrenadeLauncher();
	COOPGAME_API UClass* Z_Construct_UClass_ACGGun();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COOPGAME_API UClass* Z_Construct_UClass_ACGGrenadeProjectile_NoRegister();
// End Cross Module References
	void ACGGrenadeLauncher::StaticRegisterNativesACGGrenadeLauncher()
	{
	}
	UClass* Z_Construct_UClass_ACGGrenadeLauncher_NoRegister()
	{
		return ACGGrenadeLauncher::StaticClass();
	}
	struct Z_Construct_UClass_ACGGrenadeLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGGrenadeLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACGGun,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGGrenadeLauncher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CGGrenadeLauncher.h" },
		{ "ModuleRelativePath", "Public/CGGrenadeLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGGrenadeLauncher_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/CGGrenadeLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACGGrenadeLauncher_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGGrenadeLauncher, ProjectileClass), Z_Construct_UClass_ACGGrenadeProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACGGrenadeLauncher_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGGrenadeLauncher_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGGrenadeLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGGrenadeLauncher_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGGrenadeLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGGrenadeLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGGrenadeLauncher_Statics::ClassParams = {
		&ACGGrenadeLauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACGGrenadeLauncher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACGGrenadeLauncher_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACGGrenadeLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGGrenadeLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGGrenadeLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGGrenadeLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGGrenadeLauncher, 1081401190);
	template<> COOPGAME_API UClass* StaticClass<ACGGrenadeLauncher>()
	{
		return ACGGrenadeLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGGrenadeLauncher(Z_Construct_UClass_ACGGrenadeLauncher, &ACGGrenadeLauncher::StaticClass, TEXT("/Script/CoopGame"), TEXT("ACGGrenadeLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGGrenadeLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
