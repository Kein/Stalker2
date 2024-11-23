#include "ModioCommonImage.h"
#include "Templates/SubclassOf.h"

UModioCommonImage::UModioCommonImage() {
    this->ModioStyle = NULL;
    this->ImageFrame = NULL;
    this->Image = NULL;
    this->LoadedImageTexture = NULL;
}

void UModioCommonImage::SetStyle(TSubclassOf<UModioCommonImageStyle> InStyle) {
}



