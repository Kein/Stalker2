#pragma once
#include "CoreMinimal.h"
#include "DialogueView.h"
#include "FastDialogueView.generated.h"

class UAbstractProgressBar;
class UDialogueFastAnswer;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UFastDialogueView : public UDialogueView {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UVerticalBox* AnswerContainer;
    
    UPROPERTY(Instanced)
    UAbstractProgressBar* TimerWidget;
    
    UPROPERTY(Instanced)
    UDialogueFastAnswer* DialogueAnswerFastLeft;
    
    UPROPERTY(Instanced)
    UDialogueFastAnswer* DialogueAnswerFastRight;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsImportant;
    
    UFastDialogueView();

protected:
    UFUNCTION()
    void UpdateAfterClick();
    
public:
    UFUNCTION()
    void UIFastDialogSecondAnswer();
    
    UFUNCTION()
    void UIFastDialogFirstAnswer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostSelectAnswer(bool bIsRightAnswer);
    
    UFUNCTION(BlueprintCallable)
    void EndSelectAnswer(bool bIsRightAnswer);
    
protected:
    UFUNCTION()
    void BlockInput();
    
};

