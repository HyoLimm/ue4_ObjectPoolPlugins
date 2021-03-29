// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPooling/Public/EnemyProjectilePoolingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectilePoolingComponent() {}
// Cross Module References
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UEnemyProjectilePoolingComponent_NoRegister();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UEnemyProjectilePoolingComponent();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UBulletPoolingComponent();
	UPackage* Z_Construct_UPackage__Script_ObjectPooling();
// End Cross Module References
	void UEnemyProjectilePoolingComponent::StaticRegisterNativesUEnemyProjectilePoolingComponent()
	{
	}
	UClass* Z_Construct_UClass_UEnemyProjectilePoolingComponent_NoRegister()
	{
		return UEnemyProjectilePoolingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyProjectilePoolingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyProjectilePoolingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBulletPoolingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPooling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyProjectilePoolingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Edwin" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyProjectilePoolingComponent.h" },
		{ "ModuleRelativePath", "Public/EnemyProjectilePoolingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyProjectilePoolingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyProjectilePoolingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyProjectilePoolingComponent_Statics::ClassParams = {
		&UEnemyProjectilePoolingComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyProjectilePoolingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyProjectilePoolingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyProjectilePoolingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyProjectilePoolingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyProjectilePoolingComponent, 2682495433);
	template<> OBJECTPOOLING_API UClass* StaticClass<UEnemyProjectilePoolingComponent>()
	{
		return UEnemyProjectilePoolingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyProjectilePoolingComponent(Z_Construct_UClass_UEnemyProjectilePoolingComponent, &UEnemyProjectilePoolingComponent::StaticClass, TEXT("/Script/ObjectPooling"), TEXT("UEnemyProjectilePoolingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyProjectilePoolingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
