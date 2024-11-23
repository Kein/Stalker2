#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ProgressMaterialData.generated.h"

USTRUCT(BlueprintType)
struct FProgressMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush ProgressMaterialBrush;
    
    UPROPERTY(EditAnywhere)
    FName MaterialParameterName;
    
    STALKER2_API FProgressMaterialData();
};

