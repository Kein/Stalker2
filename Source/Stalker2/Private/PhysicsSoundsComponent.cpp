#include "PhysicsSoundsComponent.h"

UPhysicsSoundsComponent::UPhysicsSoundsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicalObjectAudioEventPlay = NULL;
    this->PhysicalObjectAudioEventStop = NULL;
    this->DraggingParameterSwitch = NULL;
    this->RollingParameterSwitch = NULL;
    this->HitParameterSwitch = NULL;
    this->PhysicalObjectContinuousSpeedRTPC = NULL;
    this->PhysicalObjectInstantSpeedRTPCParameter = NULL;
    this->WaterDepthRtpc = NULL;
    this->AkAudioComponent = NULL;
}


