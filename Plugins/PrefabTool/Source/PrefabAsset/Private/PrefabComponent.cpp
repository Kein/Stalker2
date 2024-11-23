#include "PrefabComponent.h"

UPrefabComponent::UPrefabComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bAllowCullDistanceVolume = false;
    this->bVisibleInReflectionCaptures = false;
    this->bReceivesDecals = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastDynamicShadow = false;
    this->bCastStaticShadow = false;
    this->bReceiveMobileCSMShadows = false;
    this->bApplyImpulseOnDamage = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->bConnected = true;
    this->bLockSelection = true;
    this->Prefab = NULL;
    this->GeneratedBlueprint = NULL;
    this->bTransient = false;
}


