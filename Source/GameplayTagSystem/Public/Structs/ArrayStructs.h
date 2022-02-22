#pragma once

#include "CoreMinimal.h"
#include "ArrayStructs.generated.h"


USTRUCT(BlueprintType)
struct FBoolArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<bool> Value;
};

USTRUCT(BlueprintType)
struct FIntArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<int32> Value;
};

USTRUCT(BlueprintType)
struct FFloatArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<float> Value;
};

USTRUCT(BlueprintType)
struct FNameArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<FName> Value;
};

USTRUCT(BlueprintType)
struct FStringArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<FString> Value;
};

USTRUCT(BlueprintType)
struct FTextArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<FText> Value;
};

USTRUCT(BlueprintType)
struct FVectorArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<FVector> Value;
};

USTRUCT(BlueprintType)
struct FRotatorArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<FRotator> Value;
};

USTRUCT(BlueprintType)
struct FTransformArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<FTransform> Value;
};

USTRUCT(BlueprintType)
struct FObjectArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<UObject*> Value;
};

USTRUCT(BlueprintType)
struct FActorArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<AActor*> Value;
};

USTRUCT(BlueprintType)
struct FPawnArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<APawn*> Value;
};

USTRUCT(BlueprintType)
struct FCharacterArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<ACharacter*> Value;
};

USTRUCT(BlueprintType)
struct FActorComponentArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<UActorComponent*> Value;
};

USTRUCT(BlueprintType)
struct FSceneComponentArray
{
	GENERATED_BODY()

public:

	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite)
		TArray<USceneComponent*> Value;
};
