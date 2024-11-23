#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomDamageHandleComponent.h"
#include "PrototypeSID.h"
#include "ScarPhaseData.h"
#include "ScarBossComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UScarBossComponent : public UActorComponent, public ICustomDamageHandleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FScarPhaseData> Phases;
    
    UPROPERTY(EditAnywhere)
    FPrototypeSID StunMeshGenerator;
    
public:
    UScarBossComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

