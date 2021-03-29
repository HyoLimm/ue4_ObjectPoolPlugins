// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTPOOLING_ObjectPoolingComponent_generated_h
#error "ObjectPoolingComponent.generated.h already included, missing '#pragma once' in ObjectPoolingComponent.h"
#endif
#define OBJECTPOOLING_ObjectPoolingComponent_generated_h

#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_SPARSE_DATA
#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_RPC_WRAPPERS
#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPoolingComponent(); \
	friend struct Z_Construct_UClass_UObjectPoolingComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectPoolingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPooling"), NO_API) \
	DECLARE_SERIALIZER(UObjectPoolingComponent)


#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUObjectPoolingComponent(); \
	friend struct Z_Construct_UClass_UObjectPoolingComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectPoolingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPooling"), NO_API) \
	DECLARE_SERIALIZER(UObjectPoolingComponent)


#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPoolingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPoolingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPoolingComponent(UObjectPoolingComponent&&); \
	NO_API UObjectPoolingComponent(const UObjectPoolingComponent&); \
public:


#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPoolingComponent(UObjectPoolingComponent&&); \
	NO_API UObjectPoolingComponent(const UObjectPoolingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectPoolingComponent)


#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPoolSize() { return STRUCT_OFFSET(UObjectPoolingComponent, mPoolSize); } \
	FORCEINLINE static uint32 __PPO__SpawnTargetActor() { return STRUCT_OFFSET(UObjectPoolingComponent, SpawnTargetActor); } \
	FORCEINLINE static uint32 __PPO__q_Pool() { return STRUCT_OFFSET(UObjectPoolingComponent, q_Pool); }


#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_7_PROLOG
#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_SPARSE_DATA \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_RPC_WRAPPERS \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_INCLASS \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_SPARSE_DATA \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_INCLASS_NO_PURE_DECLS \
	Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTPOOLING_API UClass* StaticClass<class UObjectPoolingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_C_Plugins_ObjectPooling_Source_ObjectPooling_Public_ObjectPoolingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
