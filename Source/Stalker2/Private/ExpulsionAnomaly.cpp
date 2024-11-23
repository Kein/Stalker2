#include "ExpulsionAnomaly.h"
#include "Components/SphereComponent.h"
#include "GeometryCacheComponent.h"

AExpulsionAnomaly::AExpulsionAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ActivationSphere"));
    this->ShapeGeometryCache = CreateDefaultSubobject<UGeometryCacheComponent>(TEXT("ShapeGeometryCache"));
    this->ShapeGeometryMaterial = NULL;
    this->PushDistanceDelayCurve = NULL;
    this->ActivationSphere->SetupAttachment(RootComponent);
    this->ShapeGeometryCache->SetupAttachment(ActivationSphere);
}



