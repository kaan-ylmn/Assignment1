#include "PlayerShip.h"
#include "Components/AudioComponent.h"
#include "Components/PointLightComponent.h"
#include "BasePlayerController.h"

APlayerShip::APlayerShip()
{
	HoverAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("HoverAudio"));
	HoverAudio->SetupAttachment(RootComponent);

	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	PointLight->SetupAttachment(RootComponent);

	InvulnerabilityTime = 2.0f;
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently() const
{
	return false;
}

float APlayerShip::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}