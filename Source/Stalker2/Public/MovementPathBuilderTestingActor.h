#pragma once
#include "CoreMinimal.h"
#include "NavigationTestingActor.h"
#include "DebugRestrictionSettings.h"
#include "EPathBuilderPathType.h"
#include "VelocityDebug.h"
#include "MovementPathBuilderTestingActor.generated.h"

class AActor;

UCLASS()
class STALKER2_API AMovementPathBuilderTestingActor : public ANavigationTestingActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EPathBuilderPathType PathType;
    
    UPROPERTY(EditAnywhere)
    float MaxPathLength;
    
    UPROPERTY(EditAnywhere)
    TArray<FVelocityDebug> Velocities;
    
    UPROPERTY(EditAnywhere)
    uint64 DesirableVelocitiesMask;
    
    UPROPERTY(EditAnywhere)
    bool bDetailedDrawing;
    
    UPROPERTY(EditAnywhere)
    bool bShowCircles;
    
    UPROPERTY(EditAnywhere)
    bool bShowKeyPoints;
    
    UPROPERTY(EditAnywhere)
    bool bShowPathSectors;
    
    UPROPERTY(EditAnywhere)
    bool bShowPathFilteredSectors;
    
    UPROPERTY(EditAnywhere)
    float CircleRadius;
    
    UPROPERTY(EditAnywhere)
    float RotationAngle;
    
    UPROPERTY(EditAnywhere)
    bool bClockwise;
    
    UPROPERTY(EditAnywhere)
    bool bSmoothPath;
    
    UPROPERTY(EditAnywhere)
    bool bCorridor;
    
    UPROPERTY(EditAnywhere)
    bool bShowNavmeshSegmentTest;
    
    UPROPERTY(EditAnywhere)
    FDebugRestrictionSettings RestrictionSettings;
    
    UPROPERTY(EditAnywhere)
    AActor* ExpensiveActor;
    
    UPROPERTY(EditAnywhere)
    uint32 DrawPathIndex;
    
    UPROPERTY(EditAnywhere)
    bool bShowSampled;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float AdvancedPathfindingTime;
    
public:
    AMovementPathBuilderTestingActor(const FObjectInitializer& ObjectInitializer);

};

