// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/GameplayTagEventSubsystem.h"

/// Void

void UGameplayTagEventSubsystem::CallVoidGameplayTagEvents(const FGameplayTag GameplayTag)
{
	const auto MulticastDelegate = VoidEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast();
	}
}

void UGameplayTagEventSubsystem::BindVoidGameplayTagEvent(const FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindVoidGameplayTagEvent(const FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	if (const auto MulticastDelegate = VoidEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllVoidGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = VoidEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

#pragma region Variable

/// Bool

void UGameplayTagEventSubsystem::CallBoolGameplayTagEvents(const FGameplayTag GameplayTag, const bool Value)
{
	const auto MulticastDelegate = BoolEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindBoolGameplayTagEvent(const FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindBoolGameplayTagEvent(const FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	if (const auto MulticastDelegate = BoolEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllBoolGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = BoolEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Int

void UGameplayTagEventSubsystem::CallIntGameplayTagEvents(const FGameplayTag GameplayTag, const int32 Value)
{
	const auto MulticastDelegate = IntEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindIntGameplayTagEvent(const FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindIntGameplayTagEvent(const FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	if (const auto MulticastDelegate = IntEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllIntGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = IntEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Float

void UGameplayTagEventSubsystem::CallFloatGameplayTagEvents(const FGameplayTag GameplayTag, const float Value)
{
	const auto MulticastDelegate = FloatEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindFloatGameplayTagEvent(const FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindFloatGameplayTagEvent(const FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	if (const auto MulticastDelegate = FloatEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllFloatGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = FloatEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Name

void UGameplayTagEventSubsystem::CallNameGameplayTagEvents(const FGameplayTag GameplayTag, const FName Value)
{
	const auto MulticastDelegate = NameEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindNameGameplayTagEvent(const FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindNameGameplayTagEvent(const FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	if (const auto MulticastDelegate = NameEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllNameGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = NameEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// String

void UGameplayTagEventSubsystem::CallStringGameplayTagEvents(const FGameplayTag GameplayTag, const FString Value)
{
	const auto MulticastDelegate = StringEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindStringGameplayTagEvent(const FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindStringGameplayTagEvent(const FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	if (const auto MulticastDelegate = StringEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllStringGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = StringEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Text

void UGameplayTagEventSubsystem::CallTextGameplayTagEvents(const FGameplayTag GameplayTag, const FText Value)
{
	const auto MulticastDelegate = TextEvents.Find(GameplayTag);

	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindTextGameplayTagEvent(const FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindTextGameplayTagEvent(const FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	if (const auto MulticastDelegate = TextEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllTextGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = TextEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Vector

void UGameplayTagEventSubsystem::CallVectorGameplayTagEvents(const FGameplayTag GameplayTag, const FVector Value)
{
	const auto MulticastDelegate = VectorEvents.Find(GameplayTag);

	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindVectorGameplayTagEvent(const FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindVectorGameplayTagEvent(const FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	if (const auto MulticastDelegate = VectorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllVectorGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = VectorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Rotator

void UGameplayTagEventSubsystem::CallRotatorGameplayTagEvents(const FGameplayTag GameplayTag, const FRotator Value)
{
	const auto MulticastDelegate = RotatorEvents.Find(GameplayTag);

	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindRotatorGameplayTagEvent(const FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindRotatorGameplayTagEvent(const FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	if (const auto MulticastDelegate = RotatorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllRotatorGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = RotatorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Transform

void UGameplayTagEventSubsystem::CallTransformGameplayTagEvents(const FGameplayTag GameplayTag, const FTransform Value)
{
	const auto MulticastDelegate = TransformEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindTransformGameplayTagEvent(const FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindTransformGameplayTagEvent(const FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	if (const auto MulticastDelegate = TransformEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllTransformGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = TransformEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Object

void UGameplayTagEventSubsystem::CallObjectGameplayTagEvents(const FGameplayTag GameplayTag, UObject* Value)
{
	const auto MulticastDelegate = ObjectEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindObjectGameplayTagEvent(const FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindObjectGameplayTagEvent(const FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	if (const auto MulticastDelegate = ObjectEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllObjectGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ObjectEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Actor

void UGameplayTagEventSubsystem::CallActorGameplayTagEvents(const FGameplayTag GameplayTag, AActor* Value)
{
	const auto MulticastDelegate = ActorEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindActorGameplayTagEvent(const FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindActorGameplayTagEvent(const FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	if (const auto MulticastDelegate = ActorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllActorGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ActorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Pawn

void UGameplayTagEventSubsystem::CallPawnGameplayTagEvents(const FGameplayTag GameplayTag, APawn* Value)
{
	const auto MulticastDelegate = PawnEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindPawnGameplayTagEvent(const FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindPawnGameplayTagEvent(const FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	if (const auto MulticastDelegate = PawnEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllPawnGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = PawnEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Character

void UGameplayTagEventSubsystem::CallCharacterGameplayTagEvents(const FGameplayTag GameplayTag, ACharacter* Value)
{
	const auto MulticastDelegate = CharacterEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindCharacterGameplayTagEvent(const FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindCharacterGameplayTagEvent(const FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	if (const auto MulticastDelegate = CharacterEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllCharacterGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = CharacterEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// ActorComponent

void UGameplayTagEventSubsystem::CallActorComponentGameplayTagEvents(const FGameplayTag GameplayTag, UActorComponent* Value)
{
	const auto MulticastDelegate = ActorComponentEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindActorComponentGameplayTagEvent(const FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindActorComponentGameplayTagEvent(const FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	if (const auto MulticastDelegate = ActorComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllActorComponentGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ActorComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// SceneComponent

void UGameplayTagEventSubsystem::CallSceneComponentGameplayTagEvents(const FGameplayTag GameplayTag, USceneComponent* Value)
{
	const auto MulticastDelegate = SceneComponentEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindSceneComponentGameplayTagEvent(const FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindSceneComponentGameplayTagEvent(const FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	if (const auto MulticastDelegate = SceneComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllSceneComponentGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = SceneComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

#pragma endregion

#pragma region Array

/// Bool

void UGameplayTagEventSubsystem::CallBoolArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<bool> Value)
{
	const auto MulticastDelegate = BoolArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindBoolArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindBoolArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	if (const auto MulticastDelegate = BoolArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllBoolArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = BoolArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Int

void UGameplayTagEventSubsystem::CallIntArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<int32> Value)
{
	const auto MulticastDelegate = IntArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindIntArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindIntArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	if (const auto MulticastDelegate = IntArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllIntArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = IntArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Float

void UGameplayTagEventSubsystem::CallFloatArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<float> Value)
{
	const auto MulticastDelegate = FloatArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindFloatArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindFloatArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	if (const auto MulticastDelegate = FloatArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllFloatArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = FloatArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Name

void UGameplayTagEventSubsystem::CallNameArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FName> Value)
{
	const auto MulticastDelegate = NameArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindNameArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindNameArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	if (const auto MulticastDelegate = NameArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllNameArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = NameArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// String

void UGameplayTagEventSubsystem::CallStringArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FString> Value)
{
	const auto MulticastDelegate = StringArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindStringArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindStringArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	if (const auto MulticastDelegate = StringArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllStringArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = StringArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Text

void UGameplayTagEventSubsystem::CallTextArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FText> Value)
{
	const auto MulticastDelegate = TextArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindTextArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindTextArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	if (const auto MulticastDelegate = TextArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllTextArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = TextArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Vector

void UGameplayTagEventSubsystem::CallVectorArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FVector> Value)
{
	const auto MulticastDelegate = VectorArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindVectorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindVectorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	if (const auto MulticastDelegate = VectorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllVectorArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = VectorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Rotator

void UGameplayTagEventSubsystem::CallRotatorArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FRotator> Value)
{
	const auto MulticastDelegate = RotatorArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindRotatorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindRotatorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	if (const auto MulticastDelegate = RotatorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllRotatorArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = RotatorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Transform

void UGameplayTagEventSubsystem::CallTransformArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FTransform> Value)
{
	const auto MulticastDelegate = TransformArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindTransformArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindTransformArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	if (const auto MulticastDelegate = TransformArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllTransformArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = TransformArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Object

void UGameplayTagEventSubsystem::CallObjectArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<UObject*> Value)
{
	const auto MulticastDelegate = ObjectArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindObjectArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindObjectArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	if (const auto MulticastDelegate = ObjectArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllObjectArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ObjectArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Actor

void UGameplayTagEventSubsystem::CallActorArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<AActor*> Value)
{
	const auto MulticastDelegate = ActorArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindActorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindActorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	if (const auto MulticastDelegate = ActorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllActorArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ActorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Pawn

void UGameplayTagEventSubsystem::CallPawnArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<APawn*> Value)
{
	const auto MulticastDelegate = PawnArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindPawnArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindPawnArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	if (const auto MulticastDelegate = PawnArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllPawnArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = PawnArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Character

void UGameplayTagEventSubsystem::CallCharacterArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<ACharacter*> Value)
{
	const auto MulticastDelegate = CharacterArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindCharacterArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindCharacterArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	if (const auto MulticastDelegate = CharacterArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllCharacterArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = CharacterArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// ActorComponent

void UGameplayTagEventSubsystem::CallActorComponentArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<UActorComponent*> Value)
{
	const auto MulticastDelegate = ActorComponentArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindActorComponentArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindActorComponentArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	if (const auto MulticastDelegate = ActorComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllActorComponentArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ActorComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// SceneComponent

void UGameplayTagEventSubsystem::CallSceneComponentArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<USceneComponent*> Value)
{
	const auto MulticastDelegate = SceneComponentArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventSubsystem::BindSceneComponentArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventSubsystem::UnbindSceneComponentArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	if (const auto MulticastDelegate = SceneComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventSubsystem::UnbindAllSceneComponentArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = SceneComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}


#pragma endregion

