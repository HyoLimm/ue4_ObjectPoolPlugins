// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPooling/Public/ObjectPoolingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPoolingComponent() {}
// Cross Module References
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UObjectPoolingComponent_NoRegister();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UObjectPoolingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ObjectPooling();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UObjectPoolingComponent::StaticRegisterNativesUObjectPoolingComponent()
	{
	}
	UClass* Z_Construct_UClass_UObjectPoolingComponent_NoRegister()
	{
		return UObjectPoolingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPoolingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q_Pool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_q_Pool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_q_Pool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mPoolSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPoolingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPooling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPoolingComponent.h" },
		{ "ModuleRelativePath", "Public/ObjectPoolingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_q_Pool_MetaData[] = {
		{ "Category", "Pooling" },
		{ "Comment", "//?????? ???? ?????? \n" },
		{ "ModuleRelativePath", "Public/ObjectPoolingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_q_Pool = { "q_Pool", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPoolingComponent, q_Pool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_q_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_q_Pool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_q_Pool_Inner = { "q_Pool", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_SpawnTargetActor_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ObjectPoolingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_SpawnTargetActor = { "SpawnTargetActor", nullptr, (EPropertyFlags)0x0024080000020001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPoolingComponent, SpawnTargetActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_SpawnTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_SpawnTargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_mPoolSize_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ObjectPoolingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_mPoolSize = { "mPoolSize", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPoolingComponent, mPoolSize), METADATA_PARAMS(Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_mPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_mPoolSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPoolingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_q_Pool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_q_Pool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_SpawnTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolingComponent_Statics::NewProp_mPoolSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPoolingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolingComponent_Statics::ClassParams = {
		&UObjectPoolingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectPoolingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPoolingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPoolingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectPoolingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectPoolingComponent, 3391176692);
	template<> OBJECTPOOLING_API UClass* StaticClass<UObjectPoolingComponent>()
	{
		return UObjectPoolingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectPoolingComponent(Z_Construct_UClass_UObjectPoolingComponent, &UObjectPoolingComponent::StaticClass, TEXT("/Script/ObjectPooling"), TEXT("UObjectPoolingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
