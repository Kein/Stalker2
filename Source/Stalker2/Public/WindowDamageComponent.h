#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "WindowDamageComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWindowDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float CheckRate;
    
    UPROPERTY()
    FVector PreviousLocation;
    
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UWindowDamageComponent(const FObjectInitializer& ObjectInitializer);

};

