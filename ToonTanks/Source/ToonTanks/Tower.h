// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()


public:
	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();

protected:
	virtual void BeginPlay() override;

private:
	class ATank* Tank;

	UPROPERTY(EditAnywhere, Category = "TowerSpecificProperties", meta = (AllowedPrivateAccess = true))
	float FireRange = 300.f;

	FTimerHandle FireRateTimerHandle;
	float FireRate = 2.f;
	void CheckFireCondition();
	bool CheckArmDistance();
	
};
