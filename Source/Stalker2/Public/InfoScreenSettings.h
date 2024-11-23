#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InfoScreenSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FInfoScreenSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSoftObjectPath Image;
    
    FInfoScreenSettings();
};

