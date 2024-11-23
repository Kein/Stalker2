#pragma once
#include "CoreMinimal.h"
#include "LaserSightComponent.h"
#include "PlayerLaserSightComponent.generated.h"

class APC;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerLaserSightComponent : public ULaserSightComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    APC* PlayerOwner;
    
public:
    UPlayerLaserSightComponent(const FObjectInitializer& ObjectInitializer);

};

