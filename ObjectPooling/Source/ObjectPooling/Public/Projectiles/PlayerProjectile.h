// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectiles/BaseProjectile.h"
#include "PlayerProjectile.generated.h"

/**
 * 
 */
UCLASS()
class OBJECTPOOLING_API APlayerProjectile : public ABaseProjectile
{
	GENERATED_BODY()
public:

	//virtual void Tick(float DeltaTime) override;
	APlayerProjectile();


	class UMaterialInstance * Bullet_Matt;

};
