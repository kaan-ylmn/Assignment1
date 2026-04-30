#include "BaseWeapon.h"
#include "Components/SceneComponent.h"

ABaseWeapon::ABaseWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;

	
	bRequiresAimForAI = true;
	bIsAutomatic = true;
}

bool ABaseWeapon::IsFiring() const
{
	return false;
}