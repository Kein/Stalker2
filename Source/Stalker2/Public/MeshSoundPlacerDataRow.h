#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MeshCategory.h"
#include "MeshSoundPlacerDataRow.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FMeshSoundPlacerDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RaycastSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RubberBandDistanceAtWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RubberBandDistanceAtRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RubberBandDistanceAtSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RubberBandSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> StopAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMeshCategory> MeshCategories;
    
    STALKER2_API FMeshSoundPlacerDataRow();
};

