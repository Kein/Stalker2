#pragma once
#include "CoreMinimal.h"
#include "OnHoverMarkerDelegate.generated.h"

class UWorldMapMarker;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHoverMarker, bool, bIsHovered, UWorldMapMarker*, OutHoverMarkerWidget);

