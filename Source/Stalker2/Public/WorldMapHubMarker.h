#pragma once
#include "CoreMinimal.h"
#include "WorldMapMarker.h"
#include "WorldMapHubMarker.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UWorldMapHubMarker : public UWorldMapMarker {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* MiniMarkerMain;
    
    UPROPERTY(Instanced)
    UImage* MiniMarkerSide;
    
    UWorldMapHubMarker();

};

