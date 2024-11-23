#pragma once
#include "CoreMinimal.h"
#include "TutorialBase.h"
#include "TutorialSplash.generated.h"

class URichTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API UTutorialSplash : public UTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* TitleTutorText;
    
    UTutorialSplash();

};

