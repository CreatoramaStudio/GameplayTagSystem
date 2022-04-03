// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagEventInterface.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGameplayTagEventInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GAMEPLAYTAGSYSTEM_API IGameplayTagEventInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Core")
	bool VoidGameplayTagEvent(FGameplayTag GameplayTag);

#pragma region SingleVariable

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Core")
	bool BoolGameplayTagEvent(FGameplayTag GameplayTag, bool Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Core")
	bool IntGameplayTagEvent(FGameplayTag GameplayTag, int32 Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Core")
	bool FloatGameplayTagEvent(FGameplayTag GameplayTag, float Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Core")
	bool NameGameplayTagEvent(FGameplayTag GameplayTag, FName Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Core")
	bool StringGameplayTagEvent(FGameplayTag GameplayTag, const FString& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Core")
	bool TextGameplayTagEvent(FGameplayTag GameplayTag, const FText& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Core")
	bool VectorGameplayTagEvent(FGameplayTag GameplayTag, FVector Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Core")
	bool RotatorGameplayTagEvent(FGameplayTag GameplayTag, FRotator Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Core")
	bool TransformGameplayTagEvent(FGameplayTag GameplayTag, FTransform Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Object")
	bool ObjectGameplayTagEvent(FGameplayTag GameplayTag, UObject* Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Object|Actor")
	bool ActorGameplayTagEvent(FGameplayTag GameplayTag, AActor* Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Object|Actor")
	bool PawnGameplayTagEvent(FGameplayTag GameplayTag, APawn* Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Object|Actor")
	bool CharacterGameplayTagEvent(FGameplayTag GameplayTag, ACharacter* Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Object|Component")
	bool ActorComponentGameplayTagEvent(FGameplayTag GameplayTag, UActorComponent* Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Variable|Object|Component")
	bool SceneComponentGameplayTagEvent(FGameplayTag GameplayTag, USceneComponent* Value);

#pragma endregion

#pragma region Array

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Core")
	bool BoolArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<bool>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Core")
	bool IntArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<int32>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Core")
	bool FloatArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<float>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Core")
	bool NameArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<FName>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Core")
	bool StringArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<FString>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Core")
	bool TextArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<FText>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Core")
	bool VectorArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<FVector>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Core")
	bool RotatorArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<FRotator>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Core")
	bool TransformArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<FTransform>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Object")
	bool ObjectArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<UObject*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Object|Actor")
	bool ActorArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<AActor*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Object|Actor")
	bool PawnArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<APawn*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Object|Actor")
	bool CharacterArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<ACharacter*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Object|Component")
	bool ActorComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<UActorComponent*>& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Events|Array|Object|Component")
	bool SceneComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const TArray<USceneComponent*>& Value);


#pragma endregion
};
