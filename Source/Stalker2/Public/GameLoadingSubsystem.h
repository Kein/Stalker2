#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameLoadingSubsystem.generated.h"

class ULevel;
class UWorldPartitionRuntimeCell;

UCLASS()
class STALKER2_API UGameLoadingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UWorldPartitionRuntimeCell*> LevelsToActivate;
    
    UPROPERTY(Transient)
    TSet<ULevel*> LevelsToRemove;
    
public:
    UGameLoadingSubsystem();

};

