#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DebugRestrictionSettings.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct FDebugRestrictionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UNavArea>> InRestrictedAreas;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UNavArea>> OutRestrictedAreas;
    
    STALKER2_API FDebugRestrictionSettings();
};

