// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPooling/Public/BulletPoolingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletPoolingComponent() {}
// Cross Module References
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UBulletPoolingComponent_NoRegister();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UBulletPoolingComponent();
	OBJECTPOOLING_API UClass* Z_Construct_UClass_UObjectPoolingComponent();
	UPackage* Z_Construct_UPackage__Script_ObjectPooling();
// End Cross Module References
	DEFINE_FUNCTION(UBulletPoolingComponent::execSpawn_Aiming_NWayBullet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_PROPERTY(FFloatProperty,Z_Param_p_AngleRange);
		P_GET_PROPERTY(FIntProperty,Z_Param_p_Interval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn_Aiming_NWayBullet(Z_Param_count,Z_Param_p_AngleRange,Z_Param_p_Interval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBulletPoolingComponent::execSpawn_NWayBullet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_PROPERTY(FFloatProperty,Z_Param_p_AngleRange);
		P_GET_PROPERTY(FIntProperty,Z_Param_p_Interval);
		P_GET_PROPERTY(FFloatProperty,Z_Param_p_ShootAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn_NWayBullet(Z_Param_count,Z_Param_p_AngleRange,Z_Param_p_Interval,Z_Param_p_ShootAngle);
		P_NATIVE_END;
	}
	void UBulletPoolingComponent::StaticRegisterNativesUBulletPoolingComponent()
	{
		UClass* Class = UBulletPoolingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn_Aiming_NWayBullet", &UBulletPoolingComponent::execSpawn_Aiming_NWayBullet },
			{ "Spawn_NWayBullet", &UBulletPoolingComponent::execSpawn_NWayBullet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics
	{
		struct BulletPoolingComponent_eventSpawn_Aiming_NWayBullet_Parms
		{
			int32 count;
			float p_AngleRange;
			int32 p_Interval;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_p_Interval;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_p_AngleRange;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::NewProp_p_Interval = { "p_Interval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BulletPoolingComponent_eventSpawn_Aiming_NWayBullet_Parms, p_Interval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::NewProp_p_AngleRange = { "p_AngleRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BulletPoolingComponent_eventSpawn_Aiming_NWayBullet_Parms, p_AngleRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BulletPoolingComponent_eventSpawn_Aiming_NWayBullet_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::NewProp_p_Interval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::NewProp_p_AngleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn Bullet" },
		{ "CPP_Default_count", "7" },
		{ "CPP_Default_p_AngleRange", "0.300000" },
		{ "CPP_Default_p_Interval", "15" },
		{ "ModuleRelativePath", "Public/BulletPoolingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBulletPoolingComponent, nullptr, "Spawn_Aiming_NWayBullet", nullptr, nullptr, sizeof(BulletPoolingComponent_eventSpawn_Aiming_NWayBullet_Parms), Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics
	{
		struct BulletPoolingComponent_eventSpawn_NWayBullet_Parms
		{
			int32 count;
			float p_AngleRange;
			int32 p_Interval;
			float p_ShootAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_p_ShootAngle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_p_Interval;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_p_AngleRange;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::NewProp_p_ShootAngle = { "p_ShootAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BulletPoolingComponent_eventSpawn_NWayBullet_Parms, p_ShootAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::NewProp_p_Interval = { "p_Interval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BulletPoolingComponent_eventSpawn_NWayBullet_Parms, p_Interval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::NewProp_p_AngleRange = { "p_AngleRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BulletPoolingComponent_eventSpawn_NWayBullet_Parms, p_AngleRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BulletPoolingComponent_eventSpawn_NWayBullet_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::NewProp_p_ShootAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::NewProp_p_Interval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::NewProp_p_AngleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn Bullet" },
		{ "CPP_Default_count", "7" },
		{ "CPP_Default_p_AngleRange", "0.300000" },
		{ "CPP_Default_p_Interval", "5" },
		{ "CPP_Default_p_ShootAngle", "0.500000" },
		{ "ModuleRelativePath", "Public/BulletPoolingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBulletPoolingComponent, nullptr, "Spawn_NWayBullet", nullptr, nullptr, sizeof(BulletPoolingComponent_eventSpawn_NWayBullet_Parms), Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBulletPoolingComponent_NoRegister()
	{
		return UBulletPoolingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBulletPoolingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBulletPoolingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectPoolingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPooling,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBulletPoolingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBulletPoolingComponent_Spawn_Aiming_NWayBullet, "Spawn_Aiming_NWayBullet" }, // 196093201
		{ &Z_Construct_UFunction_UBulletPoolingComponent_Spawn_NWayBullet, "Spawn_NWayBullet" }, // 373859892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBulletPoolingComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BulletPoolingComponent.h" },
		{ "ModuleRelativePath", "Public/BulletPoolingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBulletPoolingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBulletPoolingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBulletPoolingComponent_Statics::ClassParams = {
		&UBulletPoolingComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBulletPoolingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBulletPoolingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBulletPoolingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBulletPoolingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBulletPoolingComponent, 25282842);
	template<> OBJECTPOOLING_API UClass* StaticClass<UBulletPoolingComponent>()
	{
		return UBulletPoolingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBulletPoolingComponent(Z_Construct_UClass_UBulletPoolingComponent, &UBulletPoolingComponent::StaticClass, TEXT("/Script/ObjectPooling"), TEXT("UBulletPoolingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBulletPoolingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
