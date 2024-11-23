#include "MediaCaptureOptions.h"

FMediaCaptureOptions::FMediaCaptureOptions() {
    this->OverrunAction = EMediaCaptureOverrunAction::Flush;
    this->Crop = EMediaCaptureCroppingType::None;
    this->bResizeSourceBuffer = false;
    this->bSkipFrameWhenRunningExpensiveTasks = false;
    this->bConvertToDesiredPixelFormat = false;
    this->bForceAlphaToOneOnConversion = false;
    this->bApplyLinearToSRGBConversion = false;
    this->bAutostopOnCapture = false;
    this->NumberOfFramesToCapture = 0;
}

