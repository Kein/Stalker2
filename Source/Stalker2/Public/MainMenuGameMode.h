#pragma once
#include "CoreMinimal.h"
#include "Stalker2BaseGameMode.h"
#include "MainMenuGameMode.generated.h"

UCLASS(NonTransient)
class STALKER2_API AMainMenuGameMode : public AStalker2BaseGameMode {
    GENERATED_BODY()
public:
    AMainMenuGameMode(const FObjectInitializer& ObjectInitializer);

};

