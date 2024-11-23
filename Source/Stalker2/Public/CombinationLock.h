#pragma once
#include "CoreMinimal.h"
#include "InteractableComponent.h"
#include "CombinationLock.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UCombinationLock : public UInteractableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bAvailableToPlayer;
    
    UPROPERTY(EditAnywhere)
    int32 Code;
    
    UPROPERTY(EditAnywhere)
    bool Opened;
    
public:
    UCombinationLock(const FObjectInitializer& ObjectInitializer);

};

