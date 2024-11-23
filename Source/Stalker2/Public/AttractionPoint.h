#pragma once
#include "CoreMinimal.h"
#include "AttractionPoint.generated.h"

class AActor;
class USkeletalMeshComponent;

USTRUCT()
struct FAttractionPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> LookAtActor;
    
    UPROPERTY(Export)
    TWeakObjectPtr<USkeletalMeshComponent> SkeletalMesh;
    
    UPROPERTY()
    FName SID;
    
    STALKER2_API FAttractionPoint();
};

