// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles/PlayerProjectile.h"

APlayerProjectile::APlayerProjectile(){


	SM_Bullet->SetCollisionProfileName(TEXT("PlayerBulletPreset"));
}
