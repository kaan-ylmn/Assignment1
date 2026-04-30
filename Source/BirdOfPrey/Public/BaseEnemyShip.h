#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class AAIController* ShipAIController;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();

	virtual void Reset() override;
};