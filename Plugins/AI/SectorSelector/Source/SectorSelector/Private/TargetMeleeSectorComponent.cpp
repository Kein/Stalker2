#include "TargetMeleeSectorComponent.h"

UTargetMeleeSectorComponent::UTargetMeleeSectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->NumSectors = 5;
    this->TraceRadius = 100.00f;
}

bool UTargetMeleeSectorComponent::ReleaseSector(FSectorSelectionHandle Handle) {
    return false;
}

bool UTargetMeleeSectorComponent::IsSectorObstructed(int32 SectorId) const {
    return false;
}

bool UTargetMeleeSectorComponent::IsSectorFree(int32 SectorId) const {
    return false;
}

bool UTargetMeleeSectorComponent::IsLocationInsideSectorWithPrecision(const FVector& Location, const int64 SectorsBitmask, float AnglePrecision) const {
    return false;
}

bool UTargetMeleeSectorComponent::IsHandleValid(FSectorSelectionHandle Handle) {
    return false;
}

bool UTargetMeleeSectorComponent::IsHandlesEqual(FSectorSelectionHandle Handle1, FSectorSelectionHandle Handle2) {
    return false;
}

bool UTargetMeleeSectorComponent::IsAnyOfSectorsObstructed(int64 SectorsBitmask) const {
    return false;
}

bool UTargetMeleeSectorComponent::IsAllSectorsFreeIfRemove(int64 SectorsBitmask, int64 RemoveBitmask) const {
    return false;
}

bool UTargetMeleeSectorComponent::IsAllSectorsFree(int64 SectorsBitmask) const {
    return false;
}

bool UTargetMeleeSectorComponent::FindDesiredSectorForPathBlueprint(FSelectedSector& SelectedSector, UNavigationPath* Path, int32 SectorsNum) const {
    return false;
}

FSectorSelectionHandle UTargetMeleeSectorComponent::ClaimSectorsInRange(int32 MinIndex, int32 MaxIndex) {
    return FSectorSelectionHandle{};
}

FSectorSelectionHandle UTargetMeleeSectorComponent::ClaimSectorsByMask(int64 RequestedBitmaskOfOccupiedSectors, bool bClaimIfObstructed, bool bForceClaim) {
    return FSectorSelectionHandle{};
}

FSectorSelectionHandle UTargetMeleeSectorComponent::ClaimSector(int32 SectorId) {
    return FSectorSelectionHandle{};
}


