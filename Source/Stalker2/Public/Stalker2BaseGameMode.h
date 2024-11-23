#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Stalker2BaseGameMode.generated.h"

UCLASS(NonTransient)
class STALKER2_API AStalker2BaseGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AStalker2BaseGameMode(const FObjectInitializer& ObjectInitializer);

};

