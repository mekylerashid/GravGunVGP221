// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "EndScreenWidget.generated.h"

/**
 * 
 */
UCLASS()
class GRAVGUNVGP221_API UEndScreenWidget : public UUserWidget
{
	GENERATED_BODY()
	
	public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

	UPROPERTY(meta = (BindWidget))
	UButton* PlayButton;

	UFUNCTION()
	void OnQuitClicked();

	UFUNCTION()
	void OnPlayClicked();
};
