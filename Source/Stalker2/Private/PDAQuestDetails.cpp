#include "PDAQuestDetails.h"

UPDAQuestDetails::UPDAQuestDetails() {
    this->QuestInfoBox = NULL;
    this->QuestLogo = NULL;
    this->TaskText = NULL;
    this->DescriptionText = NULL;
    this->RewardText = NULL;
    this->RewardBlock = NULL;
    this->DescriptionQuest = NULL;
    this->QuestNameText = NULL;
    this->QuestStatusText = NULL;
    this->RewardContainer = NULL;
    this->TaskContainer = NULL;
    this->DefaultQuestIcon = NULL;
    this->TaskListSizeMax = 35;
}

void UPDAQuestDetails::UpdateStageSlotHover() {
}

void UPDAQuestDetails::UpdateStageHover(bool bIsStageHovered) {
}

void UPDAQuestDetails::UpdateDescriptionHover(bool bIsHovered) {
}

void UPDAQuestDetails::StageClick(UPDAQuestTaskSlot* InSlot) {
}


