#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "EJournalState.h"
#include "EQuestRewardType.h"
#include "OnHoveredDetailsElementDelegate.h"
#include "OnStageSlotHoverDelegate.h"
#include "OnUpdateQuestListDelegate.h"
#include "QuestStageSelectSettings.h"
#include "QuestStatusSettings.h"
#include "TaskStatusSettings.h"
#include "PDAQuestDetails.generated.h"

class UHorizontalBox;
class UImage;
class UPDAQuestDescription;
class UPDAQuestTaskContainer;
class UPDAQuestTaskSlot;
class UPanelWidget;
class UTextWidget;
class UTexture2D;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UPDAQuestDetails : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UVerticalBox* QuestInfoBox;
    
    UPROPERTY(Instanced)
    UImage* QuestLogo;
    
    UPROPERTY(Instanced)
    UTextWidget* TaskText;
    
    UPROPERTY(Instanced)
    UTextWidget* DescriptionText;
    
    UPROPERTY(Instanced)
    UTextWidget* RewardText;
    
    UPROPERTY(Instanced)
    UPanelWidget* RewardBlock;
    
    UPROPERTY(Instanced)
    UPDAQuestDescription* DescriptionQuest;
    
    UPROPERTY(Instanced)
    UTextWidget* QuestNameText;
    
    UPROPERTY(Instanced)
    UTextWidget* QuestStatusText;
    
    UPROPERTY(Instanced)
    UHorizontalBox* RewardContainer;
    
    UPROPERTY(Instanced)
    UPDAQuestTaskContainer* TaskContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EJournalState, FQuestStatusSettings> StatusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* DefaultQuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EJournalState, FTaskStatusSettings> TaskStatusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuestStageSelectSettings SelectedStatusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuestStageSelectSettings UnSelectedStatusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EQuestRewardType, UTexture2D*> RewardSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleTextIdMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleTextIdSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleIdTaitlMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleIdTaitlSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleTextIdDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TaskListSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString TaskLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DescriptionLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RewardLocalizationSID;
    
    UPROPERTY(BlueprintAssignable)
    FOnHoveredDetailsElement OnHoveredDetailsElement;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateQuestList OnUpdateQuestList;
    
    UPROPERTY(BlueprintAssignable)
    FOnStageSlotHover OnStageSlotHover;
    
    UPDAQuestDetails();

protected:
    UFUNCTION()
    void UpdateStageSlotHover();
    
    UFUNCTION()
    void UpdateStageHover(bool bIsStageHovered);
    
    UFUNCTION()
    void UpdateDescriptionHover(bool bIsHovered);
    
    UFUNCTION()
    void StageClick(UPDAQuestTaskSlot* InSlot);
    
};

