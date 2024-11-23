#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SectorSelectionHandle.h"
#include "SelectedSector.h"
#include "TargetMeleeSectorComponent.generated.h"

class UNavigationPath;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SECTORSELECTOR_API UTargetMeleeSectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 NumSectors;
    
    UPROPERTY(EditAnywhere)
    float TraceRadius;
    
public:
    UTargetMeleeSectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ReleaseSector(FSectorSelectionHandle Handle);
    
    UFUNCTION(BlueprintPure)
    bool IsSectorObstructed(int32 SectorId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSectorFree(int32 SectorId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocationInsideSectorWithPrecision(const FVector& Location, const int64 SectorsBitmask, float AnglePrecision) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool IsHandleValid(FSectorSelectionHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHandlesEqual(FSectorSelectionHandle Handle1, FSectorSelectionHandle Handle2);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAnyOfSectorsObstructed(int64 SectorsBitmask) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllSectorsFreeIfRemove(int64 SectorsBitmask, int64 RemoveBitmask) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllSectorsFree(int64 SectorsBitmask) const;
    
    UFUNCTION(BlueprintPure)
    bool FindDesiredSectorForPathBlueprint(FSelectedSector& SelectedSector, UNavigationPath* Path, int32 SectorsNum) const;
    
    UFUNCTION(BlueprintCallable)
    FSectorSelectionHandle ClaimSectorsInRange(int32 MinIndex, int32 MaxIndex);
    
    UFUNCTION(BlueprintCallable)
    FSectorSelectionHandle ClaimSectorsByMask(int64 RequestedBitmaskOfOccupiedSectors, bool bClaimIfObstructed, bool bForceClaim);
    
    UFUNCTION(BlueprintCallable)
    FSectorSelectionHandle ClaimSector(int32 SectorId);
    
};

