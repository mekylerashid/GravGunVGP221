// Fill out your copyright notice in the Description page of Project Settings.


#include "GUI/GameOverWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include <Kismet/GameplayStatics.h>

//void UGameOverWidget::NativeConstruct()
//{
//	Super::NativeConstruct();
//
//	QuitButton->OnClicked.AddDynamic(this, &UGameOverWidget::OnQuitClicked);
//	QuitButton->OnClicked.AddDynamic(this, &UGameOverWidget::OnPlayClicked);
//
//}
//
//void UGameOverWidget::OnQuitClicked()
//{
//	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
//}
//
//void UGameOverWidget::OnPlayClicked()
//{
//	UGameplayStatics::OpenLevel(this, FName("GameMap"));
//}
