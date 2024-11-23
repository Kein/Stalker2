#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMarkerType.h"
#include "MarkerTypeSettings.h"
#include "MarkerSettings.generated.h"

class UCurveFloat;

UCLASS()
class STALKER2_API UMarkerSettings : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<EMarkerType, FMarkerTypeSettings> MarkerTypeSettings;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* CompassMarkerVisibilityCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FMarkerTypeSettings MarkerSettingsDefaultObject;
    
public:
    UMarkerSettings();

};

