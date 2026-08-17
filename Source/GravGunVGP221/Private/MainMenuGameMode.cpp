// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"

void AMainMenuGameMode::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);
}
