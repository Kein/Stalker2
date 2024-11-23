#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "PhysicalManagerCollection.h"
#include "PhysicsObjectCollection.h"
#include "ProjectileCollection.h"
#include "PostUpdateTickAggregationManager.generated.h"

UCLASS()
class STALKER2_API UPostUpdateTickAggregationManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FProjectileCollection ProjectilesCollection;
    
    UPROPERTY(Transient)
    FPhysicalManagerCollection PhysicalManagerCollection;
    
    UPROPERTY(Transient)
    FPhysicsObjectCollection PhysicsObjectCollection;
    
public:
    UPostUpdateTickAggregationManager();

};

