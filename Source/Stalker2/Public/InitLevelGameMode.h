#pragma once
#include "CoreMinimal.h"
#include "Stalker2BaseGameMode.h"
#include "InitLevelGameMode.generated.h"

UCLASS(NonTransient)
class STALKER2_API AInitLevelGameMode : public AStalker2BaseGameMode {
    GENERATED_BODY()
public:
    AInitLevelGameMode(const FObjectInitializer& ObjectInitializer);

};

