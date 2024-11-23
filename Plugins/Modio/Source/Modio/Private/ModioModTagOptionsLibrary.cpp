#include "ModioModTagOptionsLibrary.h"

UModioModTagOptionsLibrary::UModioModTagOptionsLibrary() {
}

TArray<FModioModTagInfo> UModioModTagOptionsLibrary::GetTags(const FModioModTagOptions& ModTags) {
    return TArray<FModioModTagInfo>();
}

FModioPagedResult UModioModTagOptionsLibrary::GetPagedResult(const FModioModTagOptions& ModTags) {
    return FModioPagedResult{};
}


