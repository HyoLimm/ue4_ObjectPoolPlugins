// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletInfo.h"
#include "BaseProjectile.generated.h"


class UObjectPoolingComponent;
UCLASS()
class OBJECTPOOLING_API ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:		
	ABaseProjectile();
	
	virtual void Tick(float DeltaTime) override;

protected:
	class UStaticMeshComponent * SM_Bullet;

public:
	FORCEINLINE void SetRadianValue();//라디안 설정

	FORCEINLINE void SetLocationValue();

	FORCEINLINE void SetAddtiveValue();

	FORCEINLINE void SetBulletInfomation(const FBullet_Info& NewInfo);	

	FORCEINLINE void SetAlive(const bool& p_IsAlive);	
public:
	FORCEINLINE void DestroyBullet();

	FORCEINLINE bool GetIsEndOfLevel() const;

	FORCEINLINE void SetOwnerComponent(UObjectPoolingComponent* p_Owner) { mOwnerCompo = p_Owner; }

	FORCEINLINE void SetDestroyVlaue(const float& p_TargetValue) { mDestroyValue = p_TargetValue; }

	FORCEINLINE void MoveBullet();

public:
	FORCEINLINE void SetBulletDamage(const float& p_BulletDamage); //데미지 설정

	FORCEINLINE float GetBulletDamage()const { return mBulletDamage; }
private:
	bool IsPlayerBullet;

	UObjectPoolingComponent * mOwnerCompo;

	bool mIsAlive;


	FBullet_Info mBulletInfo;

	float mRadianValue;

	float mXLoca;

	float mYLoca;

	float mDestroyValue;

	float mBulletDamage;
};
