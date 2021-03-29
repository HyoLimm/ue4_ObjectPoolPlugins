// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPooling/Public/Projectiles/BaseProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseProjectile() {}
// Cross Module References
	OBJECTPOOLING_API UClass* Z_Construct_UClass_ABaseProjectile_NoRegister();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_ABaseProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObjectPooling();
// End Cross Module References
	void ABaseProjectile::StaticRegisterNativesABaseProjectile()
	{
	}
	UClass* Z_Construct_UClass_ABaseProjectile_NoRegister()
	{
		return ABaseProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ABaseProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPooling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectiles/BaseProjectile.h" },
		{ "ModuleRelativePath", "Public/Projectiles/BaseProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseProjectile_Statics::ClassParams = {
		&ABaseProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseProjectile, 1683717079);
	template<> OBJECTPOOLING_API UClass* StaticClass<ABaseProjectile>()
	{
		return ABaseProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseProjectile(Z_Construct_UClass_ABaseProjectile, &ABaseProjectile::StaticClass, TEXT("/Script/ObjectPooling"), TEXT("ABaseProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
