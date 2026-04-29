#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseShip.generated.h"

class UFloatingPawnMovement;
class USkeletalMeshComponent;
class UCapsuleComponent;
class USceneComponent;

UCLASS()
class BIRDOFPREY_API ABaseShip : public ABaseGameAgent
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
	UCapsuleComponent* CollisionCapsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	USkeletalMeshComponent* ShipMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	USceneComponent* WeaponSpawnOffset;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	UFloatingPawnMovement* ShipMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Reset();
};