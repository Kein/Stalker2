#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "WaterSurfaceObstructionResult.h"
#include "WaterContactController.generated.h"

class UWaterComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWaterContactController : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TArray<UWaterComponent*> ActiveWaterBodies;
    
public:
    UWaterContactController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FVector ProjectOwnerPositionOnWaterSurface() const;
    
    UFUNCTION(BlueprintPure)
    FWaterSurfaceObstructionResult IsPathToWaterSurfaceObstructed() const;
    
};

