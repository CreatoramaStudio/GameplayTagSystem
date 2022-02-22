// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/GameplayTagEventSubsystem.h"

/// Void

void UGameplayTagEventSubsystem::CallVoidGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast();
	}
}

void UGameplayTagEventSubsystem::BindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllVoidGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

#pragma region Variable

/// Bool

void UGameplayTagEventSubsystem::CallBoolGameplayTagEvents(FGameplayTag GameplayTag, bool Value)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindBoolGameplayTagEvent(FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinBoolGameplayTagEvent(FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllBoolGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Int

void UGameplayTagEventSubsystem::CallIntGameplayTagEvents(FGameplayTag GameplayTag, int32 Value)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindIntGameplayTagEvent(FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinIntGameplayTagEvent(FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllIntGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Float

void UGameplayTagEventSubsystem::CallFloatGameplayTagEvents(FGameplayTag GameplayTag, float Value)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindFloatGameplayTagEvent(FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinFloatGameplayTagEvent(FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllFloatGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Name

void UGameplayTagEventSubsystem::CallNameGameplayTagEvents(FGameplayTag GameplayTag, FName Value)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindNameGameplayTagEvent(FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinNameGameplayTagEvent(FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllNameGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// String

void UGameplayTagEventSubsystem::CallStringGameplayTagEvents(FGameplayTag GameplayTag, FString Value)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindStringGameplayTagEvent(FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinStringGameplayTagEvent(FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllStringGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Text

void UGameplayTagEventSubsystem::CallTextGameplayTagEvents(FGameplayTag GameplayTag, FText Value)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindTextGameplayTagEvent(FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinTextGameplayTagEvent(FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllTextGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Vector

void UGameplayTagEventSubsystem::CallVectorGameplayTagEvents(FGameplayTag GameplayTag, FVector Value)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindVectorGameplayTagEvent(FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinVectorGameplayTagEvent(FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllVectorGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Rotator

void UGameplayTagEventSubsystem::CallRotatorGameplayTagEvents(FGameplayTag GameplayTag, FRotator Value)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindRotatorGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinRotatorGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllRotatorGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Transform

void UGameplayTagEventSubsystem::CallTransformGameplayTagEvents(FGameplayTag GameplayTag, FTransform Value)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindTransformGameplayTagEvent(FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinTransformGameplayTagEvent(FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllTransformGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Object

void UGameplayTagEventSubsystem::CallObjectGameplayTagEvents(FGameplayTag GameplayTag, UObject* Value)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindObjectGameplayTagEvent(FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinObjectGameplayTagEvent(FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllObjectGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Actor

void UGameplayTagEventSubsystem::CallActorGameplayTagEvents(FGameplayTag GameplayTag, AActor* Value)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindActorGameplayTagEvent(FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinActorGameplayTagEvent(FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllActorGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Pawn

void UGameplayTagEventSubsystem::CallPawnGameplayTagEvents(FGameplayTag GameplayTag, APawn* Value)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindPawnGameplayTagEvent(FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinPawnGameplayTagEvent(FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllPawnGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Character

void UGameplayTagEventSubsystem::CallCharacterGameplayTagEvents(FGameplayTag GameplayTag, ACharacter* Value)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindCharacterGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinCharacterGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllCharacterGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// ActorComponent

void UGameplayTagEventSubsystem::CallActorComponentGameplayTagEvents(FGameplayTag GameplayTag, UActorComponent* Value)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindActorComponentGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinActorComponentGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllActorComponentGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// SceneComponent

void UGameplayTagEventSubsystem::CallSceneComponentGameplayTagEvents(FGameplayTag GameplayTag, USceneComponent* Value)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindSceneComponentGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinSceneComponentGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllSceneComponentGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

#pragma endregion

#pragma region Array

/// Bool

void UGameplayTagEventSubsystem::CallBoolArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<bool> Value)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindBoolArrayGameplayTagEvent(FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinBoolArrayGameplayTagEvent(FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllBoolArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Int

void UGameplayTagEventSubsystem::CallIntArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<int32> Value)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindIntArrayGameplayTagEvent(FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinIntArrayGameplayTagEvent(FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllIntArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Float

void UGameplayTagEventSubsystem::CallFloatArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<float> Value)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindFloatArrayGameplayTagEvent(FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinFloatArrayGameplayTagEvent(FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllFloatArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Name

void UGameplayTagEventSubsystem::CallNameArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FName> Value)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindNameArrayGameplayTagEvent(FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinNameArrayGameplayTagEvent(FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllNameArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// String

void UGameplayTagEventSubsystem::CallStringArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FString> Value)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindStringArrayGameplayTagEvent(FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinStringArrayGameplayTagEvent(FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllStringArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Text

void UGameplayTagEventSubsystem::CallTextArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FText> Value)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindTextArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinTextArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllTextArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Vector

void UGameplayTagEventSubsystem::CallVectorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FVector> Value)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindVectorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinVectorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllVectorArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Rotator

void UGameplayTagEventSubsystem::CallRotatorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FRotator> Value)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindRotatorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinRotatorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllRotatorArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Transform

void UGameplayTagEventSubsystem::CallTransformArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FTransform> Value)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindTransformArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinTransformArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllTransformArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Object

void UGameplayTagEventSubsystem::CallObjectArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<UObject*> Value)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindObjectArrayGameplayTagEvent(FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinObjectArrayGameplayTagEvent(FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllObjectArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Actor

void UGameplayTagEventSubsystem::CallActorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<AActor*> Value)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindActorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinActorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllActorArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Pawn

void UGameplayTagEventSubsystem::CallPawnArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<APawn*> Value)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindPawnArrayGameplayTagEvent(FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinPawnArrayGameplayTagEvent(FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllPawnArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// Character

void UGameplayTagEventSubsystem::CallCharacterArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<ACharacter*> Value)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindCharacterArrayGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinCharacterArrayGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllCharacterArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// ActorComponent

void UGameplayTagEventSubsystem::CallActorComponentArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<UActorComponent*> Value)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindActorComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinActorComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllActorComponentArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}

/// SceneComponent

void UGameplayTagEventSubsystem::CallSceneComponentArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<USceneComponent*> Value)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	if (MulticastDelegate.IsBound())
	{
		MulticastDelegate.Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindSceneComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbinSceneComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Remove(Value);
}

void UGameplayTagEventSubsystem::UnbindAllSceneComponentArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Clear();
}


#pragma endregion
