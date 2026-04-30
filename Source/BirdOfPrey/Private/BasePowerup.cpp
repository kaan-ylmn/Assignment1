#include "BasePowerup.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerShip.h"

ABasePowerup::ABasePowerup()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}

void ABasePowerup::Apply(APlayerShip* PlayerShip)
{
}

void ABasePowerup::PlayEffects()
{
}