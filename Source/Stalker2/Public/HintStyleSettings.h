#pragma once
#include "CoreMinimal.h"
#include "EHintDescriptionSettings.h"
#include "HintStyleSettings.generated.h"

USTRUCT(BlueprintType)
struct FHintStyleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EHintDescriptionSettings DescriptionSettings;
    
    UPROPERTY(EditAnywhere)
    FName HintDescriptionFontStyleSID;
    
    UPROPERTY(EditAnywhere)
    FString HintDescriptionSID;
    
    UPROPERTY(EditAnywhere)
    float HintAndDescriptionGap;
    
    UPROPERTY(EditAnywhere)
    float HintHeight;
    
    STALKER2_API FHintStyleSettings();
};

