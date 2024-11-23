#include "ModioExampleLibrary.h"

UModioExampleLibrary::UModioExampleLibrary() {
}

void UModioExampleLibrary::ListUserSubscriptionAsync(const FModioFilterParams& FilterParams, FOnListAllModsDelegate Callback) {
}

EModioLogoSize UModioExampleLibrary::GetLogoThumbnailSize() {
    return EModioLogoSize::Thumb320;
}

EModioLogoSize UModioExampleLibrary::GetLogoFullSize() {
    return EModioLogoSize::Thumb320;
}

EModioAvatarSize UModioExampleLibrary::GetAvatarThumbnailSize() {
    return EModioAvatarSize::Original;
}


