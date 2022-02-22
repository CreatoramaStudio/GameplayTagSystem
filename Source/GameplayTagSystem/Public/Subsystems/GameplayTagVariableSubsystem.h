// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "Structs/ArrayStructs.h"
#include "GameplayTagVariableSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPLAYTAGSYSTEM_API UGameplayTagVariableSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

#pragma region SingleVariable

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Core")
		TMap<FGameplayTag, bool> BoolVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Core")
		TMap<FGameplayTag, int32> IntVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Core")
		TMap<FGameplayTag, float> FloatVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Core")
		TMap<FGameplayTag, FName> NameVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Core")
		TMap<FGameplayTag, FString> StringVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Core")
		TMap<FGameplayTag, FText> TextVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Core")
		TMap<FGameplayTag, FVector> VectorVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Core")
		TMap<FGameplayTag, FRotator> RotatorVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Core")
		TMap<FGameplayTag, FTransform> TransformVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Object")
		TMap<FGameplayTag, UObject*> ObjectVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Object|Actor")
		TMap<FGameplayTag, AActor*> ActorVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Object|Actor")
		TMap<FGameplayTag, APawn*> PawnVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Object|Actor")
		TMap<FGameplayTag, ACharacter*> CharacterVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Object|Component")
		TMap<FGameplayTag, UActorComponent*> ActorComponentVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Variable|Object|Component")
		TMap<FGameplayTag, USceneComponent*> SceneComponentVariables;

#pragma endregion

#pragma region Array

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Core")
		TMap<FGameplayTag, FBoolArray> BoolArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Core")
		TMap<FGameplayTag, FIntArray> IntArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Core")
		TMap<FGameplayTag, FFloatArray> FloatArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Core")
		TMap<FGameplayTag, FNameArray> NameArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Core")
		TMap<FGameplayTag, FStringArray> StringArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Core")
		TMap<FGameplayTag, FTextArray> TextArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Core")
		TMap<FGameplayTag, FVectorArray> VectorArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Core")
		TMap<FGameplayTag, FRotatorArray> RotatorArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Core")
		TMap<FGameplayTag, FTransformArray> TransformArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Object")
		TMap<FGameplayTag, FObjectArray> ObjectArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Object|Actor")
		TMap<FGameplayTag, FActorArray> ActorArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Object|Actor")
		TMap<FGameplayTag, FPawnArray> PawnArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Object|Actor")
		TMap<FGameplayTag, FCharacterArray> CharacterArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Object|Component")
		TMap<FGameplayTag, FActorComponentArray> ActorComponentArrayVariables;

	UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Gameplay Tag Variable Subsystem|Array|Object|Component")
		TMap<FGameplayTag, FSceneComponentArray> SceneComponentArrayVariables;

#pragma endregion

protected:

private:

public:

protected:

private:

};
