#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomDamageHandleComponent.h"
#include "InputDamageModifierComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UInputDamageModifierComponent : public UActorComponent, public ICustomDamageHandleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageModifier;
    
public:
    UInputDamageModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIgnoreHitFeedback(const bool bInIgnore);
    

    // Fix for true pure virtual functions not being implemented
};

