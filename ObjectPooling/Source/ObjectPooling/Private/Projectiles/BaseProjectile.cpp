// Fill out your copyright notice in the Description page of Project Settings.
#include "Projectiles/BaseProjectile.h"

ABaseProjectile::ABaseProjectile()
	: IsPlayerBullet(false)
	, mOwnerCompo(nullptr)
	, mIsAlive(false)
{

	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.TickInterval = 1.f / 60.f; //틱간격 60프레임 설정

	SM_Bullet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BULLET"));
	RootComponent = SM_Bullet;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SMBULLET(TEXT("StaticMesh'/Game/Assets/StaticMesh/Bullet/SM_Shell_9mm.SM_Shell_9mm'"));
	if (SMBULLET.Succeeded() && SMBULLET.Object != nullptr)
	{
		SM_Bullet->SetStaticMesh(SMBULLET.Object);

	}

	SM_Bullet->CastShadow = false;
	SM_Bullet->SetCollisionProfileName(TEXT("EnemyBulletCollision"));
	SM_Bullet->SetGenerateOverlapEvents(false);

	//////////////////////////////////////////////////////////////////////////////////////


	mRadianValue = 0.f;
	//mShooter_Angle = 0.f;
	//mShooter_Speed = 0.f;

	//mBullet_AngleRate = 0.f;
	//mBullet_SpeedRate = 0.f;

	mXLoca = 0.f;
	mYLoca = 0.f;



	mDestroyValue = 10000.f;

	mBulletDamage = 1000.f;

}


// Called every frame
void ABaseProjectile::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if (mIsAlive)
	{
		SetRadianValue();
		SetLocationValue();
		SetAddtiveValue();
		MoveBullet();

		if (GetIsEndOfLevel()) 
		{
			DestroyBullet();
		}
	}
}
//Default's
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FORCEINLINE void ABaseProjectile::SetBulletDamage(const float& p_BulletDamage)
{
	mBulletDamage = p_BulletDamage;
}

FORCEINLINE void ABaseProjectile::SetRadianValue()
{
	mRadianValue = mBulletInfo.GetShooterAngle() * UKismetMathLibrary::GetPI() * 2.f; //각도를 라디안 단위로 변환
}

FORCEINLINE void ABaseProjectile::SetLocationValue() 
{
	const float FIRESPEED = mBulletInfo.GetShooterSpeed();
	mXLoca = FIRESPEED * UKismetMathLibrary::Cos(mRadianValue);
	mYLoca = FIRESPEED * UKismetMathLibrary::Sin(mRadianValue);
}

FORCEINLINE void ABaseProjectile::SetAddtiveValue()
{
	mBulletInfo.SetShooterAngle(mBulletInfo.GetShooterAngle() + mBulletInfo.GetBulletAngleRate());
	mBulletInfo.SetShooterSpeed(mBulletInfo.GetShooterSpeed() + mBulletInfo.GetBulletSpeedRate());
}

FORCEINLINE void ABaseProjectile::SetBulletInfomation(const FBullet_Info& NewInfo)
{
	mBulletInfo = NewInfo;
}

//State
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
FORCEINLINE void ABaseProjectile::SetAlive(const bool& p_IsAlive)
{
	mIsAlive = p_IsAlive;
	SM_Bullet->SetGenerateOverlapEvents(p_IsAlive);
}

//Managed
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
FORCEINLINE void ABaseProjectile::DestroyBullet()
{
	SetAlive(false);
	mOwnerCompo->ReturnToPool(this);
}

FORCEINLINE bool ABaseProjectile::GetIsEndOfLevel() const
{
	const bool XResult = GetActorLocation().X >= 3200.f || -17500.f >= GetActorLocation().X;
	const bool YResult = GetActorLocation().Y >= 9000.f || -5000.f >= GetActorLocation().Y;
	return XResult || YResult;
}

FORCEINLINE void ABaseProjectile::MoveBullet()
{
	RootComponent->AddWorldOffset(FVector(mXLoca, mYLoca, 0.f));
}

