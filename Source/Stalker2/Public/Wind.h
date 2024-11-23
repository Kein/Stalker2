#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Wind.generated.h"

USTRUCT(BlueprintType)
struct FWind {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FVector2D FoliageWindDirection;
    
    UPROPERTY(VisibleAnywhere)
    float FoliageWindIntensity;
    
    UPROPERTY(VisibleAnywhere)
    FVector2D PreviousFoliageWindDirection;
    
    UPROPERTY(VisibleAnywhere)
    float PreviousFoliageWindIntensity;
    
    UPROPERTY(VisibleAnywhere)
    float Intensity;
    
    UPROPERTY(EditAnywhere)
    float WindDirectionChangeIntensity;
    
    UPROPERTY(VisibleAnywhere)
    bool bLockedDirection;
    
    UPROPERTY(VisibleAnywhere)
    FVector2D Direction;
    
    UPROPERTY(VisibleAnywhere)
    FVector2D TargetDirection;
    
    UPROPERTY(VisibleAnywhere)
    FVector2D PreviousDirection;
    
public:
    STALKER2_API FWind();
};

