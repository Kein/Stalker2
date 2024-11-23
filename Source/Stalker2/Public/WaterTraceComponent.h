#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "WaterTraceComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWaterTraceComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FVector PreviousLocation;
    
public:
    UWaterTraceComponent(const FObjectInitializer& ObjectInitializer);

};

