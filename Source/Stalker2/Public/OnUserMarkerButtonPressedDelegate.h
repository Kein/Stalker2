#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMarkerType.h"
#include "OnUserMarkerButtonPressedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUserMarkerButtonPressed, EMarkerType, HoveredButton, const FVector&, InvokeCoordinates);

