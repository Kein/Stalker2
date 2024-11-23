#pragma once
#include "CoreMinimal.h"
#include "GSCNavModifierVolume.h"
#include "Templates/SubclassOf.h"
#include "CooldownZone.generated.h"

class UNavArea;

UCLASS()
class STALKER2_API ACooldownZone : public AGSCNavModifierVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavArea> RestrictionArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CooldownTime;
    
    ACooldownZone(const FObjectInitializer& ObjectInitializer);

};

