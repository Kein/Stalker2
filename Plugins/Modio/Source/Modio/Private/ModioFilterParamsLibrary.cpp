#include "ModioFilterParamsLibrary.h"

UModioFilterParamsLibrary::UModioFilterParamsLibrary() {
}

FModioFilterParams UModioFilterParamsLibrary::WithTags(FModioFilterParams& Filter, const TArray<FString>& NewTags) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::WithTag(FModioFilterParams& Filter, const FString& Tag) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::WithoutTags(FModioFilterParams& Filter, const TArray<FString>& NewTags) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::WithoutTag(FModioFilterParams& Filter, const FString& Tag) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::SortBy(FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::PagedResults(FModioFilterParams& Filter, int64 PageNumber, int64 PageSize) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::NameContainsStrings(FModioFilterParams& Filter, const TArray<FString>& SearchStrings) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::NameContains(FModioFilterParams& Filter, const FString& SearchString) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::MetadataLike(FModioFilterParams& Filter, const FString& SearchString) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::MatchingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::MarkedLiveBefore(FModioFilterParams& Filter, FDateTime LiveBefore) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::MarkedLiveAfter(FModioFilterParams& Filter, FDateTime LiveAfter) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::IndexedResults(FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount) {
    return FModioFilterParams{};
}

FModioFilterParams UModioFilterParamsLibrary::ExcludingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs) {
    return FModioFilterParams{};
}


