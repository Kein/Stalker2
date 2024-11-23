#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "DialogFolder.generated.h"

class UDialogueAnswer;
class UProgressBarWidget;
class USlider;
class UTextWidget;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UDialogFolder : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDialogueAnswer> AnswerSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HoverFolderStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName UnhoverFolderStyleId;
    
    UPROPERTY(Instanced)
    UTextWidget* NameText;
    
    UPROPERTY(Instanced)
    UVerticalBox* AnswerContainer;
    
    UPROPERTY(Instanced)
    UProgressBarWidget* WFRTimer;
    
    UPROPERTY(Instanced)
    USlider* WFRSlider;
    
    UDialogFolder();

};

