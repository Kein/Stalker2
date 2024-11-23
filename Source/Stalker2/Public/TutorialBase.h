#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "TutorialBase.generated.h"

class UOverlay;
class URichTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API UTutorialBase : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* Text;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UOverlay* TutorialOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString HintFont;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float DurationInSeconds;
    
public:
    UTutorialBase();

};

