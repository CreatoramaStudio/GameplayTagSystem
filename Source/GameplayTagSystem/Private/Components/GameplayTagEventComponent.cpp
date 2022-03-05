// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/GameplayTagEventComponent.h"

/// Void

void UGameplayTagEventComponent::CallVoidGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast();
	}
}

void UGameplayTagEventComponent::BindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllVoidGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

#pragma region Variable

/// Bool

void UGameplayTagEventComponent::CallBoolGameplayTagEvents(FGameplayTag GameplayTag, bool Value)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindBoolGameplayTagEvent(FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinBoolGameplayTagEvent(FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllBoolGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Int

void UGameplayTagEventComponent::CallIntGameplayTagEvents(FGameplayTag GameplayTag, int32 Value)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindIntGameplayTagEvent(FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinIntGameplayTagEvent(FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllIntGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Float

void UGameplayTagEventComponent::CallFloatGameplayTagEvents(FGameplayTag GameplayTag, float Value)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindFloatGameplayTagEvent(FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinFloatGameplayTagEvent(FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllFloatGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Name

void UGameplayTagEventComponent::CallNameGameplayTagEvents(FGameplayTag GameplayTag, FName Value)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindNameGameplayTagEvent(FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinNameGameplayTagEvent(FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllNameGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// String

void UGameplayTagEventComponent::CallStringGameplayTagEvents(FGameplayTag GameplayTag, FString Value)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindStringGameplayTagEvent(FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinStringGameplayTagEvent(FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllStringGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Text

void UGameplayTagEventComponent::CallTextGameplayTagEvents(FGameplayTag GameplayTag, FText Value)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTextGameplayTagEvent(FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinTextGameplayTagEvent(FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllTextGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Vector

void UGameplayTagEventComponent::CallVectorGameplayTagEvents(FGameplayTag GameplayTag, FVector Value)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindVectorGameplayTagEvent(FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinVectorGameplayTagEvent(FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllVectorGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Rotator

void UGameplayTagEventComponent::CallRotatorGameplayTagEvents(FGameplayTag GameplayTag, FRotator Value)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindRotatorGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinRotatorGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllRotatorGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Transform

void UGameplayTagEventComponent::CallTransformGameplayTagEvents(FGameplayTag GameplayTag, FTransform Value)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTransformGameplayTagEvent(FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinTransformGameplayTagEvent(FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllTransformGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Object

void UGameplayTagEventComponent::CallObjectGameplayTagEvents(FGameplayTag GameplayTag, UObject* Value)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindObjectGameplayTagEvent(FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinObjectGameplayTagEvent(FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllObjectGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Actor

void UGameplayTagEventComponent::CallActorGameplayTagEvents(FGameplayTag GameplayTag, AActor* Value)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorGameplayTagEvent(FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinActorGameplayTagEvent(FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllActorGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Pawn

void UGameplayTagEventComponent::CallPawnGameplayTagEvents(FGameplayTag GameplayTag, APawn* Value)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindPawnGameplayTagEvent(FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinPawnGameplayTagEvent(FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllPawnGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Character

void UGameplayTagEventComponent::CallCharacterGameplayTagEvents(FGameplayTag GameplayTag, ACharacter* Value)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindCharacterGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinCharacterGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllCharacterGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// ActorComponent

void UGameplayTagEventComponent::CallActorComponentGameplayTagEvents(FGameplayTag GameplayTag, UActorComponent* Value)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorComponentGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinActorComponentGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllActorComponentGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// SceneComponent

void UGameplayTagEventComponent::CallSceneComponentGameplayTagEvents(FGameplayTag GameplayTag, USceneComponent* Value)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindSceneComponentGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinSceneComponentGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllSceneComponentGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

#pragma endregion

#pragma region Array

/// Bool

void UGameplayTagEventComponent::CallBoolArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<bool> Value)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindBoolArrayGameplayTagEvent(FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinBoolArrayGameplayTagEvent(FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllBoolArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Int

void UGameplayTagEventComponent::CallIntArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<int32> Value)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindIntArrayGameplayTagEvent(FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinIntArrayGameplayTagEvent(FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllIntArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Float

void UGameplayTagEventComponent::CallFloatArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<float> Value)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindFloatArrayGameplayTagEvent(FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinFloatArrayGameplayTagEvent(FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllFloatArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Name

void UGameplayTagEventComponent::CallNameArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FName> Value)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindNameArrayGameplayTagEvent(FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinNameArrayGameplayTagEvent(FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllNameArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// String

void UGameplayTagEventComponent::CallStringArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FString> Value)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindStringArrayGameplayTagEvent(FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinStringArrayGameplayTagEvent(FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllStringArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Text

void UGameplayTagEventComponent::CallTextArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FText> Value)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTextArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinTextArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllTextArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Vector

void UGameplayTagEventComponent::CallVectorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FVector> Value)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindVectorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinVectorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllVectorArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Rotator

void UGameplayTagEventComponent::CallRotatorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FRotator> Value)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindRotatorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinRotatorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllRotatorArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Transform

void UGameplayTagEventComponent::CallTransformArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FTransform> Value)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTransformArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinTransformArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllTransformArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Object

void UGameplayTagEventComponent::CallObjectArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<UObject*> Value)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindObjectArrayGameplayTagEvent(FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinObjectArrayGameplayTagEvent(FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllObjectArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Actor

void UGameplayTagEventComponent::CallActorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<AActor*> Value)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinActorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllActorArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Pawn

void UGameplayTagEventComponent::CallPawnArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<APawn*> Value)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindPawnArrayGameplayTagEvent(FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinPawnArrayGameplayTagEvent(FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllPawnArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Character

void UGameplayTagEventComponent::CallCharacterArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<ACharacter*> Value)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindCharacterArrayGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinCharacterArrayGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllCharacterArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// ActorComponent

void UGameplayTagEventComponent::CallActorComponentArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<UActorComponent*> Value)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinActorComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllActorComponentArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// SceneComponent

void UGameplayTagEventComponent::CallSceneComponentArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<USceneComponent*> Value)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindSceneComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinSceneComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventComponent::UnbindAllSceneComponentArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}


#pragma endregion
