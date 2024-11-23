#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DebugWorldSubsystem.generated.h"

class AGSCDebugDrawer;

UCLASS()
class STALKER2_API UDebugWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGSCDebugDrawer* Drawer;
    
public:
    UDebugWorldSubsystem();

};

