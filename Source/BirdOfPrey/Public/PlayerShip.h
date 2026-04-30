#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

class UAudioComponent;
class UPointLightComponent;
class ABasePlayerController;

UCLASS()
class BIRDOFPREY_API APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public:
	APlayerShip();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	UAudioComponent* HoverAudio;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	UPointLightComponent* PointLight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* BasePlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently() const;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
};