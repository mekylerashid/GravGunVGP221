// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/MenuHUD.h"

void AMenuHUD::BeginPlay()
{
	SpawnGameOverMenuWidget();
}

void AMenuHUD::SpawnGameOverMenuWidget()
{
	if (!EndScreenWidgetClass) return;

	// Delete game menu widget if it already exists
	if (EndScreenWidgetContainer) {
		EndScreenWidgetContainer->RemoveFromParent();
		EndScreenWidgetContainer = nullptr;
	}

	EndScreenWidgetContainer = CreateWidget<UEndScreenWidget>(GetWorld(),EndScreenWidgetClass);
	EndScreenWidgetContainer->AddToViewport();

	PlayerOwner->bShowMouseCursor = true;
	PlayerOwner->SetInputMode(FInputModeUIOnly());
}


