// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Structs/GameplayTagArrayStructs.h"
#include "GameplayTagVariableComponent.generated.h"


UCLASS( ClassGroup=(GameplayTag), meta=(BlueprintSpawnableComponent) )
class GAMEPLAYTAGSYSTEM_API UGameplayTagVariableComponent : public UActorComponent
{
	GENERATED_BODY()

public:

#pragma region SingleVariable

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Core")
	TMap<FGameplayTag, bool> BoolVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Core")
	TMap<FGameplayTag, int32> IntVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Core")
	TMap<FGameplayTag, float> FloatVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Core")
	TMap<FGameplayTag, FName> NameVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Core")
	TMap<FGameplayTag, FString> StringVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Core")
	TMap<FGameplayTag, FText> TextVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Core")
	TMap<FGameplayTag, FVector> VectorVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Core")
	TMap<FGameplayTag, FRotator> RotatorVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Core")
	TMap<FGameplayTag, FTransform> TransformVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Object")
	TMap<FGameplayTag, TObjectPtr<UObject>> ObjectVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Object|Actor")
	TMap<FGameplayTag, TObjectPtr<AActor>> ActorVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Object|Actor")
	TMap<FGameplayTag, TObjectPtr<APawn>> PawnVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Object|Actor")
	TMap<FGameplayTag, TObjectPtr<ACharacter>> CharacterVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Object|Component")
	TMap<FGameplayTag, TObjectPtr<UActorComponent>> ActorComponentVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Variable|Object|Component")
	TMap<FGameplayTag, TObjectPtr<USceneComponent>> SceneComponentVariables;

#pragma endregion

#pragma region Array

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Core")
	TMap<FGameplayTag, FBoolArray> BoolArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Core")
	TMap<FGameplayTag, FIntArray> IntArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Core")
	TMap<FGameplayTag, FFloatArray> FloatArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Core")
	TMap<FGameplayTag, FNameArray> NameArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Core")
	TMap<FGameplayTag, FStringArray> StringArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Core")
	TMap<FGameplayTag, FTextArray> TextArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Core")
	TMap<FGameplayTag, FVectorArray> VectorArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Core")
	TMap<FGameplayTag, FRotatorArray> RotatorArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Core")
	TMap<FGameplayTag, FTransformArray> TransformArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Object")
	TMap<FGameplayTag, FObjectArray> ObjectArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Object|Actor")
	TMap<FGameplayTag, FActorArray> ActorArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Object|Actor")
	TMap<FGameplayTag, FPawnArray> PawnArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Object|Actor")
	TMap<FGameplayTag, FCharacterArray> CharacterArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Object|Component")
	TMap<FGameplayTag, FActorComponentArray> ActorComponentArrayVariables;

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tag Variable Component|Array|Object|Component")
	TMap<FGameplayTag, FSceneComponentArray> SceneComponentArrayVariables;

#pragma endregion

protected:

private:

public:

protected:

private:
};
