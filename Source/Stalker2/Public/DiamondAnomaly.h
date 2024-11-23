#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "DiamondAnomaly.generated.h"

class UStaticMeshComponent;

UCLASS()
class STALKER2_API ADiamondAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* CollisionMesh;
    
public:
    ADiamondAnomaly(const FObjectInitializer& ObjectInitializer);

};

