// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBulletPoolingComponent.h"
#include "Projectiles/PlayerProjectile.h"
UPlayerBulletPoolingComponent::UPlayerBulletPoolingComponent()
{
	SpawnTargetActor = APlayerProjectile::StaticClass();
	mPoolSize = 50;
}

void UPlayerBulletPoolingComponent::SpawnBullet(){
	Super::SpawnBullet();

	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("Spawn Call PlayerBulletCompo")));
	/*���� ��ġ �ʱ�ȭ*/
	FTransform _SpawnTransform;
	
	_SpawnTransform.SetLocation(GetSpawnTransform().GetLocation());
	_SpawnTransform.SetRotation(GetSpawnTransform().GetRotation());
	_SpawnTransform.SetScale3D(FVector(10.f, 10.f, 10.f));

	//����
	APlayerProjectile* SpawnedBullet = Cast<APlayerProjectile>(SpawnActorFromPool(_SpawnTransform));

	//���� ���н� ����
	if (SpawnedBullet == nullptr) { UE_LOG(LogTemp, Log, TEXT("SpawnFailed...")); return; }


	SpawnedBullet->SetOwnerComponent(this);

	//�Ѿ� ���� ����
	SpawnedBullet->SetBulletInfomation(mBulletInfo);

	//��� �ִ�
	SpawnedBullet->SetAlive(true);
}
