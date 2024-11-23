#pragma once
#include "CoreMinimal.h"
#include "ERadiationPreset.h"
#include "SystemicNavModifierVolume.h"
#include "RadiationNavModifierVolume.generated.h"

UCLASS()
class STALKER2_API ARadiationNavModifierVolume : public ASystemicNavModifierVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ERadiationPreset RadiationPreset;
    
public:
    ARadiationNavModifierVolume(const FObjectInitializer& ObjectInitializer);

};

