#include "ModioUIAsyncLoader.h"

UModioUIAsyncLoader::UModioUIAsyncLoader() {
    this->CurrentState = EModioUIAsyncOperationWidgetState::InProgress;
}

void UModioUIAsyncLoader::Retry() {
}

void UModioUIAsyncLoader::OnRetryRequested() {
}

void UModioUIAsyncLoader::NativeHandleAsyncOperationStateChange(EModioUIAsyncOperationWidgetState NewState) {
}


