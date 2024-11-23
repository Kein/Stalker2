#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMarkerType.h"
#include "ZoomLevelSettings.h"
#include "ZoomMarkerSettings.h"
#include "MapSettingsAsset.generated.h"

UCLASS()
class STALKER2_API UMapSettingsAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float HubFoldingRadius;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HubFoldingZoomLevel;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableReverseHoldMoveAxis;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableMouseMovement;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableHoldBorderMoving;
    
    UPROPERTY(EditDefaultsOnly)
    float GamepadCursorMovementSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float GamepadMapMovementSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float AttractionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float AttractionSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float UnselectedAreaBrightness;
    
    UPROPERTY(EditDefaultsOnly)
    float TooltipPadding;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FZoomLevelSettings> ZoomLevelSettings;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayerLandmarksLimitTotal;
    
    UPROPERTY(EditDefaultsOnly)
    float CreateRadius;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMarkerType, FZoomMarkerSettings> ZoomMarkerSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMarkerType, int32> ZOrderMarkerSettings;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ZOrderForHoverMarker;
    
    UPROPERTY(EditDefaultsOnly)
    FZoomMarkerSettings DefaultMarkerZoomSettings;
    
    UPROPERTY(EditDefaultsOnly)
    float MapMarkerLocationUpdateTime;
    
    UPROPERTY(EditDefaultsOnly)
    float MapMarkerLocationUpdateRadius;
    
    UMapSettingsAsset();

};

