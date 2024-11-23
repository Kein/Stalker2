#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "Layout/Margin.h"
#include "EQuestState.h"
#include "Templates/SubclassOf.h"
#include "QuestNotificationDataAsset.generated.h"

class UTexture2D;
class UUserWidget;

UCLASS(BlueprintType)
class STALKER2_API UQuestNotificationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bEnableDelayBetweenNotifications;
    
    UPROPERTY(EditDefaultsOnly)
    float TimerRate;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayAfterShow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName TextureParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    float HoldTimeThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* BackgroundImageTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* LeftLineTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* DotsLeftTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* DotsRightTexture;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSubclassOf<UUserWidget> TaskClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxTaskNumber;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxTitleLen;
    
    UPROPERTY(EditDefaultsOnly)
    FString AppendedEndText;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EQuestState, FLinearColor> ColorsPerState;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor HeaderColorMainQuest;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor HeaderColorSideQuest;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin TaskPadding;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* TrackQuestIcon;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* UntrackQuestIcon;
    
    UPROPERTY(EditDefaultsOnly)
    FString NotNecessaryStyleId;
    
    UPROPERTY(EditDefaultsOnly)
    FName StyleTextIdMain;
    
    UPROPERTY(EditDefaultsOnly)
    FString NotNecessaryLocalizationSID;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableDelayForHide;
    
    UPROPERTY(EditDefaultsOnly)
    float QuestNotificationLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float QuestNotificationLifeTimeTimerRate;
    
    UPROPERTY(EditDefaultsOnly)
    FString OpenJournalString;
    
    UPROPERTY(EditDefaultsOnly)
    FString TrackQuestString;
    
    UPROPERTY(EditDefaultsOnly)
    FString UnTrackQuestString;
    
    UPROPERTY(EditDefaultsOnly)
    FString QuestUpdatedL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString QuestFailedL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString QuestFinishedL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString QuestCancelledL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString NewQuestL10n;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float RemainingTimeAfterHintAction;
    
public:
    UQuestNotificationDataAsset();

};

