#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "ETrackGroup.h"
#include "Templates/SubclassOf.h"
#include "UID.h"
#include "WorldMapManager.generated.h"

class AWorldMapScene;
class UDataTable;
class UMarkerCompassWidget;
class UMarkerSettings;
class USRLEAsset;
class UWorldMapMarker;

UCLASS()
class STALKER2_API UWorldMapManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TSubclassOf<UWorldMapMarker> WorldMapMarkerClass;
    
    UPROPERTY(Transient)
    TSubclassOf<UWorldMapMarker> WorldMapRegionMarkerClass;
    
    UPROPERTY(Transient)
    TSubclassOf<UWorldMapMarker> WorldMapLocationMarkerClass;
    
    UPROPERTY(Transient)
    TSubclassOf<UWorldMapMarker> WorldMapHubMarkerClass;
    
    UPROPERTY(Transient)
    TSubclassOf<UMarkerCompassWidget> MarkerCompassWidgetClass;
    
    UPROPERTY(Transient)
    UDataTable* MarkerIconsDataTable;
    
    UPROPERTY(Transient)
    UMarkerSettings* MarkerSettingsAsset;
    
private:
    UPROPERTY(Transient)
    AWorldMapScene* WorldMapScene;
    
    UPROPERTY(Transient)
    USRLEAsset* RegionTexture;
    
    UPROPERTY(Transient)
    TMap<ETrackGroup, FUID> TrackedMarkers;
    
public:
    UWorldMapManager();

};

