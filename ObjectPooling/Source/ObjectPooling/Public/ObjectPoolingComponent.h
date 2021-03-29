// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "ObjectPooling.h"
#include "Components/ActorComponent.h"
#include "ObjectPoolingComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OBJECTPOOLING_API UObjectPoolingComponent : public UActorComponent
{
	GENERATED_BODY()
public:	
	UObjectPoolingComponent();

	FORCEINLINE void SetPoolSize(const int32& newSize); //풀 사이즈 지정용

	FORCEINLINE AActor* SpawnActorFromPool(const FTransform& spawnTransform); //풀로부터 액터 스폰

	FORCEINLINE void ReturnToPool(AActor* target); //풀로 반환
protected:
	UPROPERTY(VisibleAnywhere, Category = "Pooling")
	int32 mPoolSize;

	UPROPERTY(VisibleAnywhere,Category="Pooling")
	TSubclassOf<class AActor> SpawnTargetActor; //스폰할 액터 지정용 

	UPROPERTY(VisibleAnywhere, Category = "Pooling")
	TArray<AActor*> q_Pool;

private:

	FORCEINLINE void ActorHideToggle(const bool& isHide, AActor* target);

	FORCEINLINE bool GetPool_IsEmpty() const;
		
};
