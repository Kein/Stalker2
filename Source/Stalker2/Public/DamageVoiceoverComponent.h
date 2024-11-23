#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageVoiceoverComponent.generated.h"

class APC;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDamageVoiceoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    APC* Owner;
    
public:
    UDamageVoiceoverComponent(const FObjectInitializer& ObjectInitializer);

};

