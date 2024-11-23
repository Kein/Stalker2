#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPsyNPCType.h"
#include "ObjPrototypeSID.h"
#include "EncounterSpawnPointData.generated.h"

USTRUCT(BlueprintType)
struct FEncounterSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FObjPrototypeSID ObjPrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPsyNPCType PsyNPCType;
    
    STALKER2_API FEncounterSpawnPointData();
};

