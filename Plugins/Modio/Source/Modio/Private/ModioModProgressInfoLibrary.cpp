#include "ModioModProgressInfoLibrary.h"

UModioModProgressInfoLibrary::UModioModProgressInfoLibrary() {
}

FModioUnsigned64 UModioModProgressInfoLibrary::GetTotalProgress(const FModioModProgressInfo& Info, EModioModProgressState State) {
    return FModioUnsigned64{};
}

EModioModProgressState UModioModProgressInfoLibrary::GetCurrentState(const FModioModProgressInfo& Info) {
    return EModioModProgressState::Initializing;
}

FModioUnsigned64 UModioModProgressInfoLibrary::GetCurrentProgress(const FModioModProgressInfo& Info, EModioModProgressState State) {
    return FModioUnsigned64{};
}


