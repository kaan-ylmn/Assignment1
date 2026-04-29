#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseShip.generated.h"

class UFloatingPawnMovement;
class UStaticMeshComponent;
class UCapsuleComponent;

UCLASS()
class BIRDOFPREY_API ABaseShip : public APawn
{
	GENERATED_BODY()

public:
	ABaseShip();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	UStaticMeshComponent* ShipMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	UCapsuleComponent* CollisionCapsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	UFloatingPawnMovement* ShipMovement;
};