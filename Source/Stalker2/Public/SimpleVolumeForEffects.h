#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SimpleVolumeForEffects.generated.h"

class UApplyEffectComponent;

UCLASS()
class STALKER2_API ASimpleVolumeForEffects : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UApplyEffectComponent* EffectComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRemoveEffectOnEndOverlap;
    
public:
    ASimpleVolumeForEffects(const FObjectInitializer& ObjectInitializer);

};

