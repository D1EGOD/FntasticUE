// @2022 Aleksandr Aleksandrovich Gromyko

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TurtleController.generated.h"

/**
 * 
 */
UCLASS()
class FNTASTICTEST_API ATurtleController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
};
