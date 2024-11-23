#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "Stalker2Spectator.generated.h"

UCLASS()
class STALKER2_API AStalker2Spectator : public ASpectatorPawn {
    GENERATED_BODY()
public:
    AStalker2Spectator(const FObjectInitializer& ObjectInitializer);

};

