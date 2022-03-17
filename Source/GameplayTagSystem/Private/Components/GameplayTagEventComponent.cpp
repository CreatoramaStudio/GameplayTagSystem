// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/GameplayTagEventComponent.h"

/// Void

void UGameplayTagEventComponent::CallVoidGameplayTagEvents(FGameplayTag GameplayTag)
{
	auto MulticastDelegate = VoidEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast();
	}
}

void UGameplayTagEventComponent::BindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	auto& MulticastDelegate = VoidEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbindVoidGameplayTagEvent(FGameplayTag GameplayTag, const FVoidDelegate& Value)
{
	if (auto MulticastDelegate = VoidEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllVoidGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = VoidEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

#pragma region Variable

/// Bool

void UGameplayTagEventComponent::CallBoolGameplayTagEvents(FGameplayTag GameplayTag, bool Value)
{
	auto MulticastDelegate = BoolEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindBoolGameplayTagEvent(FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	auto& MulticastDelegate = BoolEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinBoolGameplayTagEvent(FGameplayTag GameplayTag, const FBoolDelegate& Value)
{
	if (auto MulticastDelegate = BoolEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllBoolGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = BoolEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Int

void UGameplayTagEventComponent::CallIntGameplayTagEvents(FGameplayTag GameplayTag, int32 Value)
{
	auto MulticastDelegate = IntEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindIntGameplayTagEvent(FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	auto& MulticastDelegate = IntEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinIntGameplayTagEvent(FGameplayTag GameplayTag, const FIntDelegate& Value)
{
	if (auto MulticastDelegate = IntEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllIntGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = IntEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Float

void UGameplayTagEventComponent::CallFloatGameplayTagEvents(FGameplayTag GameplayTag, float Value)
{
	auto MulticastDelegate = FloatEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindFloatGameplayTagEvent(FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	auto& MulticastDelegate = FloatEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinFloatGameplayTagEvent(FGameplayTag GameplayTag, const FFloatDelegate& Value)
{
	if (auto MulticastDelegate = FloatEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllFloatGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = FloatEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Name

void UGameplayTagEventComponent::CallNameGameplayTagEvents(FGameplayTag GameplayTag, FName Value)
{
	auto MulticastDelegate = NameEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindNameGameplayTagEvent(FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	auto& MulticastDelegate = NameEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinNameGameplayTagEvent(FGameplayTag GameplayTag, const FNameDelegate& Value)
{
	if (auto MulticastDelegate = NameEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllNameGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = NameEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// String

void UGameplayTagEventComponent::CallStringGameplayTagEvents(FGameplayTag GameplayTag, FString Value)
{
	auto MulticastDelegate = StringEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindStringGameplayTagEvent(FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	auto& MulticastDelegate = StringEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinStringGameplayTagEvent(FGameplayTag GameplayTag, const FStringDelegate& Value)
{
	if (auto MulticastDelegate = StringEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllStringGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = StringEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Text

void UGameplayTagEventComponent::CallTextGameplayTagEvents(FGameplayTag GameplayTag, FText Value)
{
	auto MulticastDelegate = TextEvents.Find(GameplayTag);

	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTextGameplayTagEvent(FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	auto& MulticastDelegate = TextEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinTextGameplayTagEvent(FGameplayTag GameplayTag, const FTextDelegate& Value)
{
	if (auto MulticastDelegate = TextEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllTextGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = TextEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Vector

void UGameplayTagEventComponent::CallVectorGameplayTagEvents(FGameplayTag GameplayTag, FVector Value)
{
	auto MulticastDelegate = VectorEvents.Find(GameplayTag);

	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindVectorGameplayTagEvent(FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	auto& MulticastDelegate = VectorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinVectorGameplayTagEvent(FGameplayTag GameplayTag, const FVectorDelegate& Value)
{
	if (auto MulticastDelegate = VectorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllVectorGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = VectorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Rotator

void UGameplayTagEventComponent::CallRotatorGameplayTagEvents(FGameplayTag GameplayTag, FRotator Value)
{
	auto MulticastDelegate = RotatorEvents.Find(GameplayTag);

	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindRotatorGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	auto& MulticastDelegate = RotatorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinRotatorGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorDelegate& Value)
{
	if (auto MulticastDelegate = RotatorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllRotatorGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = RotatorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Transform

void UGameplayTagEventComponent::CallTransformGameplayTagEvents(FGameplayTag GameplayTag, FTransform Value)
{
	auto MulticastDelegate = TransformEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTransformGameplayTagEvent(FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	auto& MulticastDelegate = TransformEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinTransformGameplayTagEvent(FGameplayTag GameplayTag, const FTransformDelegate& Value)
{
	if (auto MulticastDelegate = TransformEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllTransformGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = TransformEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Object

void UGameplayTagEventComponent::CallObjectGameplayTagEvents(FGameplayTag GameplayTag, UObject* Value)
{
	auto MulticastDelegate = ObjectEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindObjectGameplayTagEvent(FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	auto& MulticastDelegate = ObjectEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinObjectGameplayTagEvent(FGameplayTag GameplayTag, const FObjectDelegate& Value)
{
	if (auto MulticastDelegate = ObjectEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllObjectGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = ObjectEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Actor

void UGameplayTagEventComponent::CallActorGameplayTagEvents(FGameplayTag GameplayTag, AActor* Value)
{
	auto MulticastDelegate = ActorEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorGameplayTagEvent(FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	auto& MulticastDelegate = ActorEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinActorGameplayTagEvent(FGameplayTag GameplayTag, const FActorDelegate& Value)
{
	if (auto MulticastDelegate = ActorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllActorGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = ActorEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Pawn

void UGameplayTagEventComponent::CallPawnGameplayTagEvents(FGameplayTag GameplayTag, APawn* Value)
{
	auto MulticastDelegate = PawnEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindPawnGameplayTagEvent(FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	auto& MulticastDelegate = PawnEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinPawnGameplayTagEvent(FGameplayTag GameplayTag, const FPawnDelegate& Value)
{
	if (auto MulticastDelegate = PawnEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllPawnGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = PawnEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Character

void UGameplayTagEventComponent::CallCharacterGameplayTagEvents(FGameplayTag GameplayTag, ACharacter* Value)
{
	auto MulticastDelegate = CharacterEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindCharacterGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	auto& MulticastDelegate = CharacterEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinCharacterGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterDelegate& Value)
{
	if (auto MulticastDelegate = CharacterEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllCharacterGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = CharacterEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// ActorComponent

void UGameplayTagEventComponent::CallActorComponentGameplayTagEvents(FGameplayTag GameplayTag, UActorComponent* Value)
{
	auto MulticastDelegate = ActorComponentEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorComponentGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinActorComponentGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentDelegate& Value)
{
	if (auto MulticastDelegate = ActorComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllActorComponentGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = ActorComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// SceneComponent

void UGameplayTagEventComponent::CallSceneComponentGameplayTagEvents(FGameplayTag GameplayTag, USceneComponent* Value)
{
	auto MulticastDelegate = SceneComponentEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindSceneComponentGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinSceneComponentGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentDelegate& Value)
{
	if (auto MulticastDelegate = SceneComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllSceneComponentGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = SceneComponentEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

#pragma endregion

#pragma region Array

/// Bool

void UGameplayTagEventComponent::CallBoolArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<bool> Value)
{
	auto MulticastDelegate = BoolArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindBoolArrayGameplayTagEvent(FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	auto& MulticastDelegate = BoolArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinBoolArrayGameplayTagEvent(FGameplayTag GameplayTag, const FBoolArrayDelegate& Value)
{
	if (auto MulticastDelegate = BoolArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllBoolArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = BoolArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Int

void UGameplayTagEventComponent::CallIntArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<int32> Value)
{
	auto MulticastDelegate = IntArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindIntArrayGameplayTagEvent(FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	auto& MulticastDelegate = IntArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinIntArrayGameplayTagEvent(FGameplayTag GameplayTag, const FIntArrayDelegate& Value)
{
	if (auto MulticastDelegate = IntArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllIntArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = IntArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Float

void UGameplayTagEventComponent::CallFloatArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<float> Value)
{
	auto MulticastDelegate = FloatArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindFloatArrayGameplayTagEvent(FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	auto& MulticastDelegate = FloatArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinFloatArrayGameplayTagEvent(FGameplayTag GameplayTag, const FFloatArrayDelegate& Value)
{
	if (auto MulticastDelegate = FloatArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllFloatArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = FloatArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Name

void UGameplayTagEventComponent::CallNameArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FName> Value)
{
	auto MulticastDelegate = NameArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindNameArrayGameplayTagEvent(FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	auto& MulticastDelegate = NameArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinNameArrayGameplayTagEvent(FGameplayTag GameplayTag, const FNameArrayDelegate& Value)
{
	if (auto MulticastDelegate = NameArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllNameArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = NameArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// String

void UGameplayTagEventComponent::CallStringArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FString> Value)
{
	auto MulticastDelegate = StringArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindStringArrayGameplayTagEvent(FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	auto& MulticastDelegate = StringArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinStringArrayGameplayTagEvent(FGameplayTag GameplayTag, const FStringArrayDelegate& Value)
{
	if (auto MulticastDelegate = StringArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllStringArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = StringArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Text

void UGameplayTagEventComponent::CallTextArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FText> Value)
{
	auto MulticastDelegate = TextArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTextArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	auto& MulticastDelegate = TextArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinTextArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTextArrayDelegate& Value)
{
	if (auto MulticastDelegate = TextArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllTextArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = TextArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Vector

void UGameplayTagEventComponent::CallVectorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FVector> Value)
{
	auto MulticastDelegate = VectorArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindVectorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	auto& MulticastDelegate = VectorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinVectorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FVectorArrayDelegate& Value)
{
	if (auto MulticastDelegate = VectorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllVectorArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = VectorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Rotator

void UGameplayTagEventComponent::CallRotatorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FRotator> Value)
{
	auto MulticastDelegate = RotatorArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindRotatorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	auto& MulticastDelegate = RotatorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinRotatorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FRotatorArrayDelegate& Value)
{
	if (auto MulticastDelegate = RotatorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllRotatorArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = RotatorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Transform

void UGameplayTagEventComponent::CallTransformArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<FTransform> Value)
{
	auto MulticastDelegate = TransformArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindTransformArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	auto& MulticastDelegate = TransformArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinTransformArrayGameplayTagEvent(FGameplayTag GameplayTag, const FTransformArrayDelegate& Value)
{
	if (auto MulticastDelegate = TransformArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllTransformArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = TransformArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Object

void UGameplayTagEventComponent::CallObjectArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<UObject*> Value)
{
	auto MulticastDelegate = ObjectArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindObjectArrayGameplayTagEvent(FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	auto& MulticastDelegate = ObjectArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinObjectArrayGameplayTagEvent(FGameplayTag GameplayTag, const FObjectArrayDelegate& Value)
{
	if (auto MulticastDelegate = ObjectArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllObjectArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = ObjectArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Actor

void UGameplayTagEventComponent::CallActorArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<AActor*> Value)
{
	auto MulticastDelegate = ActorArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinActorArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorArrayDelegate& Value)
{
	if (auto MulticastDelegate = ActorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllActorArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = ActorArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Pawn

void UGameplayTagEventComponent::CallPawnArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<APawn*> Value)
{
	auto MulticastDelegate = PawnArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindPawnArrayGameplayTagEvent(FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	auto& MulticastDelegate = PawnArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinPawnArrayGameplayTagEvent(FGameplayTag GameplayTag, const FPawnArrayDelegate& Value)
{
	if (auto MulticastDelegate = PawnArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllPawnArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = PawnArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// Character

void UGameplayTagEventComponent::CallCharacterArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<ACharacter*> Value)
{
	auto MulticastDelegate = CharacterArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindCharacterArrayGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	auto& MulticastDelegate = CharacterArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinCharacterArrayGameplayTagEvent(FGameplayTag GameplayTag, const FCharacterArrayDelegate& Value)
{
	if (auto MulticastDelegate = CharacterArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllCharacterArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = CharacterArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// ActorComponent

void UGameplayTagEventComponent::CallActorComponentArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<UActorComponent*> Value)
{
	auto MulticastDelegate = ActorComponentArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindActorComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = ActorComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinActorComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FActorComponentArrayDelegate& Value)
{
	if (auto MulticastDelegate = ActorComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllActorComponentArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = ActorComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}

/// SceneComponent

void UGameplayTagEventComponent::CallSceneComponentArrayGameplayTagEvents(FGameplayTag GameplayTag, TArray<USceneComponent*> Value)
{
	auto MulticastDelegate = SceneComponentArrayEvents.Find(GameplayTag);
	if (MulticastDelegate && MulticastDelegate->IsBound())
	{
		MulticastDelegate->Broadcast(Value);
	}
}

void UGameplayTagEventComponent::BindSceneComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	auto& MulticastDelegate = SceneComponentArrayEvents.FindOrAdd(GameplayTag);
	MulticastDelegate.Add(Value);
}

void UGameplayTagEventComponent::UnbinSceneComponentArrayGameplayTagEvent(FGameplayTag GameplayTag, const FSceneComponentArrayDelegate& Value)
{
	if (auto MulticastDelegate = SceneComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Remove(Value);
	}
}

void UGameplayTagEventComponent::UnbindAllSceneComponentArrayGameplayTagEvents(FGameplayTag GameplayTag)
{
	if (auto MulticastDelegate = SceneComponentArrayEvents.Find(GameplayTag))
	{
		MulticastDelegate->Clear();
	}
}


#pragma endregion

