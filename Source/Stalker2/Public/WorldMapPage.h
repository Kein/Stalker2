#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "EMarkerType.h"
#include "PDAPage.h"
#include "WorldMapPage.generated.h"

class UHintInputController;
class UMapLegend;
class USizeBox;
class UWidget;
class UWorldMapMarker;
class UWorldMapTooltip;
class UWorldMapZoomContainer;
class UZoomIndicator;

UCLASS(EditInlineNew)
class STALKER2_API UWorldMapPage : public UPDAPage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UWorldMapTooltip* WorldMapTooltip;
    
    UPROPERTY(Instanced)
    UMapLegend* MapLegend;
    
    UPROPERTY(Instanced)
    UWidget* ZoomContainerBox;
    
    UPROPERTY(Instanced)
    UWorldMapZoomContainer* ZoomContainer;
    
    UPROPERTY(Instanced)
    UZoomIndicator* ZoomIndicator;
    
    UPROPERTY(Instanced)
    USizeBox* HintZone;
    
    UPROPERTY(Instanced)
    UHintInputController* ShowMarkerSelectorHintGamepad;
    
    UPROPERTY(Instanced)
    UHintInputController* MoveToPlayerPositionHint;
    
    UPROPERTY(Instanced)
    UHintInputController* ShowMarkerSelectorHint;
    
    UPROPERTY(Instanced)
    UHintInputController* HideMarkerSelectorHint;
    
    UPROPERTY(Instanced)
    UHintInputController* SetFollowLandmarkHint;
    
    UPROPERTY(Instanced)
    UHintInputController* SelectMarkerHint;
    
    UPROPERTY(Instanced)
    UHintInputController* DeleteSelectedLandmarkHint;
    
    UPROPERTY(Instanced)
    UHintInputController* ButtonToggleTracking;
    
    UPROPERTY(Instanced)
    UHintInputController* ChooseMarkerHint;
    
    UPROPERTY(Instanced)
    UHintInputController* ChangeZoomLevelHint;
    
    UPROPERTY(Instanced)
    UHintInputController* GamepadNavigationHint;
    
    UPROPERTY(Instanced)
    UHintInputController* ShowLegendHint;
    
    UPROPERTY(Instanced)
    UHintInputController* ShowGotoJournalTaskHint;
    
    UPROPERTY(Instanced)
    UHintInputController* ButtonHintExit;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D DefaultPosition;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DefaultZoomLVL;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShouldOpenDefaultZoomLVL;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnablePlayerLandmarks;
    
    UPROPERTY(EditDefaultsOnly)
    FString HintZoomSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString HintScrollLegendSID;
    
    UPROPERTY(EditDefaultsOnly)
    FName HintDisable;
    
    UPROPERTY(EditDefaultsOnly)
    FName HintTrack;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMarkerType, FSlateColor> MarkerHoverColors;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMarkerType, FSlateColor> MarkerUnhoverColors;
    
public:
    UWorldMapPage();

    UFUNCTION()
    void UpdatePlatformInputMode();
    
    UFUNCTION()
    void UIPDAToggleMarkTracking();
    
    UFUNCTION()
    void UIPDAToggleLegend();
    
    UFUNCTION()
    void UIPDAOpenQuestInJournal();
    
    UFUNCTION()
    void UIPDAOpenPlayerMarkerSelector();
    
    UFUNCTION()
    void UIPDANavigationUpReleased();
    
    UFUNCTION()
    void UIPDANavigationUp();
    
    UFUNCTION()
    void UIPDANavigationRightReleased();
    
    UFUNCTION()
    void UIPDANavigationRight();
    
    UFUNCTION()
    void UIPDANavigationLeftReleased();
    
    UFUNCTION()
    void UIPDANavigationLeft();
    
    UFUNCTION()
    void UIPDANavigationDownReleased();
    
    UFUNCTION()
    void UIPDANavigationDown();
    
    UFUNCTION()
    void UIPDAMoveToPlayerPosition();
    
    UFUNCTION()
    void UIPDADeletePlayerMarker();
    
    UFUNCTION()
    void UIPDACreateTrackedPlayerMarker();
    
    UFUNCTION()
    void UIPDACreatePlayerMarker(const EMarkerType LandmarkType, const FVector& CreateMarkedLocation);
    
    UFUNCTION()
    void UIPDAChangeVisibilityPlayerMarkers();
    
    UFUNCTION()
    void OnPressExit();
    
    UFUNCTION()
    void OnMarkerSelectorShow();
    
    UFUNCTION()
    void OnMarkerSelectorHide();
    
    UFUNCTION()
    void OnLegendUnhover();
    
    UFUNCTION()
    void OnLegendHover();
    
private:
    UFUNCTION()
    void MarkerHover(const bool bHovered, UWorldMapMarker* HoverMarkerWidget);
    
    UFUNCTION()
    void MarkerClick(const UWorldMapMarker* HoverMarkerWidget);
    
};

