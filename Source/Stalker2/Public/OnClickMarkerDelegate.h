#pragma once
#include "CoreMinimal.h"
#include "OnClickMarkerDelegate.generated.h"

class UWorldMapMarker;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickMarker, const UWorldMapMarker*, HoverMarkerWidget);

