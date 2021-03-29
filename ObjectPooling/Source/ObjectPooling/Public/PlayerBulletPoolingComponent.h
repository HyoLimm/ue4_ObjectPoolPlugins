// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "ObjectPooling.h"
#include "BulletPoolingComponent.h"
#include "PlayerBulletPoolingComponent.generated.h"

UCLASS(ClassGroup = (Edwin), meta = (BlueprintSpawnableComponent))
class OBJECTPOOLING_API UPlayerBulletPoolingComponent : public UBulletPoolingComponent
{
	GENERATED_BODY()
public:

	UPlayerBulletPoolingComponent();

	virtual void SpawnBullet() override;
};
