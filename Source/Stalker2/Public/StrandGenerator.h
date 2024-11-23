#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplinePointMeshData.h"
#include "StrandFinalData.h"
#include "StrandGenerator.generated.h"

class USplineComponent;

UCLASS()
class STALKER2_API AStrandGenerator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSplinePointMeshData MeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FSplinePointMeshData> MeshOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseStartSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseStopSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAutoAdjusting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyRightAngle;
    
    AStrandGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FStrandFinalData GetFinalStrandData();
    
};

