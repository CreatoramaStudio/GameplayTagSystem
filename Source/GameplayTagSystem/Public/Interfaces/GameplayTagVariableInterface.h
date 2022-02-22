// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagVariableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGameplayTagVariableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GAMEPLAYTAGSYSTEM_API IGameplayTagVariableInterface
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

#pragma region SingleVariable

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Core")
		bool BoolGameplayTagVariable(FGameplayTag GameplayTag, bool& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Core")
		bool IntGameplayTagVariable(FGameplayTag GameplayTag, int32& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Core")
		bool FloatGameplayTagVariable(FGameplayTag GameplayTag, float& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Core")
		bool NameGameplayTagVariable(FGameplayTag GameplayTag, FName& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Core")
		bool StringGameplayTagVariable(FGameplayTag GameplayTag, FString& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Core")
		bool TextGameplayTagVariable(FGameplayTag GameplayTag, FText& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Core")
		bool VectorGameplayTagVariable(FGameplayTag GameplayTag, FVector& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Core")
		bool RotatorGameplayTagVariable(FGameplayTag GameplayTag, FRotator& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Core")
		bool TransformGameplayTagVariable(FGameplayTag GameplayTag, FTransform& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Object")
		bool ObjectGameplayTagVariable(FGameplayTag GameplayTag, UObject*& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Object|Actor")
		bool ActorGameplayTagVariable(FGameplayTag GameplayTag, AActor*& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Object|Actor")
		bool PawnGameplayTagVariable(FGameplayTag GameplayTag, APawn*& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Object|Actor")
		bool CharacterGameplayTagVariable(FGameplayTag GameplayTag, ACharacter*& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Object|Component")
		bool ActorComponentGameplayTagVariable(FGameplayTag GameplayTag, UActorComponent*& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Variable|Object|Component")
		bool SceneComponentGameplayTagVariable(FGameplayTag GameplayTag, USceneComponent*& Value);

#pragma endregion

#pragma region Array

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Core")
		bool BoolArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<bool>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Core")
		bool IntArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<int32>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Core")
		bool FloatArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<float>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Core")
		bool NameArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<FName>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Core")
		bool StringArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<FString>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Core")
		bool TextArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<FText>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Core")
		bool VectorArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<FVector>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Core")
		bool RotatorArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<FRotator>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Core")
		bool TransformArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<FTransform>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Object")
		bool ObjectArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<UObject*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Object|Actor")
		bool ActorArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<AActor*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Object|Actor")
		bool PawnArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<APawn*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Object|Actor")
		bool CharacterArrayGameplayTagVariable(FGameplayTag GameplayTag, TArray<ACharacter*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Object|Component")
		bool ActorArrayComponentGameplayTagVariable(FGameplayTag GameplayTag, TArray<UActorComponent*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Variables|Array|Object|Component")
		bool SceneArrayComponentGameplayTagVariable(FGameplayTag GameplayTag, TArray<USceneComponent*>& Value);


#pragma endregion
};
