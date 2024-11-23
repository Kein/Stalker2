#pragma once
#include "CoreMinimal.h"
#include "OnMapMarkerClickDelegate.generated.h"

class UWorldMapMarker;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapMarkerClick, const UWorldMapMarker*, InHoverMarkerWidget);

