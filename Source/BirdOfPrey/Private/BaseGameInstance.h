#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseGameInstance.generated.h"

class AActor;
class USkeletalMesh;
class UAnimInstance;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSAgentInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FText Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<AActor> BaseWeaponType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    USkeletalMesh* SkeletalMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UAnimInstance* AnimInstance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UTexture2D* Image;
};

UCLASS()
class UBaseGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<FSAgentInfo> PlayerAgentInfo;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetPlayerAgentInfoFor(int32 PlayerControllerID, UPARAM(ref) FSAgentInfo& Info);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FSAgentInfo GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& Result);
};