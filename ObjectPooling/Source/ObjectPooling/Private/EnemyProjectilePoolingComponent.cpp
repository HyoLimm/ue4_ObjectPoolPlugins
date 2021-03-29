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

	/*스폰 위치 초기화*/
	FTransform _SpawnTransform;
	_SpawnTransform.SetLocation(GetSpawnTransform().GetLocation());
	_SpawnTransform.SetRotation(GetSpawnTransform().GetRotation());
	_SpawnTransform.SetScale3D(GetSpawnTransform().GetScale3D());

	//스폰
	AEnemyProjectile* SpawnedBullet = Cast<AEnemyProjectile>(SpawnActorFromPool(_SpawnTransform));

	//스폰 실패시 리턴
	if (SpawnedBullet == nullptr) { UE_LOG(LogTemp, Log, TEXT("SpawnFailed...")); return; }


	SpawnedBullet->SetOwnerComponent(this);

	//총알 정보 전달
	SpawnedBullet->SetBulletInfomation(mBulletInfo);

	//살아 있다
	SpawnedBullet->SetAlive(true);
	UE_LOG(LogTemp, Log, TEXT("Spawn2"));
}
