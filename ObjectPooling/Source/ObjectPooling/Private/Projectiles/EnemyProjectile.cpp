// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles/EnemyProjectile.h"

AEnemyProjectile::AEnemyProjectile()
{
	SM_Bullet->SetCollisionProfileName(TEXT("EnemyProjectilePreset"));
}

