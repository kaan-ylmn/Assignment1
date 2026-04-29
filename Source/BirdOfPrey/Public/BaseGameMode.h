#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

class AActor;
class ACameraActor;

UCLASS()
class BIRDOFPREY_API ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ACameraActor* GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();
};