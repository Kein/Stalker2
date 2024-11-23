#include "OptimizationSettings.h"

UOptimizationSettings::UOptimizationSettings() {
    this->bReloadPrototypes = true;
    this->SoftMemoryThresholdMultiplier = 5.00f;
    this->StreamingDistanceMemoryMultiplier = 2.00f;
    this->StreamingDistanceModifierLimit = 0.20f;
    this->MemoryThresholdMultiplierToStartHighPriorityNavMeshLoading = 3.00f;
    this->AfkTimeout = 30.00f;
    this->WaterTraceDistanceTolerance = 10.00f;
    this->bAlwaysCleanXSSViews = false;
}


