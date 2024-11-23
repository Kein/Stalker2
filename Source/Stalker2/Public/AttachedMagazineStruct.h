#pragma once
#include "CoreMinimal.h"
#include "AttachedMagazineStruct.generated.h"

class UMeshComponent;

USTRUCT()
struct STALKER2_API FAttachedMagazineStruct {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMeshComponent* MagazineMesh;
    
    FAttachedMagazineStruct();
};

