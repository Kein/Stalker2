#pragma once
#include "CoreMinimal.h"
#include "MagazineReloadAnimations.h"
#include "HumanStateReloadAnimations.generated.h"

USTRUCT()
struct FHumanStateReloadAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FMagazineReloadAnimations> MagazineReload;
    
    STALKER2_API FHumanStateReloadAnimations();
};

