// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPooling/Public/Projectiles/PlayerProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerProjectile() {}
// Cross Module References
	OBJECTPOOLING_API UClass* Z_Construct_UClass_APlayerProjectile_NoRegister();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_APlayerProjectile();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_ABaseProjectile();
	UPackage* Z_Construct_UPackage__Script_ObjectPooling();
// End Cross Module References
	void APlayerProjectile::StaticRegisterNativesAPlayerProjectile()
	{
	}
	UClass* Z_Construct_UClass_APlayerProjectile_NoRegister()
	{
		return APlayerProjectile::StaticClass();
	}
	struct Z_Construct_UClass_APlayerProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPooling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Projectiles/PlayerProjectile.h" },
		{ "ModuleRelativePath", "Public/Projectiles/PlayerProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerProjectile_Statics::ClassParams = {
		&APlayerProjectile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlayerProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerProjectile, 1288299061);
	template<> OBJECTPOOLING_API UClass* StaticClass<APlayerProjectile>()
	{
		return APlayerProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerProjectile(Z_Construct_UClass_APlayerProjectile, &APlayerProjectile::StaticClass, TEXT("/Script/ObjectPooling"), TEXT("APlayerProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
