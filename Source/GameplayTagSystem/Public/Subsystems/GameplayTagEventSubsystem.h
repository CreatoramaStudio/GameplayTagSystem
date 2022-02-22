// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "Delegates/DynamicDelegates.h"
#include "GameplayTagEventSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPLAYTAGSYSTEM_API UGameplayTagEventSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

protected:

	TMap<FGameplayTag, FVoidMulticastDelegate> VoidEvents;

private:

public:

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Delegates Subsystem|Core")
		void CallVoidGameplayTagEvent(FGameplayTag GameplayTag);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Delegates Subsystem|Core")
		void BindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Delegates Subsystem|Core")
		void UnbindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Delegates Subsystem|Core")
		void UnbindAllVoidGameplayTagEvents(FGameplayTag GameplayTag);

protected:

private:

};
