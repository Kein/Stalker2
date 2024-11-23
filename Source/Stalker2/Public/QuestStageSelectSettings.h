#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestStageSelectSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FQuestStageSelectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CollorMein;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CollorSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    STALKER2_API FQuestStageSelectSettings();
};

