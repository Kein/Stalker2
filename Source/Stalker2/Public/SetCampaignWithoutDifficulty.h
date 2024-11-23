#pragma once
#include "CoreMinimal.h"
#include "StartGameAction.h"
#include "SetCampaignWithoutDifficulty.generated.h"

UCLASS(EditInlineNew)
class USetCampaignWithoutDifficulty : public UStartGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString DifficultyPrototypeSID;
    
    USetCampaignWithoutDifficulty();

};

