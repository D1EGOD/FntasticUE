// @2022 Aleksandr Aleksandrovich Gromyko


#include "Turtle.h"
#include "MainAIController.h"

// Sets default values
ATurtle::ATurtle()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//AIControllerClass = AMainAIController::StaticClass();
}

// Called when the game starts or when spawned
void ATurtle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurtle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}