#pragma once
#include "ObjectPooling.h"
#include "ObjectPoolingComponent.h"
#include "BulletInfo.h"
#include "BulletPoolingComponent.generated.h"

UCLASS()
class OBJECTPOOLING_API UBulletPoolingComponent : public UObjectPoolingComponent
{
	GENERATED_BODY()

public:
	UBulletPoolingComponent();


public:
	/*Setter*/
	FORCEINLINE void SetSpawnTransform(const FTransform& newTran);

	FORCEINLINE void SetBulletSpeed(const float& bulletSpeed);

	FORCEINLINE void SetBulletFireAngle(const float& bulletAngle);

	/*Getter*/
	FORCEINLINE FTransform GetSpawnTransform() const;
private:
	FORCEINLINE void AddAngleRate(const bool& isReverse = false);

	FORCEINLINE bool CalcSpawnIntervalTime(float IntervalTime = 0.1f);

public:
	//일직선 총알
	void SpawnStraightBullet(const bool& p_IsRevere = false,const int32& p_Interval = 3);

	//Spawn Function's - Sprial's
public:
	//회전 총알 
	void SpawnSprialBullet(const bool& p_IsRevere = false,const int32& p_Interval = 3);

	//멀티 회전 총알
	void SpawnMultiSprialBullet(const bool& p_IsRevere = true);

	//멀티 (간격) 회전 총알
	void Spawn_IntervalMultiSprialBullet(bool p_IsRevere = false, int32 p_Interval = 5);

	//여러개 양방향 간격 있는 회전 총알
	void Spawn_BI_DirectionalSprialBullet(bool p_IsRevere = false, int32 p_Interval = 3);


public:
	void SpawnBentSprialBullet(bool p_IsRevere = false, int32 p_Interval = 5, int32 p_Count = 1);	


public:
	UFUNCTION(BlueprintCallable, Category = "Spawn Bullet")
		void Spawn_NWayBullet(int32 count = 7, float p_AngleRange = 0.3f, int32 p_Interval = 5, float p_ShootAngle = 0.5f);


	UFUNCTION(BlueprintCallable, Category = "Spawn Bullet")
		void Spawn_Aiming_NWayBullet(int32 count = 7, float p_AngleRange = 0.3f, int32 p_Interval = 15);

protected:
	virtual void SpawnBullet() {};

	FBullet_Info mBulletInfo;

	FTransform mCurSpawnTrans;

	int32 mTimer;

	int32 mSpawnCnt;

	float mSpawnPerSeconds;


	float ShotAngle[2] = { 0,0 };

	float ShotAngleRate[2] = { 0.02,-0.02 };
};
