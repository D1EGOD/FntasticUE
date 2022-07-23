// @2022 Aleksandr Aleksandrovich Gromyko


#include "TurtleSpawner.h"

// Sets default values
ATurtleSpawner::ATurtleSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurtleSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurtleSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
