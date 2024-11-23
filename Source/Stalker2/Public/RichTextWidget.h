#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "RichTextWidget.generated.h"

UCLASS()
class STALKER2_API URichTextWidget : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStyleManager;
    
    URichTextWidget();

};

