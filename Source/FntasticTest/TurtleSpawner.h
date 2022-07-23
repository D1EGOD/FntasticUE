// @2022 Aleksandr Aleksandrovich Gromyko

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurtleSpawner.generated.h"

UENUM(BlueprintType)
enum ETurtleMovingStatus
{
	AI_Idle		UMETA(DisplayName = "Idle"),
	AI_Forward	UMETA(DisplayName = "Forward"),
	AI_Backward	UMETA(DisplayName = "Backward"),
};

UCLASS()
class FNTASTICTEST_API ATurtleSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurtleSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	void SpawnTurtle();

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
	TMap<TEnumAsByte<ETurtleMovingStatus>, float> TurtleMovingSequence;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
	AActor* TargetActor;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
	int TurtleType;
};
