// @2022 Aleksandr Aleksandrovich Gromyko


#include "TurtleController.h"

void ATurtleController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("TurtleControllerTest"));
}