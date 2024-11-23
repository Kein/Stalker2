#include "ModioCommonDialogLibrary.h"

UModioCommonDialogLibrary::UModioCommonDialogLibrary() {
}

UModioCommonDialogInfo* UModioCommonDialogLibrary::CreateUninstallDialogInfo(const FModioModInfo& ModInfo) {
    return NULL;
}

UModioCommonDialogInfo* UModioCommonDialogLibrary::CreateManualDialogInfo(const FText& TitleText, const FText& DialogText) {
    return NULL;
}

UModioCommonDialogInfo* UModioCommonDialogLibrary::CreateErrorDialogInfo(const FModioErrorCode& ErrorCode, const FText& TitleText) {
    return NULL;
}

UModioCommonDialogInfo* UModioCommonDialogLibrary::CreateConfirmUninstallDialogInfo(const FModioModInfo& ModInfo) {
    return NULL;
}


