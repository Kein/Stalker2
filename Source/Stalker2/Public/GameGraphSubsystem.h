#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameGraphSubsystem.generated.h"

class AGameGraphData;

UCLASS()
class UGameGraphSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGameGraphData* GameGraphData;
    
public:
    UGameGraphSubsystem();

};

