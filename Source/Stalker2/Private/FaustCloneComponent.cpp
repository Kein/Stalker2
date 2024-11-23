#include "FaustCloneComponent.h"

UFaustCloneComponent::UFaustCloneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AliveModelDissolveCurve = NULL;
    this->DeadModelDissolveCurve = NULL;
    this->AliveModelGroomCurve = NULL;
    this->DeadModelGroomCurve = NULL;
    this->CloneSwitchEffect = NULL;
    this->CloneSwitchTime = 0.00f;
}


