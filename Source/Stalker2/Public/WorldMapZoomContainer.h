#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "WorldMapZoomContainer.generated.h"

class UImage;
class UUserMarkerSelector;
class UWorldMap;

UCLASS(EditInlineNew)
class STALKER2_API UWorldMapZoomContainer : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* MapTexture;
    
    UPROPERTY(Instanced)
    UWorldMap* WorldMap;
    
    UPROPERTY(Instanced)
    UUserMarkerSelector* GamepadCursor;
    
    UWorldMapZoomContainer();

    UFUNCTION()
    void MoveToPlayerLocation();
    
private:
    UFUNCTION()
    void CenterOnCachedLocation();
    
};

