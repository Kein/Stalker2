#pragma once
#include "CoreMinimal.h"
#include "DialogAnswersStyles.generated.h"

USTRUCT(BlueprintType)
struct FDialogAnswersStyles {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString AnswerDisabled;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerDefault;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerDefaultHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerDefaultRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerDefaultHoveredRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerQuest;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerQuestHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerQuestRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerQuestHoveredRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerWithDangerAction;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerWithDangerActionHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerWithGetAction;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerWithGetActionHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerWithGiveAction;
    
    UPROPERTY(EditDefaultsOnly)
    FString AnswerWithGiveActionHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionDisabled;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionDefault;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionDefaultHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionQuest;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionQuestHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionDanger;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionDangerHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionGet;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionGetHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionGive;
    
    UPROPERTY(EditDefaultsOnly)
    FString ActionGiveHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundDisabled;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundDefault;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundDefaultHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundDefaultRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundDefaultHoveredRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundQuest;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundQuestHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundQuestRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundQuestHoveredRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundDanger;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundDangerHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundGet;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundGetHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundGive;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackgroundGiveHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconDisabled;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconDefault;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconDefaultHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconDefaultRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconDefaultHoveredRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconQuest;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconQuestHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconQuestRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconQuestHoveredRead;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconDanger;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconDangerHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconGet;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconGetHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconGive;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconGiveHovered;
    
    STALKER2_API FDialogAnswersStyles();
};

