#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "TextSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FTextSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FontStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle FontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WrappingTextAt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETextTransformPolicy TextTransformPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LineHeightPercentage;
    
    FTextSettings();
};

