#pragma once
#include "CoreMinimal.h"
#include "RebuildData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FRebuildData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName ParentSocketName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsFlipped;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UStaticMesh* Mesh;
    
    STALKER2_API FRebuildData();
};

