#pragma once
#include "CoreMinimal.h"
#include "EventData.h"
#include "MeshesData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FMeshesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEventData> EventsData;
    
    STALKER2_API FMeshesData();
};

