// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ObjectPooling.h"
#include "BulletPoolingComponent.h"
#include "EnemyProjectilePoolingComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Edwin), meta = (BlueprintSpawnableComponent))
class OBJECTPOOLING_API UEnemyProjectilePoolingComponent : public UBulletPoolingComponent
{
	GENERATED_BODY()
public:

	UEnemyProjectilePoolingComponent();

	virtual void SpawnBullet() override;
};
