#pragma once
#include "CoreMinimal.h"
#include "SnapshotMapping.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FSnapshotMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceNodeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TargetNodeTag;
    
    FSnapshotMapping();
};

