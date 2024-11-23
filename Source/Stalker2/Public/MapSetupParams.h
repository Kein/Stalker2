#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapSetupParams.generated.h"

UCLASS()
class STALKER2_API AMapSetupParams : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDisableLightingManager;
    
    UPROPERTY(EditAnywhere)
    bool bDisableReflectionManager;
    
    AMapSetupParams(const FObjectInitializer& ObjectInitializer);

};

