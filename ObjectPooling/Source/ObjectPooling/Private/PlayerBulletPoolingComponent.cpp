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
	/*스폰 위치 초기화*/
	FTransform _SpawnTransform;
	
	_SpawnTransform.SetLocation(GetSpawnTransform().GetLocation());
	_SpawnTransform.SetRotation(GetSpawnTransform().GetRotation());
	_SpawnTransform.SetScale3D(FVector(10.f, 10.f, 10.f));

	//스폰
	APlayerProjectile* SpawnedBullet = Cast<APlayerProjectile>(SpawnActorFromPool(_SpawnTransform));

	//스폰 실패시 리턴
	if (SpawnedBullet == nullptr) { UE_LOG(LogTemp, Log, TEXT("SpawnFailed...")); return; }


	SpawnedBullet->SetOwnerComponent(this);

	//총알 정보 전달
	SpawnedBullet->SetBulletInfomation(mBulletInfo);

	//살아 있다
	SpawnedBullet->SetAlive(true);
}
