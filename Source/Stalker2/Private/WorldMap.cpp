#include "WorldMap.h"

UWorldMap::UWorldMap() {
    this->WorldMapSizeBox = NULL;
    this->MarkerStoreg = NULL;
    this->MapContainer = NULL;
    this->PlayerPosition = NULL;
    this->AddWorldAngle = 0.00f;
    this->CurrHoverMarker = NULL;
}

void UWorldMap::MarkerHover(bool bInHovered, UWorldMapMarker* InHoverMarkerWidget) {
}

void UWorldMap::MarkerClick(const UWorldMapMarker* HoverMarkerWidget) {
}


