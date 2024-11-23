#pragma once
#include "CoreMinimal.h"
#include "MoveSettings.generated.h"

USTRUCT(BlueprintType)
struct FMoveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedMapZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    STALKER2_API FMoveSettings();
};

