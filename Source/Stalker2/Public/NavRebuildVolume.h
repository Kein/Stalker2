#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "NavRebuildVolume.generated.h"

UCLASS(Transient)
class STALKER2_API ANavRebuildVolume : public AVolume {
    GENERATED_BODY()
public:
    ANavRebuildVolume(const FObjectInitializer& ObjectInitializer);

};

