#include "WidgetPool.h"

UWidgetPool::UWidgetPool() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetInPoolClass = NULL;
}

UUserWidget* UWidgetPool::CreateWidgetByPool() {
    return NULL;
}


