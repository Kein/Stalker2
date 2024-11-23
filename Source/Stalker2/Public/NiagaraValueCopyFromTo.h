#pragma once
#include "CoreMinimal.h"
#include "NiagaraValueCopyFromTo.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FNiagaraValueCopyFromTo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttachmentName;
    
    UPROPERTY(EditAnywhere)
    FName CopyFrom;
    
    UPROPERTY(EditAnywhere)
    FName CopyTo;
    
    FNiagaraValueCopyFromTo();
};

