#pragma once
#include "CoreMinimal.h"
#include "ModioModTag.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString Tag;
    
    FModioModTag();
};

