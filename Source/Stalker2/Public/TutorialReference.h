#pragma once
#include "CoreMinimal.h"
#include "TutorialBase.h"
#include "TutorialReference.generated.h"

class URichTextBlock;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UTutorialReference : public UTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* TitleBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* TitleLineBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* LineWithIconBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* TitleTutorText;
    
    UTutorialReference();

};

