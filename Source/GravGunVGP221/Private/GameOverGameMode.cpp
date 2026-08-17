// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOverGameMode.h"

void AGameOverGameMode::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);
}
