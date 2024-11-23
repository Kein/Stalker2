#include "ModioModInfoListLibrary.h"

UModioModInfoListLibrary::UModioModInfoListLibrary() {
}

FModioPagedResult UModioModInfoListLibrary::GetPagedResult(const FModioModInfoList& ModInfoList) {
    return FModioPagedResult{};
}

TArray<FModioModInfo> UModioModInfoListLibrary::GetMods(const FModioModInfoList& ModInfoList) {
    return TArray<FModioModInfo>();
}


