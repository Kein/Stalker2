#pragma once
#include "CoreMinimal.h"
#include "GameplayEventData.h"
#include "PossessedObjectEventData.generated.h"

class AActor;

UCLASS(BlueprintType)
class UPossessedObjectEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    UPossessedObjectEventData();
    
    UFUNCTION(BlueprintPure)
    float GetVFXSize() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetPossessedObject() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBoundsOffset() const;
    
};

