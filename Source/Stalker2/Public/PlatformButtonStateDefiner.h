#pragma once
#include "CoreMinimal.h"
#include "MenuButtonStateDefiner.h"
#include "PlatformButtonStateDefiner.generated.h"

UCLASS(EditInlineNew)
class UPlatformButtonStateDefiner : public UMenuButtonStateDefiner {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint32 AvailablePlatforms;
    
    UPlatformButtonStateDefiner();

};

