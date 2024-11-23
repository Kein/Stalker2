#include "ModioModCollectionLibrary.h"

UModioModCollectionLibrary::UModioModCollectionLibrary() {
}

FString UModioModCollectionLibrary::GetPath(const FModioModCollectionEntry& Entry) {
    return TEXT("");
}

EModioModState UModioModCollectionLibrary::GetModState(const FModioModCollectionEntry& Entry) {
    return EModioModState::InstallationPending;
}

FModioModInfo UModioModCollectionLibrary::GetModProfile(const FModioModCollectionEntry& Entry) {
    return FModioModInfo{};
}

FModioModID UModioModCollectionLibrary::GetId(const FModioModCollectionEntry& Entry) {
    return FModioModID{};
}


