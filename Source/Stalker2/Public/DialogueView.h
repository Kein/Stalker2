#pragma once
#include "CoreMinimal.h"
#include "DialogAnswersStyles.h"
#include "ViewBaseExtended.h"
#include "DialogueView.generated.h"

class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UDialogueView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogAnswersStyles AswersStyles;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bShouldShowAnimation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ShowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DialogTimeDelay;
    
public:
    UDialogueView();

};

