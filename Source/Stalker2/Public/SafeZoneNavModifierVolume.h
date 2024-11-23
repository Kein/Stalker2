#pragma once
#include "CoreMinimal.h"
#include "SystemicNavModifierVolume.h"
#include "SafeZoneNavModifierVolume.generated.h"

UCLASS()
class STALKER2_API ASafeZoneNavModifierVolume : public ASystemicNavModifierVolume {
    GENERATED_BODY()
public:
    ASafeZoneNavModifierVolume(const FObjectInitializer& ObjectInitializer);

};

