#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ELookAtOwnerState.h"
#include "RestrictionsMap.h"
#include "LookAtRestrictionsDataAsset.generated.h"

UCLASS(BlueprintType)
class STALKER2_API ULookAtRestrictionsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRestrictionsMap DefaultRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ELookAtOwnerState, FRestrictionsMap> Restrictions;
    
    ULookAtRestrictionsDataAsset();

};

