#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "GSCNavData.generated.h"

UCLASS()
class AGSCNavData : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AGSCNavData(const FObjectInitializer& ObjectInitializer);

};

