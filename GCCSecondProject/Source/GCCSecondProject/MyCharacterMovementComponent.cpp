// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterMovementComponent.h"

float UMyCharacterMovementComponent::SlideAlongSurface(
	const FVector& Delta,
	float Time,
	const FVector& Normal,
	FHitResult& Hit,
	bool bHandleImpact)
{
	// 슬라이딩 제거 → 이동량 0 반환
	return 0.f;
}