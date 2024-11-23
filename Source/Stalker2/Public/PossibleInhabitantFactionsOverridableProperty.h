#pragma once
#include "CoreMinimal.h"
#include "OverridableProperty.h"
#include "PossibleInhabitantFaction.h"
#include "PossibleInhabitantFactionsOverridableProperty.generated.h"

USTRUCT()
struct STALKER2_API FPossibleInhabitantFactionsOverridableProperty : public FOverridableProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPossibleInhabitantFaction> DefaultValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FPossibleInhabitantFaction> CurrentValue;
    
    FPossibleInhabitantFactionsOverridableProperty();
};

