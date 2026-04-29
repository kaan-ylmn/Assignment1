#include "BaseGameMode.h"
#include "Camera/CameraActor.h"

FVector ABaseGameMode::GetWorldScrollVelocity()
{
	return FVector::ZeroVector;
}

ACameraActor* ABaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}

void ABaseGameMode::OnPlayerDied() {}
void ABaseGameMode::OnEnemyDied() {}
void ABaseGameMode::StartGame() {}
void ABaseGameMode::EndGame() {}
void ABaseGameMode::SpawnEnemyFrom() {}
void ABaseGameMode::ResetGame() {}