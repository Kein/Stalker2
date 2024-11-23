#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDetailsElementType.h"
#include "PDAPage.h"
#include "JournalPage.generated.h"

class UHintInputController;
class UPDAQuestButton;
class UPDAQuestDetails;
class UPDAQuestPanel;

UCLASS(EditInlineNew)
class STALKER2_API UJournalPage : public UPDAPage {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPDAQuestButton* CurrentQuestButton;
    
    UPROPERTY(Instanced)
    UPDAQuestButton* DoneQuestButton;
    
    UPROPERTY(Instanced)
    UPDAQuestPanel* PDAQuestPanel;
    
    UPROPERTY(Instanced)
    UPDAQuestDetails* QuestDetails;
    
    UPROPERTY(Instanced)
    UHintInputController* SelectQuestHint;
    
    UPROPERTY(Instanced)
    UHintInputController* HintSelectPanelLeft;
    
    UPROPERTY(Instanced)
    UHintInputController* HintSelectPanelRight;
    
    UPROPERTY(Instanced)
    UHintInputController* ButtonHintTransitionToMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MainQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SecondaryQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FinishQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FeilQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CanceledQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SelectInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor MainQuestTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DefaultQuestTint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float QuestSlotListScrollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TabTransitionTime;
    
public:
    UJournalPage();

protected:
    UFUNCTION()
    void UpdateStageOnDetailed();
    
    UFUNCTION()
    void UpdateHoverDetailsElement(const bool bHovered, const EDetailsElementType ElementType);
    
    UFUNCTION()
    void UpdateButton(const int32 IndexUpdateButton);
    
public:
    UFUNCTION()
    void UIPDATransitionToMarkerPosition();
    
    UFUNCTION()
    void UIPDANavigationUp();
    
    UFUNCTION()
    void UIPDANavigationSelectPanelRight();
    
    UFUNCTION()
    void UIPDANavigationSelectPanelLeft();
    
    UFUNCTION()
    void UIPDANavigationSelect();
    
    UFUNCTION()
    void UIPDANavigationRightHint();
    
    UFUNCTION()
    void UIPDANavigationRight();
    
    UFUNCTION()
    void UIPDANavigationReleased();
    
    UFUNCTION()
    void UIPDANavigationLeftHint();
    
    UFUNCTION()
    void UIPDANavigationLeft();
    
    UFUNCTION()
    void UIPDANavigationDown();
    
protected:
    UFUNCTION()
    void StageSlotHover();
    
public:
    UFUNCTION()
    void ShowDetails(bool bEmpty);
    
    UFUNCTION()
    void SelectedSlotWithMouse();
    
protected:
    UFUNCTION()
    void ClickButtonQuest(const FName ButtonId);
    
};

