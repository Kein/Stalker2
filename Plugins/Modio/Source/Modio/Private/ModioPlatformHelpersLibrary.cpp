#include "ModioPlatformHelpersLibrary.h"

UModioPlatformHelpersLibrary::UModioPlatformHelpersLibrary() {
}

EModioPortal UModioPlatformHelpersLibrary::GetDefaultPortalForCurrentPlatform() {
    return EModioPortal::None;
}

EModioAuthenticationProvider UModioPlatformHelpersLibrary::GetDefaultAuthProviderForCurrentPlatform() {
    return EModioAuthenticationProvider::XboxLive;
}

EModioPlatformName UModioPlatformHelpersLibrary::GetCurrentPlatform() {
    return EModioPlatformName::Windows;
}


