// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GUI/EndScreenWidget.h"
#include "MainMenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class GRAVGUNVGP221_API AMainMenuHUD : public AHUD
{
	GENERATED_BODY()
	
public:

	// Called when the game starts or when spawned

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UEndScreenWidget> EndScreenWidgetClass;
	UEndScreenWidget* EndScreenWidgetContainer;

	void SpawnGameOverMenuWidget();
};
