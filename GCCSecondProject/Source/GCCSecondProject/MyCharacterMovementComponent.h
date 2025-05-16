// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class GCCSECONDPROJECT_API UMyCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

protected:
	// 슬라이딩 완전 차단을 위한 오버라이드 함수
	virtual float SlideAlongSurface(
		const FVector& Delta,
		float Time,
		const FVector& Normal,
		FHitResult& Hit,
		bool bHandleImpact = false) override;
};
