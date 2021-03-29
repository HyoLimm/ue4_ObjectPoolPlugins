//copyright hyolim
#include "ObjectPoolingComponent.h"

UObjectPoolingComponent::UObjectPoolingComponent()
	: mPoolSize(0)
	, SpawnTargetActor(nullptr)
{}

void UObjectPoolingComponent::SetPoolSize(const int32& newSize)
{
	mPoolSize = newSize;
}

FORCEINLINE AActor* UObjectPoolingComponent::SpawnActorFromPool(const FTransform& spawnTransform)
{
	AActor* SpawnedActor = nullptr;

	/*풀 비었을때 새로 스폰*/
	if (GetPool_IsEmpty()) 
	{
		UWorld* const world = GetWorld();
		if (world)
		{
			FActorSpawnParameters SpawnParams;
			SpawnedActor = world->SpawnActor<AActor>(SpawnTargetActor, spawnTransform, SpawnParams);

		}
	}
	else //풀에 있는 액터 가져옴
	{		
		SpawnedActor = q_Pool[0];//맨앞에 있는 액터 가져옴
		q_Pool.Remove(SpawnedActor);//풀에서 제거

		SpawnedActor->SetActorTransform(spawnTransform);

		ActorHideToggle(false, SpawnedActor);
		
	}


	return SpawnedActor;
}

FORCEINLINE void UObjectPoolingComponent::ReturnToPool(AActor* target)
{
	if (q_Pool.Num()==mPoolSize) //풀이 꽉차 있다면
	{
		target->Destroy(); //액터 제거
	}
	else
	{
		//해당 액터 풀에 다시 추가
		q_Pool.Add(target);
		ActorHideToggle(true, target);
	}
}

FORCEINLINE void UObjectPoolingComponent::ActorHideToggle(const bool& isHide, AActor* target)
{
	if (isHide)
	{
		target->SetActorEnableCollision(false);
		target->SetActorHiddenInGame(true);
		target->SetActorTickEnabled(false);
		target->SetActorLocation(FVector::ZeroVector);
	}
	else //show
	{
		target->SetActorEnableCollision(true);
		target->SetActorHiddenInGame(false);
		target->SetActorTickEnabled(true);
	}
}

bool UObjectPoolingComponent::GetPool_IsEmpty() const
{
	return q_Pool.Num() == 0;
}

