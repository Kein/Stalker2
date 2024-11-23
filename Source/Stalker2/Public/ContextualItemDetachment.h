#pragma once
#include "CoreMinimal.h"
#include "ContextualItemDetachment.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FContextualItemDetachment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttachmentName;
    
    FContextualItemDetachment();
};

