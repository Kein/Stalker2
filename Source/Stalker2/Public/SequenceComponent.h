#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SequenceComponent.generated.h"

class UPreBlendCinematicComponent;

UCLASS()
class STALKER2_API USequenceComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPreBlendCinematicComponent* PreBlendCinematicComponent;
    
public:
    USequenceComponent();

private:
    UFUNCTION()
    void OnSequenceStarted();
    
    UFUNCTION()
    void OnSequenceFinished();
    
};

