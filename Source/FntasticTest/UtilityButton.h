// @2022 Aleksandr Aleksandrovich Gromyko

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UtilityButton.generated.h"

UCLASS()
class FNTASTICTEST_API AUtilityButton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUtilityButton();

public:	
	UFUNCTION(BlueprintImplementableEvent)
	void ButtonInteract();

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
	int ButtonType;
};
