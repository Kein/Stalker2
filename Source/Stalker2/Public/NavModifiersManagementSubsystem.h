#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "NavModifiersManagementSubsystem.generated.h"

class AGSCNavModifierVolume;
class ARecastNavMesh;

UCLASS()
class UNavModifiersManagementSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FGuid, AGSCNavModifierVolume*> VolumesMap;
    
private:
    UPROPERTY(Transient)
    ARecastNavMesh* CachedDefaultRecast;
    
public:
    UNavModifiersManagementSubsystem();

};

