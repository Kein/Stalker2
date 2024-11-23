#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RazerChromaEventTracker.generated.h"

class URazerChromaSubsystem;

UCLASS()
class URazerChromaEventTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    URazerChromaSubsystem* Subsystem;
    
public:
    URazerChromaEventTracker();

};

