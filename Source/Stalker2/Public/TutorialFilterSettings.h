#pragma once
#include "CoreMinimal.h"
#include "EPDATutorialCategory.h"
#include "TutorialFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct FTutorialFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnableFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPDATutorialCategory Filter;
    
    STALKER2_API FTutorialFilterSettings();
};

