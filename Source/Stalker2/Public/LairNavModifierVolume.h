#pragma once
#include "CoreMinimal.h"
#include "SystemicNavModifierVolume.h"
#include "LairNavModifierVolume.generated.h"

UCLASS()
class STALKER2_API ALairNavModifierVolume : public ASystemicNavModifierVolume {
    GENERATED_BODY()
public:
    ALairNavModifierVolume(const FObjectInitializer& ObjectInitializer);

};

