#include "ModioModDependenciesLibrary.h"

UModioModDependenciesLibrary::UModioModDependenciesLibrary() {
}

FModioPagedResult UModioModDependenciesLibrary::GetPagedResult(const FModioModDependencyList& ModTags) {
    return FModioPagedResult{};
}

TArray<FModioModDependency> UModioModDependenciesLibrary::GetDependencies(const FModioModDependencyList& ModTags) {
    return TArray<FModioModDependency>();
}


