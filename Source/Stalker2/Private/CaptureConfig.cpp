#include "CaptureConfig.h"

FCaptureConfig::FCaptureConfig() {
    this->CaptureAngle = 0.00f;
    this->CaptureWarmup = 0.00f;
    this->TileLimitsForZCoords = 0.00f;
    this->LoadTileOverlapSize = 0.00f;
    this->CaptureTileOverlap = 0.00f;
    this->WorldPartitionTiles = 0;
    this->LargeImagesNum = 0;
    this->IterativeCellSize = 0.00f;
    this->SingleTileMinimapResolution = 0;
    this->TargetGamma = 0.00f;
    this->bCreateFoliage = false;
}

