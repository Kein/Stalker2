#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnMapMarkerClickDelegate.h"
#include "OnMapMarkerMarkerDelegate.h"
#include "UID.h"
#include "WidgetBase.h"
#include "WorldMap.generated.h"

class UCanvasPanel;
class UOverlay;
class USizeBox;
class UWidget;
class UWorldMapMarker;

UCLASS(EditInlineNew)
class STALKER2_API UWorldMap : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USizeBox* WorldMapSizeBox;
    
    UPROPERTY(Instanced)
    UCanvasPanel* MarkerStoreg;
    
    UPROPERTY(Instanced)
    UOverlay* MapContainer;
    
    UPROPERTY(Instanced)
    UWidget* PlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AddWorldAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LandmarkOffset;
    
    UPROPERTY(BlueprintAssignable)
    FOnMapMarkerMarker OnMapMarkerMarker;
    
    UPROPERTY(BlueprintAssignable)
    FOnMapMarkerClick OnMapMarkerClick;
    
protected:
    UPROPERTY(Instanced)
    TArray<UWorldMapMarker*> markers;
    
    UPROPERTY(Instanced)
    TArray<UWorldMapMarker*> Landmarks;
    
    UPROPERTY()
    FUID FollowMarker;
    
    UPROPERTY(Instanced, Transient)
    UWorldMapMarker* CurrHoverMarker;
    
public:
    UWorldMap();

    UFUNCTION()
    void MarkerHover(bool bInHovered, UWorldMapMarker* InHoverMarkerWidget);
    
protected:
    UFUNCTION()
    void MarkerClick(const UWorldMapMarker* HoverMarkerWidget);
    
};

