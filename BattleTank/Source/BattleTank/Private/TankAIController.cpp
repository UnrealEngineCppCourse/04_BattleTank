// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"


ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AIController Begin Play"));

	ATank* ControlledTank = nullptr;
	ControlledTank = GetControlledTank();
	
	if (ControlledTank == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possessing tank."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController is possessing: %s"), *ControlledTank->GetName());
	}

}

