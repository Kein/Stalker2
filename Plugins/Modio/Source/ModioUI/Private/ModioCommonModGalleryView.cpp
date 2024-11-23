#include "ModioCommonModGalleryView.h"
#include "Templates/SubclassOf.h"

UModioCommonModGalleryView::UModioCommonModGalleryView() {
    this->bAutoBindInputAction = false;
    this->ModioStyle = NULL;
    this->GallerySize = EModioGallerySize::Thumb1280;
    this->LogoSize = EModioLogoSize::Thumb1280;
    this->ImageNavButtons = NULL;
    this->SelectedGalleryImage = NULL;
    this->PreviousButton = NULL;
    this->NextButton = NULL;
    this->ModGalleryLoader = NULL;
    this->ErrorWithRetryWidget = NULL;
}

void UModioCommonModGalleryView::SetStyle(TSubclassOf<UModioCommonModGalleryViewStyle> InStyle) {
}

void UModioCommonModGalleryView::SetPreviousButtonVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonModGalleryView::SetNextButtonVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonModGalleryView::RefreshGallery_Implementation() {
}

void UModioCommonModGalleryView::GoToPreviousImage_Implementation() {
}

void UModioCommonModGalleryView::GoToNextImage_Implementation() {
}

int32 UModioCommonModGalleryView::GetSelectedImageGalleryIndex_Implementation() {
    return 0;
}

int32 UModioCommonModGalleryView::GetNumGalleryImages_Implementation() {
    return 0;
}

void UModioCommonModGalleryView::AddGalleryImage_Implementation(int32 ImageGalleryIndex) {
}

void UModioCommonModGalleryView::AddDefaultGalleryImage_Implementation() {
}


