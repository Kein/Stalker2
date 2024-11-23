#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RazerChromaCinematicEventTracker.generated.h"

class URazerChromaSubsystem;

UCLASS()
class STALKER2_API URazerChromaCinematicEventTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    URazerChromaSubsystem* Subsystem;
    
public:
    URazerChromaCinematicEventTracker();

};

