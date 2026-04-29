#include "BaseShip.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"

ABaseShip::ABaseShip()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
	RootComponent = CollisionCapsule;

	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	ShipMesh->SetupAttachment(RootComponent);

	ShipMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("ShipMovement"));
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