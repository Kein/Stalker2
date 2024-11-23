#pragma once
#include "CoreMinimal.h"
#include "DialogueView.h"
#include "StartSelectFolderType.h"
#include "DialogueViewFolder.generated.h"

class UDialogFolder;
class UDialogueAnswer;
class UImage;
class UOverlay;
class UScrollBox;
class USelectedAnswerMark;
class UUserWidget;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UDialogueViewFolder : public UDialogueView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefaultFolderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    StartSelectFolderType DefaultSelectFolderSlot;
    
    UPROPERTY(Instanced)
    USelectedAnswerMark* SelectedAnswerMark;
    
    UPROPERTY(Instanced)
    UDialogFolder* FolderSlot1;
    
    UPROPERTY(Instanced)
    UDialogFolder* FolderSlot2;
    
    UPROPERTY(Instanced)
    UDialogFolder* FolderSlot3;
    
    UPROPERTY(Instanced)
    UDialogFolder* FolderSlot4;
    
    UPROPERTY(Instanced)
    UDialogFolder* FolderSlot5;
    
    UPROPERTY(Instanced)
    UDialogFolder* FolderSlot6;
    
    UPROPERTY(Instanced)
    UScrollBox* AnswerContainer;
    
    UPROPERTY(Instanced)
    UOverlay* ReplicOverlay;
    
    UPROPERTY(Instanced)
    UVerticalBox* LeftButtonsContainer;
    
    UPROPERTY(Instanced)
    UVerticalBox* RightButtonsContainer;
    
    UPROPERTY(Instanced)
    UUserWidget* ButtonHintExit;
    
    UPROPERTY(Instanced)
    UUserWidget* ButtonHintUpgrade;
    
    UPROPERTY(Instanced)
    UUserWidget* ButtonHintTrade;
    
    UPROPERTY(Instanced, Transient)
    UImage* TimerProgressImage;
    
protected:
    UPROPERTY(Instanced, Transient)
    TArray<UDialogFolder*> FolderWidgets;
    
    UPROPERTY(Instanced, Transient)
    TArray<UDialogFolder*> FolderWidgetsPool;
    
public:
    UDialogueViewFolder();

    UFUNCTION()
    void UIDialogOpenUpgrade();
    
    UFUNCTION()
    void UIDialogOpenTrade();
    
    UFUNCTION()
    void UIDialogClose();
    
    UFUNCTION()
    void UIDialogAnswerUp();
    
    UFUNCTION()
    void UIDialogAnswerDown();
    
    UFUNCTION()
    void UIDialogAnswerConfirm();
    
    UFUNCTION()
    UDialogueAnswer* ChangeSelectFolder(const int32 IndexOldFolder, const int32 AxisMove);
    
};

