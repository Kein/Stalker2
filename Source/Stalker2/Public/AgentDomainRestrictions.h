#pragma once
#include "CoreMinimal.h"
#include "EAgentDomain.h"
#include "ESpaceRestrictionType.h"
#include "AgentDomainRestrictions.generated.h"

USTRUCT()
struct FAgentDomainRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAgentDomain AgentDomain;
    
    UPROPERTY(EditAnywhere)
    ESpaceRestrictionType RestrictionType;
    
    STALKER2_API FAgentDomainRestrictions();
};

