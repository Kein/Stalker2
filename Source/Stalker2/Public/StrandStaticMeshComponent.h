#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "StrandStaticMeshComponent.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FStrandStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector WorldPos;
    
    UPROPERTY(BlueprintReadOnly)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator WorldRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector RelativeScale;
    
    STALKER2_API FStrandStaticMeshComponent();
};

