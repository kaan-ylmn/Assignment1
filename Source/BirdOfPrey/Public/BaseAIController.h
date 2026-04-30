#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

class ABasePlayerController;
class ABaseGameAgent;

UCLASS()
class BIRDOFPREY_API ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
	ABaseAIController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	float LastFireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	float RefireDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	bool bShouldUpdateAim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* ControlledAgent;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldUpdateAim();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt();
};