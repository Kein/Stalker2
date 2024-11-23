#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "StrandSplineComponent.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FStrandSplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector WorldPos;
    
    UPROPERTY(BlueprintReadOnly)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly)
    FVector StartPos;
    
    UPROPERTY(BlueprintReadOnly)
    FVector StartTangent;
    
    UPROPERTY(BlueprintReadOnly)
    FVector EndPos;
    
    UPROPERTY(BlueprintReadOnly)
    FVector EndTangent;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector RelativeScale;
    
    STALKER2_API FStrandSplineComponent();
};

