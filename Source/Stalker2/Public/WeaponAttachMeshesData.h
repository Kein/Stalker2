#pragma once
#include "CoreMinimal.h"
#include "AttachMeshesData.h"
#include "AttachedMagazineStruct.h"
#include "EAttachType.h"
#include "WeaponAttachMeshesData.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FWeaponAttachMeshesData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<EAttachType, FAttachMeshesData> AttachMeshesMap;
    
    UPROPERTY(Instanced)
    TArray<UMeshComponent*> BulletMeshes;
    
    UPROPERTY()
    TArray<FAttachedMagazineStruct> MagazineMeshes;
    
    UPROPERTY(Instanced)
    TArray<UMeshComponent*> WeaponStaticMeshParts;
    
    FWeaponAttachMeshesData();
};

