#include "ModioCommonModTagGroupList.h"

UModioCommonModTagGroupList::UModioCommonModTagGroupList() {
    this->TagEntryClass = NULL;
    this->TagGroupNameTextBlock = NULL;
    this->TagsContainer = NULL;
}

void UModioCommonModTagGroupList::UpdateSelection_Implementation(UModioCommonModTagEntry* ModTagEntry, bool bIsSelected) {
}

void UModioCommonModTagGroupList::SetTagsGroup_Implementation(const FModioModTagInfo& TagInfo) {
}

bool UModioCommonModTagGroupList::SetSelectedTagGroupValues_Implementation(const TArray<FString>& TagGroupValues, bool bSelect) {
    return false;
}

void UModioCommonModTagGroupList::ResetTagsSelection_Implementation() {
}

bool UModioCommonModTagGroupList::GetSelectedTagGroupValues_Implementation(TArray<FString>& OutSelectedTagGroupValues) const {
    return false;
}


