#include "ModioCommonImageBase.h"

UModioCommonImageBase::UModioCommonImageBase() {
    this->bLoadFailed = false;
    this->bIsLoading = false;
}

void UModioCommonImageBase::SetImageTexture_Implementation(UTexture2DDynamic* Texture) {
}

void UModioCommonImageBase::OnStartLoadNewImage_Implementation() {
}

void UModioCommonImageBase::OnLoadNewImageError_Implementation() {
}

void UModioCommonImageBase::LoadImageFromLogo(FModioModID ModId, EModioLogoSize LogoSize) {
}

void UModioCommonImageBase::LoadImageFromGallery(FModioModID ModId, EModioGallerySize GallerySize, int32 Index) {
}

void UModioCommonImageBase::LoadImageFromFileAsync(FModioImageWrapper ImageLoader) {
}

void UModioCommonImageBase::LoadImageFromAvatar(FModioModID ModId, EModioAvatarSize AvatarSize) {
}


