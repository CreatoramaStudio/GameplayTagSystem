// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "Delegates/GameplayTagDynamicDelegates.h"
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

	UPROPERTY()
		TMap<FGameplayTag, FVoidMulticastDelegate> VoidEvents;

#pragma region Variable

	UPROPERTY()
		TMap<FGameplayTag, FBoolMulticastDelegate> BoolEvents;

	UPROPERTY()
		TMap<FGameplayTag, FIntMulticastDelegate> IntEvents;

	UPROPERTY()
		TMap<FGameplayTag, FFloatMulticastDelegate> FloatEvents;

	UPROPERTY()
		TMap<FGameplayTag, FNameMulticastDelegate> NameEvents;

	UPROPERTY()
		TMap<FGameplayTag, FStringMulticastDelegate> StringEvents;

	UPROPERTY()
		TMap<FGameplayTag, FTextMulticastDelegate> TextEvents;

	UPROPERTY()
		TMap<FGameplayTag, FVectorMulticastDelegate> VectorEvents;

	UPROPERTY()
		TMap<FGameplayTag, FRotatorMulticastDelegate> RotatorEvents;

	UPROPERTY()
		TMap<FGameplayTag, FTransformMulticastDelegate> TransformEvents;

	UPROPERTY()
		TMap<FGameplayTag, FObjectMulticastDelegate> ObjectEvents;

	UPROPERTY()
		TMap<FGameplayTag, FActorMulticastDelegate> ActorEvents;

	UPROPERTY()
		TMap<FGameplayTag, FPawnMulticastDelegate> PawnEvents;

	UPROPERTY()
		TMap<FGameplayTag, FCharacterMulticastDelegate> CharacterEvents;

	UPROPERTY()
		TMap<FGameplayTag, FActorComponentMulticastDelegate> ActorComponentEvents;

	UPROPERTY()
		TMap<FGameplayTag, FSceneComponentMulticastDelegate> SceneComponentEvents;

#pragma endregion

#pragma region Array

	UPROPERTY()
		TMap<FGameplayTag, FBoolArrayMulticastDelegate> BoolArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FIntArrayMulticastDelegate> IntArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FFloatArrayMulticastDelegate> FloatArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FNameArrayMulticastDelegate> NameArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FStringArrayMulticastDelegate> StringArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FTextArrayMulticastDelegate> TextArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FVectorArrayMulticastDelegate> VectorArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FRotatorArrayMulticastDelegate> RotatorArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FTransformArrayMulticastDelegate> TransformArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FObjectArrayMulticastDelegate> ObjectArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FActorArrayMulticastDelegate> ActorArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FPawnArrayMulticastDelegate> PawnArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FCharacterArrayMulticastDelegate> CharacterArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FActorComponentArrayMulticastDelegate> ActorComponentArrayEvents;

	UPROPERTY()
		TMap<FGameplayTag, FSceneComponentArrayMulticastDelegate> SceneComponentArrayEvents;

#pragma endregion

private:

public:

	/// Void

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Core")
		void CallVoidGameplayTagEvents(FGameplayTag GameplayTag);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Core")
		void BindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Core")
		void UnbindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Core")
		void UnbindAllVoidGameplayTagEvents(FGameplayTag GameplayTag);

