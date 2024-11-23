#pragma once
#include "CoreMinimal.h"
#include "AttachMeshesData.generated.h"

class UMeshComponent;

USTRUCT()
struct STALKER2_API FAttachMeshesData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UMeshComponent*> ArrayMeshes;
    
    FAttachMeshesData();
};

