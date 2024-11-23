#pragma once
#include "CoreMinimal.h"
#include "SplinePointMeshData.generated.h"

class UPrefabAsset;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FSplinePointMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* StrandStaticMesh;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* SeparatorStaticMesh;
    
    UPROPERTY(EditAnywhere)
    UPrefabAsset* PrefabStrandMesh;
    
    UPROPERTY(EditAnywhere)
    UPrefabAsset* PrefabSeparatorMesh;
    
    STALKER2_API FSplinePointMeshData();
};

