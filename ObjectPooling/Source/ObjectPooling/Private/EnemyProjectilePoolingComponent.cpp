// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectilePoolingComponent.h"
#include "Projectiles/EnemyProjectile.h"

UEnemyProjectilePoolingComponent::UEnemyProjectilePoolingComponent()
{
	SpawnTargetActor = AEnemyProjectile::StaticClass();
	mPoolSize = 50;
	
	mBulletInfo.SetShooterAngle(0.5f);
}


void UEnemyProjectilePoolingComponent::SpawnBullet()
{	
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Spawn Call EnemyBulletCompo")));

	/*���� ��ġ �ʱ�ȭ*/
	FTransform _SpawnTransform;
	_SpawnTransform.SetLocation(GetSpawnTransform().GetLocation());
	_SpawnTransform.SetRotation(GetSpawnTransform().GetRotation());
	_SpawnTransform.SetScale3D(GetSpawnTransform().GetScale3D());

	//����
	AEnemyProjectile* SpawnedBullet = Cast<AEnemyProjectile>(SpawnActorFromPool(_SpawnTransform));

	//���� ���н� ����
	if (SpawnedBullet == nullptr) { UE_LOG(LogTemp, Log, TEXT("SpawnFailed...")); return; }


	SpawnedBullet->SetOwnerComponent(this);

	//�Ѿ� ���� ����
	SpawnedBullet->SetBulletInfomation(mBulletInfo);

	//��� �ִ�
	SpawnedBullet->SetAlive(true);
	UE_LOG(LogTemp, Log, TEXT("Spawn2"));
}
