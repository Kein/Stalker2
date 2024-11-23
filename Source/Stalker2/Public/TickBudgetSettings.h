#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "InitialCollectionSize.h"
#include "TimeBudget.h"
#include "TickBudgetSettings.generated.h"

UCLASS(DefaultConfig, Config=TickBudget)
class STALKER2_API UTickBudgetSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FTimeBudget TimeBudget;
    
    UPROPERTY(Config, EditAnywhere)
    FInitialCollectionSize InitialCollectionSize;
    
    UTickBudgetSettings();

};

