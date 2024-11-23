#pragma once
#include "CoreMinimal.h"
#include "LockStruct.h"
#include "SingleClickComponent.h"
#include "LockableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULockableComponent : public USingleClickComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString DisplayAlternativeText;
    
private:
    UPROPERTY(EditAnywhere)
    FLockStruct LockStruct;
    
    UPROPERTY(EditAnywhere)
    bool bLocked;
    
public:
    ULockableComponent(const FObjectInitializer& ObjectInitializer);

};

