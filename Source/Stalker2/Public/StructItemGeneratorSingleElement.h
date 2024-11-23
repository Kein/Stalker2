#pragma once
#include "CoreMinimal.h"
#include "EWeaponGenerationFlags.h"
#include "StructItemGeneratorElementCountedPart.h"
#include "StructItemGeneratorSingleElement.generated.h"

USTRUCT()
struct STALKER2_API FStructItemGeneratorSingleElement : public FStructItemGeneratorElementCountedPart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Chance;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    float MinDurability;
    
    UPROPERTY(EditAnywhere)
    float MaxDurability;
    
    UPROPERTY(EditAnywhere)
    EWeaponGenerationFlags WeaponGenerationFlags;
    
    FStructItemGeneratorSingleElement();
};

