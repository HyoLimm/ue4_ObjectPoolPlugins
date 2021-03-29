#pragma once
#include "CoreMinimal.h"
#include "BulletInfo.generated.h"

USTRUCT(Blueprintable)
struct FBullet_Info {
	GENERATED_USTRUCT_BODY()
		FBullet_Info()
		: fireSpeed(0.f)
		, fireAngle(0.f)
		, bulletSpeedRate(0.f)
		, bulletAngleRate(0.f)
		, addtiveRot(0.f)
	{}

public:
	FORCEINLINE float GetShooterAngle() const { return fireAngle; }

	FORCEINLINE float GetShooterSpeed() const { return fireSpeed; }
	FORCEINLINE float GetBulletSpeedRate() const { return bulletSpeedRate; }

	FORCEINLINE float GetBulletAngleRate() const { return bulletAngleRate; }

	FORCEINLINE float GetBulletAddtiveRot() const { return addtiveRot; }

public:
	FORCEINLINE void SetShooterAngle(const float& newValue) { fireAngle = newValue; }

	FORCEINLINE void SetShooterSpeed(const float& newValue) { fireSpeed = newValue; }

	FORCEINLINE void SetBulletAngleRate(const float& newValue) { bulletAngleRate = newValue; }

	FORCEINLINE void SetBulletSpeedRate(const float& newValue) { bulletSpeedRate = newValue; }

	FORCEINLINE void SetBulletAddtiveRot(const float& newValue) { addtiveRot = newValue; }

private:
	float fireSpeed;
	float fireAngle;


	float bulletSpeedRate;
	float bulletAngleRate;

	float addtiveRot;
};