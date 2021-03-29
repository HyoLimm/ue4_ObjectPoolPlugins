// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPooling/Public/BulletInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletInfo() {}
// Cross Module References
	OBJECTPOOLING_API UScriptStruct* Z_Construct_UScriptStruct_FBullet_Info();
	UPackage* Z_Construct_UPackage__Script_ObjectPooling();
// End Cross Module References
class UScriptStruct* FBullet_Info::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OBJECTPOOLING_API uint32 Get_Z_Construct_UScriptStruct_FBullet_Info_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBullet_Info, Z_Construct_UPackage__Script_ObjectPooling(), TEXT("Bullet_Info"), sizeof(FBullet_Info), Get_Z_Construct_UScriptStruct_FBullet_Info_Hash());
	}
	return Singleton;
}
template<> OBJECTPOOLING_API UScriptStruct* StaticStruct<FBullet_Info>()
{
	return FBullet_Info::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBullet_Info(FBullet_Info::StaticStruct, TEXT("/Script/ObjectPooling"), TEXT("Bullet_Info"), false, nullptr, nullptr);
static struct FScriptStruct_ObjectPooling_StaticRegisterNativesFBullet_Info
{
	FScriptStruct_ObjectPooling_StaticRegisterNativesFBullet_Info()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Bullet_Info")),new UScriptStruct::TCppStructOps<FBullet_Info>);
	}
} ScriptStruct_ObjectPooling_StaticRegisterNativesFBullet_Info;
	struct Z_Construct_UScriptStruct_FBullet_Info_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBullet_Info_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BulletInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBullet_Info_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBullet_Info>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBullet_Info_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPooling,
		nullptr,
		&NewStructOps,
		"Bullet_Info",
		sizeof(FBullet_Info),
		alignof(FBullet_Info),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBullet_Info_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBullet_Info_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBullet_Info()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBullet_Info_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ObjectPooling();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Bullet_Info"), sizeof(FBullet_Info), Get_Z_Construct_UScriptStruct_FBullet_Info_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBullet_Info_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBullet_Info_Hash() { return 4048908099U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
