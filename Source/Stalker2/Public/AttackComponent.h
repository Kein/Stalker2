#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAttackActionType.h"
#include "AttackComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    EAttackActionType ActiveState;
    
public:
    UAttackComponent(const FObjectInitializer& ObjectInitializer);

};

