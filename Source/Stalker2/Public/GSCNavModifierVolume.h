#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DynamicBaseNavmeshInclusionInterface -FallbackName=DynamicBaseNavmeshInclusionInterface
#include "NavModifierVolume.h"
#include "GSCNavModifierVolume.generated.h"

class UGuidActorComponent;

UCLASS() // FIXME custom module
class STALKER2_API AGSCNavModifierVolume : public ANavModifierVolume { //, public IDynamicBaseNavmeshInclusionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UGuidActorComponent* GuidComponent;
    
    UPROPERTY(EditAnywhere)
    bool bIsActive;
    
public:
    AGSCNavModifierVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

