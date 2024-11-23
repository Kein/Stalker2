#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DestructabilityMetaInfoComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDestructabilityMetaInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    bool bAllowConvertionToDestructibleObject;
    
public:
    UDestructabilityMetaInfoComponent(const FObjectInitializer& ObjectInitializer);

};

