#pragma once
#include "CoreMinimal.h"
#include "DialogueSpeaker.h"
#include "DialogueAnswer.generated.h"

class UButton;
class UDataTable;
class UDebugTextWidgetBase;
class UDialogActionWidget;
class UImage;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UDialogueAnswer : public UDialogueSpeaker {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UButton* Button;
    
    UPROPERTY(Instanced)
    UDialogActionWidget* Action;
    
    UPROPERTY(Instanced)
    UImage* Back;
    
    UPROPERTY(Instanced)
    UImage* Line;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* HoverAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabledHoverEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BorderPadding;
    
    UPROPERTY(Instanced)
    UDebugTextWidgetBase* DebugTextLen;
    
    UPROPERTY(Instanced)
    UDebugTextWidgetBase* DebugTextRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HoverStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName NormalStyleId;
    
    UDialogueAnswer();

    UFUNCTION()
    void AnswerWidgetClick();
    
};

