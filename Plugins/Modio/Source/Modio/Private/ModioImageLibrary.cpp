#include "ModioImageLibrary.h"

UModioImageLibrary::UModioImageLibrary() {
}

void UModioImageLibrary::LoadAsync(const FModioImageWrapper& Image, FOnLoadImageDelegate OnImageLoaded) {
}

UTexture2DDynamic* UModioImageLibrary::GetTexture(const FModioImageWrapper& Image) {
    return NULL;
}

EModioImageState UModioImageLibrary::GetState(const FModioImageWrapper& Image) {
    return EModioImageState::OnDisc;
}

FVector2D UModioImageLibrary::GetLogoSize(UTexture* Logo, EModioLogoSize LogoSize) {
    return FVector2D{};
}

FVector2D UModioImageLibrary::GetGallerySize(UTexture* GalleryImage, EModioGallerySize GallerySize) {
    return FVector2D{};
}

FVector2D UModioImageLibrary::GetAvatarSize(UTexture* avatar, EModioAvatarSize AvatarSize) {
    return FVector2D{};
}


