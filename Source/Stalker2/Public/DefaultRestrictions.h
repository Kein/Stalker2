#pragma once
#include "CoreMinimal.h"
#include "AgentDomainRestrictions.h"
#include "ESpaceRestrictionType.h"
#include "FactionRestrictions.h"
#include "DefaultRestrictions.generated.h"

USTRUCT(BlueprintType)
struct FDefaultRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreDuringEmission;
    
    UPROPERTY(EditAnywhere)
    ESpaceRestrictionType GlobalRestriction;
    
    UPROPERTY(EditAnywhere)
    TArray<FAgentDomainRestrictions> AgentDomainRestrictions;
    
    UPROPERTY(EditAnywhere)
    TArray<FFactionRestrictions> FactionRestrictions;
    
    STALKER2_API FDefaultRestrictions();
};

