#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnClickMarkerDelegate.h"
#include "OnHoverMarkerDelegate.h"
#include "WidgetBase.h"
#include "WorldMapMarker.generated.h"

class UButton;
class UCanvasPanelSlot;
class UImage;
class USizeBox;

UCLASS(EditInlineNew)
class STALKER2_API UWorldMapMarker : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnHoverMarker OnHoverMarker;
    
    UPROPERTY(BlueprintAssignable)
    FOnClickMarker OnClickMarker;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsScale;
    
protected:
    UPROPERTY(Instanced)
    UImage* MarkerZone;
    
    UPROPERTY(Instanced)
    UImage* MarkerIcon;
    
    UPROPERTY(Instanced)
    USizeBox* MarkerSizeBox;
    
    UPROPERTY(Instanced)
    USizeBox* ZoneRadiuse;
    
    UPROPERTY(Instanced)
    UButton* ClickZone;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D MarkerAlignment;
    
    UPROPERTY(EditAnywhere)
    float MarkerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableHoverScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverScaleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableMarkerClick;
    
private:
    UPROPERTY(Instanced, Transient)
    UCanvasPanelSlot* PerentCanvasSlot;
    
public:
    UWorldMapMarker();

    UFUNCTION()
    void OnMouseUnhover();
    
    UFUNCTION()
    void OnMouseHover();
    
    UFUNCTION()
    void MarkerClick();
    
};

