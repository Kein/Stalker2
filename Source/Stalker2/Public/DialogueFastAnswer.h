#pragma once
#include "CoreMinimal.h"
#include "DialogueAnswer.h"
#include "OnClickFastAnswerDelegate.h"
#include "DialogueFastAnswer.generated.h"

class UHintSwitcher;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UDialogueFastAnswer : public UDialogueAnswer {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UHintSwitcher* HintSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldMoveOnRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StylePrefix;
    
    UPROPERTY(BlueprintAssignable)
    FOnClickFastAnswer OnClickFastAnswer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SkifChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SparkChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* VartaChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* StrelokChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* StalkerChoiceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* NoonChoiceIcon;
    
    UDialogueFastAnswer();

    UFUNCTION()
    void SelectAnswer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostSelectAnswer();
    
    UFUNCTION(BlueprintCallable)
    void EndSelectAnswer();
    
};

