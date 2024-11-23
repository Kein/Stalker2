#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Anomaly.h"
#include "ExpulsionAnomaly.generated.h"

class UCurveFloat;
class UGeometryCacheComponent;
class UMaterialInterface;
class USphereComponent;

UCLASS()
class STALKER2_API AExpulsionAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USphereComponent* ActivationSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGeometryCacheComponent* ShapeGeometryCache;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ShapeGeometryMaterial;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath GeometryCachePath;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* PushDistanceDelayCurve;
    
public:
    AExpulsionAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnBoltCollided(const FVector& LocalPoint);
    
};

