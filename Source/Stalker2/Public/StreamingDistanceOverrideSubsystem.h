#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "StreamingDistanceOverrideVolumeState.h"
#include "StreamingDistanceOverrideSubsystem.generated.h"

UCLASS()
class UStreamingDistanceOverrideSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FStreamingDistanceOverrideVolumeState> RegisteredSDOVolumeStates;
    
public:
    UStreamingDistanceOverrideSubsystem();

};

