#include "LayeredItemImage.h"

ULayeredItemImage::ULayeredItemImage() {
    this->PathSuffix = TEXT("_upgrade");
    this->MainImage = NULL;
    this->ImagesOverlay = NULL;
    this->LowPrioOverlay = NULL;
    this->HighPrioOverlay = NULL;
    this->IconsAsyncRequestCounter = 0;
    this->ImageWidgetClass = NULL;
}