#pragma region Variable

	/// Bool

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void CallBoolGameplayTagEvents(FGameplayTag GameplayTag, bool Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void BindBoolGameplayTagEvent(FGameplayTag GameplayTag, const FBoolDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbinBoolGameplayTagEvent(FGameplayTag GameplayTag, const FBoolDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbindAllBoolGameplayTagEvents(FGameplayTag GameplayTag);

	/// Int

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void CallIntGameplayTagEvents(FGameplayTag GameplayTag, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void BindIntGameplayTagEvent(FGameplayTag GameplayTag, const FIntDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbinIntGameplayTagEvent(FGameplayTag GameplayTag, const FIntDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbindAllIntGameplayTagEvents(FGameplayTag GameplayTag);

	/// Float

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void CallFloatGameplayTagEvents(FGameplayTag GameplayTag, float Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void BindFloatGameplayTagEvent(FGameplayTag GameplayTag, const FFloatDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbinFloatGameplayTagEvent(FGameplayTag GameplayTag, const FFloatDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbindAllFloatGameplayTagEvents(FGameplayTag GameplayTag);

	/// Name

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void CallNameGameplayTagEvents(FGameplayTag GameplayTag, FName Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void BindNameGameplayTagEvent(FGameplayTag GameplayTag, const FNameDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbinNameGameplayTagEvent(FGameplayTag GameplayTag, const FNameDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbindAllNameGameplayTagEvents(FGameplayTag GameplayTag);

	/// String

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void CallStringGameplayTagEvents(FGameplayTag GameplayTag, FString Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void BindStringGameplayTagEvent(FGameplayTag GameplayTag, const FStringDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbinStringGameplayTagEvent(FGameplayTag GameplayTag, const FStringDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbindAllStringGameplayTagEvents(FGameplayTag GameplayTag);

	/// Text

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void CallTextGameplayTagEvents(FGameplayTag GameplayTag, FText Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void BindTextGameplayTagEvent(FGameplayTag GameplayTag, const FTextDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbinTextGameplayTagEvent(FGameplayTag GameplayTag, const FTextDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbindAllTextGameplayTagEvents(FGameplayTag GameplayTag);

	/// Vector

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void CallVectorGameplayTagEvents(FGameplayTag GameplayTag, FVector Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void BindVectorGameplayTagEvent(FGameplayTag GameplayTag, const FVectorDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbinVectorGameplayTagEvent(FGameplayTag GameplayTag, const FVectorDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbindAllVectorGameplayTagEvents(FGameplayTag GameplayTag);

	/// Rotator

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void CallRotatorGameplayTagEvents(FGameplayTag GameplayTag, FRotator Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void BindRotatorGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbinRotatorGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbindAllRotatorGameplayTagEvents(FGameplayTag GameplayTag);

	/// Transform

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void CallTransformGameplayTagEvents(FGameplayTag GameplayTag, FTransform Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void BindTransformGameplayTagEvent(FGameplayTag GameplayTag, const FTransformDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbinTransformGameplayTagEvent(FGameplayTag GameplayTag, const FTransformDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Core")
		void UnbindAllTransformGameplayTagEvents(FGameplayTag GameplayTag);

	/// Object

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object")
		void CallObjectGameplayTagEvents(FGameplayTag GameplayTag, UObject* Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object")
		void BindObjectGameplayTagEvent(FGameplayTag GameplayTag, const FObjectDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object")
		void UnbinObjectGameplayTagEvent(FGameplayTag GameplayTag, const FObjectDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object")
		void UnbindAllObjectGameplayTagEvents(FGameplayTag GameplayTag);

	/// Actor

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void CallActorGameplayTagEvents(FGameplayTag GameplayTag, AActor* Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void BindActorGameplayTagEvent(FGameplayTag GameplayTag, const FActorDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void UnbinActorGameplayTagEvent(FGameplayTag GameplayTag, const FActorDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void UnbindAllActorGameplayTagEvents(FGameplayTag GameplayTag);

	/// Pawn

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void CallPawnGameplayTagEvents(FGameplayTag GameplayTag, APawn* Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void BindPawnGameplayTagEvent(FGameplayTag GameplayTag, const FPawnDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void UnbinPawnGameplayTagEvent(FGameplayTag GameplayTag, const FPawnDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void UnbindAllPawnGameplayTagEvents(FGameplayTag GameplayTag);

	/// Character

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void CallCharacterGameplayTagEvents(FGameplayTag GameplayTag, ACharacter* Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void BindCharacterGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void UnbinCharacterGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Actor")
		void UnbindAllCharacterGameplayTagEvents(FGameplayTag GameplayTag);

	/// ActorComponent

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Component")
		void CallActorComponentGameplayTagEvents(FGameplayTag GameplayTag, UActorComponent* Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Component")
		void BindActorComponentGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Component")
		void UnbinActorComponentGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Component")
		void UnbindAllActorComponentGameplayTagEvents(FGameplayTag GameplayTag);

	/// SceneComponent

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Component")
		void CallSceneComponentGameplayTagEvents(FGameplayTag GameplayTag, USceneComponent* Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Component")
		void BindSceneComponentGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Component")
		void UnbinSceneComponentGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Variable|Object|Component")
		void UnbindAllSceneComponentGameplayTagEvents(FGameplayTag GameplayTag);

#pragma endregion

#pragma region Array

	/// Bool

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void CallBoolArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<bool> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void BindBoolArrayGameplayTagEvent(FGameplayTag GameplayTag, const FBoolArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbinBoolArrayGameplayTagEvent(FGameplayTag GameplayTag, const FBoolArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbindAllBoolArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Int

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void CallIntArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<int32> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void BindIntArrayGameplayTagEvent(FGameplayTag GameplayTag, const FIntArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbinIntArrayGameplayTagEvent(FGameplayTag GameplayTag, const FIntArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbindAllIntArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Float

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void CallFloatArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<float> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void BindFloatArrayGameplayTagEvent(FGameplayTag GameplayTag, const FFloatArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbinFloatArrayGameplayTagEvent(FGameplayTag GameplayTag, const FFloatArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbindAllFloatArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Name

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void CallNameArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FName> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void BindNameArrayGameplayTagEvent(FGameplayTag GameplayTag, const FNameArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbinNameArrayGameplayTagEvent(FGameplayTag GameplayTag, const FNameArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbindAllNameArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// String

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void CallStringArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FString> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void BindStringArrayGameplayTagEvent(FGameplayTag GameplayTag, const FStringArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbinStringArrayGameplayTagEvent(FGameplayTag GameplayTag, const FStringArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbindAllStringArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Text

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void CallTextArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FText> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void BindTextArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTextArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbinTextArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTextArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbindAllTextArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Vector

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void CallVectorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FVector> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void BindVectorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FVectorArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbinVectorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FVectorArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbindAllVectorArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Rotator

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void CallRotatorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FRotator> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void BindRotatorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbinRotatorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbindAllRotatorArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Transform

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void CallTransformArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FTransform> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void BindTransformArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTransformArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbinTransformArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTransformArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Core")
		void UnbindAllTransformArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Object

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object")
		void CallObjectArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<UObject*> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object")
		void BindObjectArrayGameplayTagEvent(FGameplayTag GameplayTag, const FObjectArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object")
		void UnbinObjectArrayGameplayTagEvent(FGameplayTag GameplayTag, const FObjectArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object")
		void UnbindAllObjectArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Actor

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void CallActorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<AActor*> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void BindActorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void UnbinActorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void UnbindAllActorArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Pawn

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void CallPawnArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<APawn*> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void BindPawnArrayGameplayTagEvent(FGameplayTag GameplayTag, const FPawnArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void UnbinPawnArrayGameplayTagEvent(FGameplayTag GameplayTag, const FPawnArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void UnbindAllPawnArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// Character

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void CallCharacterArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<ACharacter*> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void BindCharacterArrayGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void UnbinCharacterArrayGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Actor")
		void UnbindAllCharacterArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// ActorComponent

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Component")
		void CallActorComponentArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<UActorComponent*> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Component")
		void BindActorComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Component")
		void UnbinActorComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Component")
		void UnbindAllActorComponentArrayGameplayTagEvents(FGameplayTag GameplayTag);

	/// SceneComponent

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Component")
		void CallSceneComponentArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<USceneComponent*> Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Component")
		void BindSceneComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Component")
		void UnbinSceneComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay Tag Events Subsystem|Array|Object|Component")
		void UnbindAllSceneComponentArrayGameplayTagEvents(FGameplayTag GameplayTag);

#pragma endregion

protected:

private:

};
