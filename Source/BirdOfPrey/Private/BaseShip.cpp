#include "BaseShip.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"

ABaseShip::ABaseShip()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
	RootComponent = CollisionCapsule;

	ShipMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	ShipMesh->SetupAttachment(RootComponent);

	WeaponSpawnOffset = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponSpawnOffset"));
	WeaponSpawnOffset->SetupAttachment(ShipMesh);

	ShipMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));
}

void ABaseShip::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ABaseShip::Reset()
{
}