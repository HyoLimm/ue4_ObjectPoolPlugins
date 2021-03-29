// Fill out your copyright notice in the Description page of Project Settings.
#include "BulletPoolingComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

UBulletPoolingComponent::UBulletPoolingComponent()
	: mTimer(0)
	, mSpawnCnt(4)
	, mSpawnPerSeconds(0.f)
{
	
	mBulletInfo.SetShooterSpeed(12.5f);
	mPoolSize = 50;
}

/*스폰 위치*/
FORCEINLINE void UBulletPoolingComponent::SetSpawnTransform(const FTransform& p_NewTransform)
{
	mCurSpawnTrans = p_NewTransform;
}

/*총알 속도*/
FORCEINLINE void UBulletPoolingComponent::SetBulletSpeed(const float& bulletSpeed)
{
	//mBulletInfo.fireSpeed = bulletSpeed;
	mBulletInfo.SetShooterSpeed(bulletSpeed);
}

//총알 앵글
FORCEINLINE void UBulletPoolingComponent::SetBulletFireAngle(const float& bulletAngle)
{
	mBulletInfo.SetShooterAngle(bulletAngle);
}


FORCEINLINE FTransform UBulletPoolingComponent::GetSpawnTransform() const
{
	return mCurSpawnTrans;
}

FORCEINLINE void UBulletPoolingComponent::AddAngleRate(const bool& isReverse/*= false*/)
{
	float newAngle = mBulletInfo.GetShooterAngle() + (mBulletInfo.GetBulletAddtiveRot() * ( isReverse ? -1.f : 1.f ));

	newAngle -= UKismetMathLibrary::FFloor(newAngle);

	mBulletInfo.SetShooterAngle(newAngle);
	
}

FORCEINLINE bool UBulletPoolingComponent::CalcSpawnIntervalTime(float IntervalTime /*= 0.1f*/)
{
	mSpawnPerSeconds = UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) + mSpawnPerSeconds;

	if (mSpawnPerSeconds >= IntervalTime) 
	{
		mSpawnPerSeconds = 0.f;
		return true;
	}
	return false;
}

/*Spawn bullet*/
void UBulletPoolingComponent::SpawnStraightBullet(const bool& p_IsRevere /*= false*/,const int32& p_Interval /*= 3*/)
{
	UE_LOG(LogTemp, Log, TEXT("Spawn0!"));
	//if (Timer == 0) {
	//m_BulletInfo.Fire_Angle = 0.5f;
	SpawnBullet();
	//}
	//Timer = (Timer + 1) % p_Interval;
}

/*Sprial's */
void UBulletPoolingComponent::SpawnSprialBullet(const bool& p_IsRevere /*= false*/,const int32& p_Interval /*= 3*/) 
{
	mBulletInfo.SetBulletAddtiveRot(0.02f);

	if (mTimer == 0)
	{
		SpawnBullet();
	}
	AddAngleRate(p_IsRevere);
	mTimer = (mTimer + 1) % p_Interval;
}

void UBulletPoolingComponent::SpawnMultiSprialBullet(const bool& p_IsRevere /*= true*/)
{
	mBulletInfo.SetBulletAddtiveRot(0.02f);
	for (int i = 0; i < mSpawnCnt; i++)
	{		
		mBulletInfo.SetShooterAngle(mBulletInfo.GetShooterAngle() + (float(i) / mSpawnCnt));
		SpawnBullet();
	}

	AddAngleRate(p_IsRevere);
}

void UBulletPoolingComponent::Spawn_IntervalMultiSprialBullet(bool p_IsRevere /*= false*/, int32 p_Interval /*= 5*/)
{
	mBulletInfo.SetBulletAddtiveRot(0.02f);

	if (mTimer == 0)
	{
		for (int i = 0; i < mSpawnCnt; i++)
		{
			mBulletInfo.SetShooterAngle(mBulletInfo.GetShooterAngle() + (float(i) / mSpawnCnt));
			SpawnBullet();

		}
		AddAngleRate(p_IsRevere);
	}

	mTimer = (mTimer + 1) % p_Interval;
}

void UBulletPoolingComponent::Spawn_BI_DirectionalSprialBullet(bool p_IsRevere /*= false*/, int32 p_Interval /*= 3*/)
{
	if (mTimer == 0) 
	{
		for (int j = 0; j < 2; j++) 
		{
			for (int i = 0; i < mSpawnCnt; i++) 
			{
				const float cur = (float(i) / mSpawnCnt) + ShotAngle[j];
				mBulletInfo.SetShooterAngle(cur);
				SpawnBullet();

			}
			ShotAngle[j] += ShotAngleRate[j];
			ShotAngle[j] -= UKismetMathLibrary::FFloor(ShotAngle[j]);

		}
	}

	mTimer = (mTimer + 1) % p_Interval;
}

void UBulletPoolingComponent::SpawnBentSprialBullet(bool p_IsRevere /*= false*/, int32 p_Interval /*= 5*/, int32 p_Count /*= 1*/) {
	mBulletInfo.SetBulletAddtiveRot(0.02f);
	mBulletInfo.SetBulletAngleRate(0.0005f);
	mBulletInfo.SetBulletSpeedRate(0.05f);
	
	if (mTimer == 0) 
	{
		for (int i = 0; i < p_Count; i++) 
		{
			mBulletInfo.SetShooterAngle(mBulletInfo.GetShooterAngle()+ (float(i) / p_Count));			
			SpawnBullet();

		}
		AddAngleRate(p_IsRevere);
	}

	mTimer = (mTimer + 1) % p_Interval;
}


void UBulletPoolingComponent::Spawn_NWayBullet(int32 count /*= 7*/, float p_AngleRange /*= 0.3f*/, int32 p_Interval /*= 5*/, float p_ShootAngle /*= 0.5f*/) {
	/*p_AngleRange-> 0.1f ~ 1.f */
	/*BulletInfo.Bullet_AngleRate 0.0002 조절 시 회전*/

	bool IsNecessaSpawn = false;//true 시 무조건 모든 개수대로 스폰

	const float ShootAngle = 0.5f;
	if (mTimer == 0) 
	{
		if (count > 1) 
		{
			for (int i = 0; i < count; i++) 
			{
				float a = ((float)i / (float)(count - 1) - 0.5f);
				//UE_LOG(LogTemp, Log, TEXT("Spawn!"));
				if (IsNecessaSpawn)
				{
					p_AngleRange = 1.f - 1.f / count;
				}
				
				mBulletInfo.SetShooterAngle(p_AngleRange * a + p_ShootAngle);

				SpawnBullet();
			}
		}
		else if (count == 1) 
		{
			SpawnBullet();
		}
	}
	mTimer = (mTimer + 1) % p_Interval;
}

void UBulletPoolingComponent::Spawn_Aiming_NWayBullet(int32 count /*= 7*/, float p_AngleRange /*= 0.3f*/, int32 p_Interval /*= 15*/)
{
	if (mTimer == 0)
	{
		if (count > 1)
		{
			for (int i = 0; i < count; i++) 
			{
				//UE_LOG(LogTemp, Log, TEXT("Spawn!"));
				Spawn_NWayBullet(count, p_AngleRange, p_Interval, /*EnemyRefOwner->GetPlayerAngle()*/0.0f);
			}

		}
		else if (count == 1) 
		{
			SpawnBullet();
		}
	}

	mTimer = (mTimer + 1) % p_Interval;
}

