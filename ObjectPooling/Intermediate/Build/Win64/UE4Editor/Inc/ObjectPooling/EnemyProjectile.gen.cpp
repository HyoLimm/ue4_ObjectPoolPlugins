// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPooling/Public/Projectiles/EnemyProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectile() {}
// Cross Module References
	OBJECTPOOLING_API UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_AEnemyProjectile();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_ABaseProjectile();
	UPackage* Z_Construct_UPackage__Script_ObjectPooling();
// End Cross Module References
	void AEnemyProjectile::StaticRegisterNativesAEnemyProjectile()
	{
	}
	UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister()
	{
		return AEnemyProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPooling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Projectiles/EnemyProjectile.h" },
		{ "ModuleRelativePath", "Public/Projectiles/EnemyProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyProjectile_Statics::ClassParams = {
		&AEnemyProjectile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyProjectile, 3779678073);
	template<> OBJECTPOOLING_API UClass* StaticClass<AEnemyProjectile>()
	{
		return AEnemyProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyProjectile(Z_Construct_UClass_AEnemyProjectile, &AEnemyProjectile::StaticClass, TEXT("/Script/ObjectPooling"), TEXT("AEnemyProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
