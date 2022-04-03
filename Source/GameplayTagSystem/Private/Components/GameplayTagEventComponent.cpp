// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/GameplayTagEventComponent.h"

/// Void

void UGameplayTagEventComponent::CallVoidGameplayTagEvents(const FGameplayTag GameplayTag)
{
	const auto MulticastDelegate = VoidEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast();
	}
}

void UGameplayTagEventComponent::BindVoidGameplayTagEvent(const FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindVoidGameplayTagEvent(const FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	if (const auto MulticastDelegate = VoidEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllVoidGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = VoidEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

#pragma region Variable

/// Bool

void UGameplayTagEventComponent::CallBoolGameplayTagEvents(const FGameplayTag GameplayTag, const bool Value)
{
	const auto MulticastDelegate = BoolEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindBoolGameplayTagEvent(const FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindBoolGameplayTagEvent(const FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	if (const auto MulticastDelegate = BoolEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllBoolGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = BoolEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Int

void UGameplayTagEventComponent::CallIntGameplayTagEvents(const FGameplayTag GameplayTag, const int32 Value)
{
	const auto MulticastDelegate = IntEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindIntGameplayTagEvent(const FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindIntGameplayTagEvent(const FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	if (const auto MulticastDelegate = IntEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllIntGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = IntEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Float

void UGameplayTagEventComponent::CallFloatGameplayTagEvents(const FGameplayTag GameplayTag, const float Value)
{
	const auto MulticastDelegate = FloatEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindFloatGameplayTagEvent(const FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindFloatGameplayTagEvent(const FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	if (const auto MulticastDelegate = FloatEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllFloatGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = FloatEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Name

void UGameplayTagEventComponent::CallNameGameplayTagEvents(const FGameplayTag GameplayTag, const FName Value)
{
	const auto MulticastDelegate = NameEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindNameGameplayTagEvent(const FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindNameGameplayTagEvent(const FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	if (const auto MulticastDelegate = NameEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllNameGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = NameEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// String

void UGameplayTagEventComponent::CallStringGameplayTagEvents(const FGameplayTag GameplayTag, const FString Value)
{
	const auto MulticastDelegate = StringEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindStringGameplayTagEvent(const FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindStringGameplayTagEvent(const FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	if (const auto MulticastDelegate = StringEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllStringGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = StringEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Text

void UGameplayTagEventComponent::CallTextGameplayTagEvents(const FGameplayTag GameplayTag, const FText Value)
{
	const auto MulticastDelegate = TextEvents.Find(GameplayTag);

	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTextGameplayTagEvent(const FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindTextGameplayTagEvent(const FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	if (const auto MulticastDelegate = TextEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllTextGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = TextEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Vector

void UGameplayTagEventComponent::CallVectorGameplayTagEvents(const FGameplayTag GameplayTag, const FVector Value)
{
	const auto MulticastDelegate = VectorEvents.Find(GameplayTag);

	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindVectorGameplayTagEvent(const FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindVectorGameplayTagEvent(const FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	if (const auto MulticastDelegate = VectorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllVectorGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = VectorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Rotator

void UGameplayTagEventComponent::CallRotatorGameplayTagEvents(const FGameplayTag GameplayTag, const FRotator Value)
{
	const auto MulticastDelegate = RotatorEvents.Find(GameplayTag);

	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindRotatorGameplayTagEvent(const FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindRotatorGameplayTagEvent(const FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	if (const auto MulticastDelegate = RotatorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllRotatorGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = RotatorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Transform

void UGameplayTagEventComponent::CallTransformGameplayTagEvents(const FGameplayTag GameplayTag, const FTransform Value)
{
	const auto MulticastDelegate = TransformEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTransformGameplayTagEvent(const FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindTransformGameplayTagEvent(const FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	if (const auto MulticastDelegate = TransformEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllTransformGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = TransformEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Object

void UGameplayTagEventComponent::CallObjectGameplayTagEvents(const FGameplayTag GameplayTag, UObject* Value)
{
	const auto MulticastDelegate = ObjectEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindObjectGameplayTagEvent(const FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindObjectGameplayTagEvent(const FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	if (const auto MulticastDelegate = ObjectEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllObjectGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ObjectEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Actor

void UGameplayTagEventComponent::CallActorGameplayTagEvents(const FGameplayTag GameplayTag, AActor* Value)
{
	const auto MulticastDelegate = ActorEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorGameplayTagEvent(const FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindActorGameplayTagEvent(const FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	if (const auto MulticastDelegate = ActorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllActorGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ActorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Pawn

void UGameplayTagEventComponent::CallPawnGameplayTagEvents(const FGameplayTag GameplayTag, APawn* Value)
{
	const auto MulticastDelegate = PawnEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindPawnGameplayTagEvent(const FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindPawnGameplayTagEvent(const FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	if (const auto MulticastDelegate = PawnEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllPawnGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = PawnEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Character

void UGameplayTagEventComponent::CallCharacterGameplayTagEvents(const FGameplayTag GameplayTag, ACharacter* Value)
{
	const auto MulticastDelegate = CharacterEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindCharacterGameplayTagEvent(const FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindCharacterGameplayTagEvent(const FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	if (const auto MulticastDelegate = CharacterEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllCharacterGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = CharacterEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// ActorComponent

void UGameplayTagEventComponent::CallActorComponentGameplayTagEvents(const FGameplayTag GameplayTag, UActorComponent* Value)
{
	const auto MulticastDelegate = ActorComponentEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorComponentGameplayTagEvent(const FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindActorComponentGameplayTagEvent(const FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	if (const auto MulticastDelegate = ActorComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllActorComponentGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ActorComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// SceneComponent

void UGameplayTagEventComponent::CallSceneComponentGameplayTagEvents(const FGameplayTag GameplayTag, USceneComponent* Value)
{
	const auto MulticastDelegate = SceneComponentEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindSceneComponentGameplayTagEvent(const FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindSceneComponentGameplayTagEvent(const FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	if (const auto MulticastDelegate = SceneComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllSceneComponentGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = SceneComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

#pragma endregion

#pragma region Array

/// Bool

void UGameplayTagEventComponent::CallBoolArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<bool> Value)
{
	const auto MulticastDelegate = BoolArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindBoolArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindBoolArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	if (const auto MulticastDelegate = BoolArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllBoolArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = BoolArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Int

void UGameplayTagEventComponent::CallIntArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<int32> Value)
{
	const auto MulticastDelegate = IntArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindIntArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindIntArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	if (const auto MulticastDelegate = IntArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllIntArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = IntArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Float

void UGameplayTagEventComponent::CallFloatArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<float> Value)
{
	const auto MulticastDelegate = FloatArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindFloatArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindFloatArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	if (const auto MulticastDelegate = FloatArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllFloatArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = FloatArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Name

void UGameplayTagEventComponent::CallNameArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FName> Value)
{
	const auto MulticastDelegate = NameArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindNameArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindNameArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	if (const auto MulticastDelegate = NameArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllNameArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = NameArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// String

void UGameplayTagEventComponent::CallStringArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FString> Value)
{
	const auto MulticastDelegate = StringArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindStringArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindStringArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	if (const auto MulticastDelegate = StringArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllStringArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = StringArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Text

void UGameplayTagEventComponent::CallTextArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FText> Value)
{
	const auto MulticastDelegate = TextArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTextArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindTextArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	if (const auto MulticastDelegate = TextArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllTextArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = TextArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Vector

void UGameplayTagEventComponent::CallVectorArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FVector> Value)
{
	const auto MulticastDelegate = VectorArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindVectorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindVectorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	if (const auto MulticastDelegate = VectorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllVectorArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = VectorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Rotator

void UGameplayTagEventComponent::CallRotatorArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FRotator> Value)
{
	const auto MulticastDelegate = RotatorArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindRotatorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindRotatorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	if (const auto MulticastDelegate = RotatorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllRotatorArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = RotatorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Transform

void UGameplayTagEventComponent::CallTransformArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<FTransform> Value)
{
	const auto MulticastDelegate = TransformArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTransformArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindTransformArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	if (const auto MulticastDelegate = TransformArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllTransformArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = TransformArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Object

void UGameplayTagEventComponent::CallObjectArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<UObject*> Value)
{
	const auto MulticastDelegate = ObjectArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindObjectArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindObjectArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	if (const auto MulticastDelegate = ObjectArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllObjectArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ObjectArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Actor

void UGameplayTagEventComponent::CallActorArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<AActor*> Value)
{
	const auto MulticastDelegate = ActorArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindActorArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	if (const auto MulticastDelegate = ActorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllActorArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ActorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Pawn

void UGameplayTagEventComponent::CallPawnArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<APawn*> Value)
{
	const auto MulticastDelegate = PawnArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindPawnArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindPawnArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	if (const auto MulticastDelegate = PawnArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllPawnArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = PawnArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Character

void UGameplayTagEventComponent::CallCharacterArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<ACharacter*> Value)
{
	const auto MulticastDelegate = CharacterArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindCharacterArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindCharacterArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	if (const auto MulticastDelegate = CharacterArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllCharacterArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = CharacterArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// ActorComponent

void UGameplayTagEventComponent::CallActorComponentArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<UActorComponent*> Value)
{
	const auto MulticastDelegate = ActorComponentArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorComponentArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindActorComponentArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	if (const auto MulticastDelegate = ActorComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllActorComponentArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = ActorComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// SceneComponent

void UGameplayTagEventComponent::CallSceneComponentArrayGameplayTagEvents(const FGameplayTag GameplayTag, const TArray<USceneComponent*> Value)
{
	const auto MulticastDelegate = SceneComponentArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindSceneComponentArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindSceneComponentArrayGameplayTagEvent(const FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	if (const auto MulticastDelegate = SceneComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllSceneComponentArrayGameplayTagEvents(const FGameplayTag GameplayTag)
{
	if (const auto MulticastDelegate = SceneComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}


#pragma endregion

