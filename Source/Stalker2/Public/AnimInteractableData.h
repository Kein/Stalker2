#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AnimInteractableData.generated.h"

USTRUCT(BlueprintType)
struct FAnimInteractableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector InteractionDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldLerpToInteractable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LerpSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldLerpIn3D;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldToggleFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> CollisionType;
    
    STALKER2_API FAnimInteractableData();
};

