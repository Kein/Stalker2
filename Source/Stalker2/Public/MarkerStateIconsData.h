#pragma once
#include "CoreMinimal.h"
#include "MarkerIconPair.h"
#include "MarkerStateIconsData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FMarkerStateIconsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMarkerIconPair Compass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMarkerIconPair Map;
    
    FMarkerStateIconsData();
};

