#include "ModioCommonModGalleryEntry.h"
#include "Templates/SubclassOf.h"

UModioCommonModGalleryEntry::UModioCommonModGalleryEntry() {
    this->ModioStyle = NULL;
    this->ModImage = NULL;
}

void UModioCommonModGalleryEntry::SetStyle(TSubclassOf<UModioCommonModGalleryEntryStyle> InStyle) {
}


