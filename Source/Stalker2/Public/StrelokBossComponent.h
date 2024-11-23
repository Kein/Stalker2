#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomDamageHandleComponent.h"
#include "StrelokBossComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UStrelokBossComponent : public UActorComponent, public ICustomDamageHandleComponent {
    GENERATED_BODY()
public:
    UStrelokBossComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDashAbilityUsed(const bool bAbilityUsed);
    

    // Fix for true pure virtual functions not being implemented
};

