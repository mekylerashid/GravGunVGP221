// Fill out your copyright notice in the Description page of Project Settings.


#include "GUI/EndScreenWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include <Kismet/GameplayStatics.h>

void UEndScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();

	QuitButton->OnClicked.AddDynamic(this, &UEndScreenWidget::OnQuitClicked);
	PlayButton->OnClicked.AddDynamic(this, &UEndScreenWidget::OnPlayClicked);

}

void UEndScreenWidget::OnQuitClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}

void UEndScreenWidget::OnPlayClicked()
{
	UGameplayStatics::OpenLevel(this, FName("GameMap"));
}

