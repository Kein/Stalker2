#pragma once
#include "CoreMinimal.h"
#include "GuidActorComponent.h"
#include "SignalToSend.h"
#include "SignalSenderComponent.generated.h"

class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USignalSenderComponent : public UGuidActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TArray<FSignalToSend> Signals;
    
public:
    USignalSenderComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Send(UObject* DataObject) const;
    
};

