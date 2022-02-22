#pragma once

#include "CoreMinimal.h"
#include "DynamicDelegates.generated.h"


#pragma region SingleDelegate

DECLARE_DYNAMIC_DELEGATE(FVoidDelegate);

#pragma region Variable

DECLARE_DYNAMIC_DELEGATE_OneParam(FBoolDelegate, bool, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FIntDelegate, int32, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FFloatDelegate, float, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FNameDelegate, FName, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FStringDelegate, FString, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FTextDelegate, FText, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FVectorDelegate, FVector, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FRotatorDelegate, FRotator, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FTransformDelegate, FTransform, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FObjectDelegate, UObject*, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FActorDelegate, AActor*, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FPawnDelegate, APawn*, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FCharacterDelegate, ACharacter*, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FActorComponentDelegate, UActorComponent*, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FSceneComponentDelegate, USceneComponent*, Value);

#pragma endregion

#pragma region Array

DECLARE_DYNAMIC_DELEGATE_OneParam(FBoolArrayDelegate, const TArray<bool>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FIntArrayDelegate, const TArray <int32>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FFloatArrayDelegate, const TArray<float>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FNameArrayDelegate, const TArray<FName>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FStringArrayDelegate, const TArray<FString>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FTextArrayDelegate, const TArray<FText>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FVectorArrayDelegate, const TArray<FVector>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FRotatorArrayDelegate, const TArray<FRotator>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FTransformArrayDelegate, const TArray<FTransform>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FObjectArrayDelegate, const TArray<UObject*>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FActorArrayDelegate, const TArray<AActor*>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FPawnArrayDelegate, const TArray<APawn*>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FCharacterArrayDelegate, const TArray<ACharacter*>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FActorComponentArrayDelegate, const TArray<UActorComponent*>&, Value);

DECLARE_DYNAMIC_DELEGATE_OneParam(FSceneComponentArrayDelegate, const TArray<USceneComponent*>&, Value);

#pragma endregion

#pragma endregion


#pragma region MulticastDelegate


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVoidMulticastDelegate);

#pragma region Variable

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolMulticastDelegate, bool, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIntMulticastDelegate, int32, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloatMulticastDelegate, float, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNameMulticastDelegate, FName, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStringMulticastDelegate, FString, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTextMulticastDelegate, FText, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVectorMulticastDelegate, FVector, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRotatorMulticastDelegate, FRotator, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransformMulticastDelegate, FTransform, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectMulticastDelegate, UObject*, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorMulticastDelegate, AActor*, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnMulticastDelegate, APawn*, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterMulticastDelegate, ACharacter*, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorComponentMulticastDelegate, UActorComponent*, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSceneComponentMulticastDelegate, USceneComponent*, Value);

#pragma endregion

#pragma region Array

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolArrayMulticastDelegate, const TArray<bool>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIntArrayMulticastDelegate, const TArray<int32>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloatArrayMulticastDelegate, const TArray<float>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNameArrayMulticastDelegate, const TArray<FName>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStringArrayMulticastDelegate, const TArray<FString>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTextArrayMulticastDelegate, const TArray<FText>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVectorArrayMulticastDelegate, const TArray<FVector>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRotatorArrayMulticastDelegate, const TArray<FRotator>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransformArrayMulticastDelegate, const TArray<FTransform>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectArrayMulticastDelegate, const TArray<UObject*>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorArrayMulticastDelegate, const TArray<AActor*>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnArrayMulticastDelegate, const TArray<APawn*>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterArrayMulticastDelegate, const TArray<ACharacter*>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorComponentArrayMulticastDelegate, const TArray<UActorComponent*>&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSceneComponentArrayMulticastDelegate, const TArray<USceneComponent*>&, Value);

#pragma endregion

#pragma endregion



UENUM()
enum AAAA
{
	A
};
