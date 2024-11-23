#pragma once
#include "CoreMinimal.h"
#include "InteractionComponent.h"
#include "OnSingleClickInteractFailedDelegate.h"
#include "SingleClickInteractionData.h"
#include "SingleClickComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USingleClickComponent : public UInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSingleClickInteractFailed OnSingleClickInteractFailed;
    
private:
    UPROPERTY(EditAnywhere)
    FSingleClickInteractionData InteractionData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bNeedSendFailedEvent;
    
public:
    USingleClickComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNeededFailedEvent(const bool bNeedEvent);
    
    UFUNCTION(BlueprintPure)
    bool CanSendFailedEvent() const;
    
};

