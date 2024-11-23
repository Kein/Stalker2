#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GlobalLoadingSubsystem.generated.h"

class UGlobal;

UCLASS()
class STALKER2_API UGlobalLoadingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGlobal* GameInstance;
    
public:
    UGlobalLoadingSubsystem();

};

