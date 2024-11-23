#include "MediaCapture.h"

UMediaCapture::UMediaCapture() {
    this->MediaOutput = NULL;
    this->CapturingRenderTarget = NULL;
}

bool UMediaCapture::UpdateTextureRenderTarget2D(UTextureRenderTarget2D* RenderTarget) {
    return false;
}

void UMediaCapture::StopCapture(bool bAllowPendingFrameToBeProcess) {
}

void UMediaCapture::SetMediaOutput(UMediaOutput* InMediaOutput) {
}

EMediaCaptureState UMediaCapture::GetState() const {
    return EMediaCaptureState::Error;
}

FIntPoint UMediaCapture::GetDesiredSize() const {
    return FIntPoint{};
}

TEnumAsByte<EPixelFormat> UMediaCapture::GetDesiredPixelFormat() const {
    return PF_Unknown;
}

bool UMediaCapture::CaptureTextureRenderTarget2D(UTextureRenderTarget2D* RenderTarget, FMediaCaptureOptions CaptureOptions) {
    return false;
}

bool UMediaCapture::CaptureActiveSceneViewport(FMediaCaptureOptions CaptureOptions) {
    return false;
}


