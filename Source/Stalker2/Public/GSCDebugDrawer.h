#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GSCDebugDrawer.generated.h"

class UDrawGSCDebug;

UCLASS()
class STALKER2_API AGSCDebugDrawer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UDrawGSCDebug* DrawComponent;
    
    AGSCDebugDrawer(const FObjectInitializer& ObjectInitializer);

};

