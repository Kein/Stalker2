#include "WorldMapPage.h"

UWorldMapPage::UWorldMapPage() {
    this->WorldMapTooltip = NULL;
    this->MapLegend = NULL;
    this->ZoomContainerBox = NULL;
    this->ZoomContainer = NULL;
    this->ZoomIndicator = NULL;
    this->HintZone = NULL;
    this->ShowMarkerSelectorHintGamepad = NULL;
    this->MoveToPlayerPositionHint = NULL;
    this->ShowMarkerSelectorHint = NULL;
    this->HideMarkerSelectorHint = NULL;
    this->SetFollowLandmarkHint = NULL;
    this->SelectMarkerHint = NULL;
    this->DeleteSelectedLandmarkHint = NULL;
    this->ButtonToggleTracking = NULL;
    this->ChooseMarkerHint = NULL;
    this->ChangeZoomLevelHint = NULL;
    this->GamepadNavigationHint = NULL;
    this->ShowLegendHint = NULL;
    this->ShowGotoJournalTaskHint = NULL;
    this->ButtonHintExit = NULL;
    this->DefaultZoomLVL = 0;
    this->bShouldOpenDefaultZoomLVL = true;
    this->bEnablePlayerLandmarks = true;
}

void UWorldMapPage::UpdatePlatformInputMode() {
}

void UWorldMapPage::UIPDAToggleMarkTracking() {
}

void UWorldMapPage::UIPDAToggleLegend() {
}

void UWorldMapPage::UIPDAOpenQuestInJournal() {
}

void UWorldMapPage::UIPDAOpenPlayerMarkerSelector() {
}

void UWorldMapPage::UIPDANavigationUpReleased() {
}

void UWorldMapPage::UIPDANavigationUp() {
}

void UWorldMapPage::UIPDANavigationRightReleased() {
}

void UWorldMapPage::UIPDANavigationRight() {
}

void UWorldMapPage::UIPDANavigationLeftReleased() {
}

void UWorldMapPage::UIPDANavigationLeft() {
}

void UWorldMapPage::UIPDANavigationDownReleased() {
}

void UWorldMapPage::UIPDANavigationDown() {
}

void UWorldMapPage::UIPDAMoveToPlayerPosition() {
}

void UWorldMapPage::UIPDADeletePlayerMarker() {
}

void UWorldMapPage::UIPDACreateTrackedPlayerMarker() {
}

void UWorldMapPage::UIPDACreatePlayerMarker(const EMarkerType LandmarkType, const FVector& CreateMarkedLocation) {
}

void UWorldMapPage::UIPDAChangeVisibilityPlayerMarkers() {
}

void UWorldMapPage::OnPressExit() {
}

void UWorldMapPage::OnMarkerSelectorShow() {
}

void UWorldMapPage::OnMarkerSelectorHide() {
}

void UWorldMapPage::OnLegendUnhover() {
}

void UWorldMapPage::OnLegendHover() {
}

void UWorldMapPage::MarkerHover(const bool bHovered, UWorldMapMarker* HoverMarkerWidget) {
}

void UWorldMapPage::MarkerClick(const UWorldMapMarker* HoverMarkerWidget) {
}


