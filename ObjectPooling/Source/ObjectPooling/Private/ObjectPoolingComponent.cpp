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

	/*Ǯ ������� ���� ����*/
	if (GetPool_IsEmpty()) 
	{
		UWorld* const world = GetWorld();
		if (world)
		{
			FActorSpawnParameters SpawnParams;
			SpawnedActor = world->SpawnActor<AActor>(SpawnTargetActor, spawnTransform, SpawnParams);

		}
	}
	else //Ǯ�� �ִ� ���� ������
	{		
		SpawnedActor = q_Pool[0];//�Ǿտ� �ִ� ���� ������
		q_Pool.Remove(SpawnedActor);//Ǯ���� ����

		SpawnedActor->SetActorTransform(spawnTransform);

		ActorHideToggle(false, SpawnedActor);
		
	}


	return SpawnedActor;
}

FORCEINLINE void UObjectPoolingComponent::ReturnToPool(AActor* target)
{
	if (q_Pool.Num()==mPoolSize) //Ǯ�� ���� �ִٸ�
	{
		target->Destroy(); //���� ����
	}
	else
	{
		//�ش� ���� Ǯ�� �ٽ� �߰�
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

