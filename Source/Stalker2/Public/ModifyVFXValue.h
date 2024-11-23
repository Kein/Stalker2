#pragma once
#include "CoreMinimal.h"
#include "ModifyVFXValue.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FModifyVFXValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttachmentName;
    
    UPROPERTY(EditAnywhere)
    FName ValueToBeModified;
    
    UPROPERTY(EditAnywhere)
    float ValueModifierPerSec;
    
    FModifyVFXValue();
};

