#include "FileMediaOutput.h"

UFileMediaOutput::UFileMediaOutput() {
    this->bOverrideDesiredSize = false;
    this->bOverridePixelFormat = false;
    this->DesiredPixelFormat = EFileMediaOutputPixelFormat::B8G8R8A8;
    this->bInvertAlpha = true;
}


