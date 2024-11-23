#pragma once
#include "CoreMinimal.h"
#include "WorldMapMarker.h"
#include "WorldMapRegionMarker.generated.h"

class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UWorldMapRegionMarker : public UWorldMapMarker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextWidget* RegionName;
    
public:
    UWorldMapRegionMarker();

};

