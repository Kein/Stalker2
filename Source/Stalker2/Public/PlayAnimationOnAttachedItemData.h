#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationOnAttachedItemData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct STALKER2_API FPlayAnimationOnAttachedItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttachmentName;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* AnimationAsset;
    
    FPlayAnimationOnAttachedItemData();
};

