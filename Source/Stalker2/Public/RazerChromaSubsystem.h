#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RazerChromaSubsystem.generated.h"

class URazerChromaCinematicEventTracker;
class URazerChromaEventTracker;

UCLASS()
class URazerChromaSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    URazerChromaEventTracker* EventTracker;
    
    UPROPERTY(Transient)
    URazerChromaCinematicEventTracker* CinematicEventTracker;
    
public:
    URazerChromaSubsystem();

};

