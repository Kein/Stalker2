#pragma once
#include "CoreMinimal.h"
#include "OnUserMarkerButtonHoveredDelegate.generated.h"

class UUserMarkerSelectorButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserMarkerButtonHovered, UUserMarkerSelectorButton*, HoveredButton);

