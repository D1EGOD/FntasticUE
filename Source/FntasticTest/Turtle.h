// @2022 Aleksandr Aleksandrovich Gromyko

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TurtleSpawner.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Turtle.generated.h"

UCLASS()
class FNTASTICTEST_API ATurtle : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATurtle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, meta=(ExposeOnSpawn = "true"))
	TMap<TEnumAsByte<ETurtleMovingStatus>, float> TurtleMovingSequence;

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = "true"))
	AActor* TargetActor;

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = "true"))
	int TurtleType;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UBehaviorTree * BTAsset;
};
