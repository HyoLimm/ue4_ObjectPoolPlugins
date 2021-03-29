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

	FORCEINLINE void SetPoolSize(const int32& newSize); //Ǯ ������ ������

	FORCEINLINE AActor* SpawnActorFromPool(const FTransform& spawnTransform); //Ǯ�κ��� ���� ����

	FORCEINLINE void ReturnToPool(AActor* target); //Ǯ�� ��ȯ
protected:
	UPROPERTY(VisibleAnywhere, Category = "Pooling")
	int32 mPoolSize;

	UPROPERTY(VisibleAnywhere,Category="Pooling")
	TSubclassOf<class AActor> SpawnTargetActor; //������ ���� ������ 

	UPROPERTY(VisibleAnywhere, Category = "Pooling")
	TArray<AActor*> q_Pool;

private:

	FORCEINLINE void ActorHideToggle(const bool& isHide, AActor* target);

	FORCEINLINE bool GetPool_IsEmpty() const;
		
};
