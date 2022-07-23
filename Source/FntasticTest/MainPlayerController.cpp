// @2022 Aleksandr Aleksandrovich Gromyko
//UE_LOG(LogTemp, Warning, TEXT("test"));

#include "MainPlayerController.h"
#include "TurtleSpawner.h"
#include "UtilityButton.h"
#include "Kismet/GameplayStatics.h"

AMainPlayerController::AMainPlayerController()
{

}

void AMainPlayerController::BeginPlay()
{
	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "InitialCamera", CameraActors);
	AMainPlayerController::GetPawn()->SetActorTransform(CameraActors[0]->GetTransform());
	
}

void AMainPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", IE_Pressed, this, &AMainPlayerController::Interact);
	
	bShowMouseCursor = true;
}

void AMainPlayerController::Interact()
{
	FVector MouseLocation;
	FVector MouseDirection;
	DeprojectMousePositionToWorld(MouseLocation, MouseDirection);
	FHitResult HitResult;
	FVector TraceEnd = MouseLocation + MouseDirection * 2000;
	FCollisionQueryParams TraceParameters;

	/*const FName TraceTag("InteractTraceTag");
	GetWorld()->DebugDrawTraceTag = TraceTag;
	TraceParameters.TraceTag = TraceTag;*/

	if (GetWorld()->LineTraceSingleByObjectType(HitResult, MouseLocation, TraceEnd, ECC_GameTraceChannel1, TraceParameters))
	{
		ATurtleSpawner* TurtleSpawner = Cast<ATurtleSpawner>(HitResult.Actor);
		if (TurtleSpawner) TurtleSpawner->SpawnTurtle();
		else Cast<AUtilityButton>(HitResult.Actor)->ButtonInteract();
	}
}