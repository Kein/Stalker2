#pragma once
#include "CoreMinimal.h"
#include "EMovementBehaviour.h"
#include "GameplayEventData.h"
#include "MovementModeChangedEventData.generated.h"

UCLASS(BlueprintType)
class UMovementModeChangedEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    EMovementBehaviour NewMovementBehavior;
    
    UPROPERTY(BlueprintReadOnly)
    EMovementBehaviour OldMovementBehavior;
    
public:
    UMovementModeChangedEventData();

};

