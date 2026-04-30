#include "BaseAIController.h"

ABaseAIController::ABaseAIController()
{
	// Ayrýntýlar panelindeki varsayýlan deðerleri atýyoruz
	LastFireTime = 0.0f;
	bIsFiring = false;
	RefireDelay = 1.0f;
	bShouldUpdateAim = false;
}

bool ABaseAIController::ShouldUpdateAim()
{
	return false;
}

void ABaseAIController::AimAt()
{
}