#pragma once
#include "CoreMinimal.h"
#include "StartGameAction.h"
#include "SetDifficulty.generated.h"

UCLASS(EditInlineNew)
class USetDifficulty : public UStartGameAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FString DifficultySID;
    
public:
    USetDifficulty();

};

