#pragma once
#include "CoreMinimal.h"
#include "HoldInteractionData.h"
#include "InteractionComponent.h"
#include "InteractionDelegateDelegate.h"
#include "HoldComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UHoldComponent : public UInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractionDelegate OnHoldStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionDelegate OnHoldInterruptedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionDelegate OnHoldFinishedEvent;
    
private:
    UPROPERTY(EditAnywhere)
    FHoldInteractionData InteractionData;
    
public:
    UHoldComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsHoldStarted() const;
    
};

