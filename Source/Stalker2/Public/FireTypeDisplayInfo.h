#pragma once
#include "CoreMinimal.h"
#include "FireTypeDisplayInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFireTypeDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayTextSid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* DisplayTexture;
    
    STALKER2_API FFireTypeDisplayInfo();
};

