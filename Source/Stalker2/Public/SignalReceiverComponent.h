#pragma once
#include "CoreMinimal.h"
#include "GuidActorComponent.h"
#include "SignalReceiverComponentReceiveSignatureDelegate.h"
#include "SignalReceiverComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USignalReceiverComponent : public UGuidActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSignalReceiverComponentReceiveSignature OnSignalReceived;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bCanBeUsedInQuests;
    
public:
    USignalReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

