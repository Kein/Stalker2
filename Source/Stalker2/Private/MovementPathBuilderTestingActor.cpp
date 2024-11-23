#include "MovementPathBuilderTestingActor.h"

AMovementPathBuilderTestingActor::AMovementPathBuilderTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PathType = EPathBuilderPathType::FewCircles;
    this->MaxPathLength = 100000.00f;
    this->Velocities.AddDefaulted(2);
    this->DesirableVelocitiesMask = 255;
    this->bDetailedDrawing = false;
    this->bShowCircles = false;
    this->bShowKeyPoints = false;
    this->bShowPathSectors = false;
    this->bShowPathFilteredSectors = false;
    this->CircleRadius = 1000.00f;
    this->RotationAngle = 360.00f;
    this->bClockwise = true;
    this->bSmoothPath = true;
    this->bCorridor = true;
    this->bShowNavmeshSegmentTest = true;
    this->ExpensiveActor = NULL;
    this->DrawPathIndex = 1;
    this->bShowSampled = true;
    this->AdvancedPathfindingTime = 0.00f;
}


