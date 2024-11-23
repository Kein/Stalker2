#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "EPhysicalMaterialType.h"
#include "GameplayPhysicalMaterial.generated.h"

UCLASS(CollapseCategories)
class STALKER2_API UGameplayPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCustomPhysicalMaterialType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhysicalMaterialType CustomPhysicalMaterialType;
    
public:
    UGameplayPhysicalMaterial();

};

