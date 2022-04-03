// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "Delegates/GameplayTagDynamicDelegates.h"
#include "GameplayTagDelegateInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGameplayTagDelegateInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GAMEPLAYTAGSYSTEM_API IGameplayTagDelegateInterface
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Core")
	bool VoidGameplayTagDelegate(FGameplayTag GameplayTag, const FVoidDelegate& Value);

#pragma region SingleVariable

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Core")
	bool BoolGameplayTagDelegate(FGameplayTag GameplayTag, const FBoolDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Core")
	bool IntGameplayTagDelegate(FGameplayTag GameplayTag, const FIntDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Core")
	bool FloatGameplayTagDelegate(FGameplayTag GameplayTag, const FFloatDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Core")
	bool NameGameplayTagDelegate(FGameplayTag GameplayTag, const FNameDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Core")
	bool StringGameplayTagDelegate(FGameplayTag GameplayTag, const FStringDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Core")
	bool TextGameplayTagDelegate(FGameplayTag GameplayTag, const FTextDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Core")
	bool VectorGameplayTagDelegate(FGameplayTag GameplayTag, const FVectorDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Core")
	bool RotatorGameplayTagDelegate(FGameplayTag GameplayTag, const FRotatorDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Core")
	bool TransformGameplayTagDelegate(FGameplayTag GameplayTag, const FTransformDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Object")
	bool ObjectGameplayTagDelegate(FGameplayTag GameplayTag, const FObjectDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Object|Actor")
	bool ActorGameplayTagDelegate(FGameplayTag GameplayTag, const FActorDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Object|Actor")
	bool PawnGameplayTagDelegate(FGameplayTag GameplayTag, const FPawnDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Object|Actor")
	bool CharacterGameplayTagDelegate(FGameplayTag GameplayTag, const FCharacterDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Object|Component")
	bool ActorComponentGameplayTagDelegate(FGameplayTag GameplayTag, const FActorComponentDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Variable|Object|Component")
	bool SceneComponentGameplayTagDelegate(FGameplayTag GameplayTag, const FSceneComponentDelegate& Value);

#pragma endregion

#pragma region Array

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Core")
	bool BoolArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FBoolArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Core")
	bool IntArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FIntArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Core")
	bool FloatArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FFloatArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Core")
	bool NameArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FNameArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Core")
	bool StringArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FStringArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Core")
	bool TextArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FTextArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Core")
	bool VectorArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FVectorArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Core")
	bool RotatorArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Core")
	bool TransformArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FTransformArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Object")
	bool ObjectArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FObjectArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Object|Actor")
	bool ActorArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FActorArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Object|Actor")
	bool PawnArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FPawnArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Object|Actor")
	bool CharacterArrayGameplayTagDelegate(FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Object|Component")
	bool ActorArrayComponentGameplayTagDelegate(FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gameplay Tag Delegates|Array|Object|Component")
	bool SceneArrayComponentGameplayTagDelegate(FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value);

#pragma endregion
};
