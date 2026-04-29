#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

UCLASS()
class BIRDOFPREY_API ABasePlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	// "Kayan" deðiþkeni C++ tarafýnda float karþýlýðýdýr.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float PlayerScore;

	// "Tamsayý" deðiþkeni C++ tarafýnda int32 karþýlýðýdýr.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	int32 RemainingLives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float TimeOfLastDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bShouldUpdateRanking;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasRemainingLives();
};