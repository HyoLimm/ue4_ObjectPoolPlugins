// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPooling/Public/PlayerBulletPoolingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBulletPoolingComponent() {}
// Cross Module References
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UPlayerBulletPoolingComponent_NoRegister();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UPlayerBulletPoolingComponent();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UBulletPoolingComponent();
	UPackage* Z_Construct_UPackage__Script_ObjectPooling();
// End Cross Module References
	void UPlayerBulletPoolingComponent::StaticRegisterNativesUPlayerBulletPoolingComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerBulletPoolingComponent_NoRegister()
	{
		return UPlayerBulletPoolingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerBulletPoolingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerBulletPoolingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBulletPoolingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPooling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBulletPoolingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Edwin" },
		{ "IncludePath", "PlayerBulletPoolingComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerBulletPoolingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerBulletPoolingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerBulletPoolingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerBulletPoolingComponent_Statics::ClassParams = {
		&UPlayerBulletPoolingComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerBulletPoolingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBulletPoolingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerBulletPoolingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerBulletPoolingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerBulletPoolingComponent, 3305850002);
	template<> OBJECTPOOLING_API UClass* StaticClass<UPlayerBulletPoolingComponent>()
	{
		return UPlayerBulletPoolingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerBulletPoolingComponent(Z_Construct_UClass_UPlayerBulletPoolingComponent, &UPlayerBulletPoolingComponent::StaticClass, TEXT("/Script/ObjectPooling"), TEXT("UPlayerBulletPoolingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerBulletPoolingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
