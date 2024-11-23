#include "WaterContactController.h"

UWaterContactController::UWaterContactController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FVector UWaterContactController::ProjectOwnerPositionOnWaterSurface() const {
    return FVector{};
}

FWaterSurfaceObstructionResult UWaterContactController::IsPathToWaterSurfaceObstructed() const {
    return FWaterSurfaceObstructionResult{};
}


