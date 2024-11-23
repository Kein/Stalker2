#pragma once
#include "CoreMinimal.h"
#include "PoseSearchMovementTagConfigs.h"
#include "PoseSearchLocomotionAnimCollectionData.generated.h"

class UPoseSearchLocomotionDescriptor;
class UPoseSearchSearchableAsset;

USTRUCT(BlueprintType)
struct FPoseSearchLocomotionAnimCollectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPoseSearchSearchableAsset* Searchable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPoseSearchSearchableAsset* SearchableRelaxState;
    
    UPROPERTY(EditAnywhere)
    UPoseSearchLocomotionDescriptor* Descriptor;
    
    UPROPERTY(EditAnywhere)
    UPoseSearchLocomotionDescriptor* DescriptorRelaxState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseSearchMovementTagConfigs MovementTagConfigs;
    
    STALKER2_API FPoseSearchLocomotionAnimCollectionData();
};

