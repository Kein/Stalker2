#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CaptureConfig.generated.h"

USTRUCT(BlueprintType)
struct FCaptureConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CaptureAngle;
    
    UPROPERTY(EditAnywhere)
    float CaptureWarmup;
    
    UPROPERTY(EditAnywhere)
    float TileLimitsForZCoords;
    
    UPROPERTY(EditAnywhere)
    float LoadTileOverlapSize;
    
    UPROPERTY(EditAnywhere)
    float CaptureTileOverlap;
    
    UPROPERTY(EditAnywhere)
    FVector CaptureStartLocation;
    
    UPROPERTY(EditAnywhere)
    int32 WorldPartitionTiles;
    
    UPROPERTY(EditAnywhere)
    int32 LargeImagesNum;
    
    UPROPERTY(EditAnywhere)
    float IterativeCellSize;
    
    UPROPERTY(EditAnywhere)
    uint32 SingleTileMinimapResolution;
    
    UPROPERTY(EditAnywhere)
    float TargetGamma;
    
    UPROPERTY(EditAnywhere)
    bool bCreateFoliage;
    
    STALKER2_API FCaptureConfig();
};

