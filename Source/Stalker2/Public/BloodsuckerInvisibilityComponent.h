#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BloodsuckerInvisibilityComponent.generated.h"

class UCurveFloat;
class UMaterialInstanceDynamic;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UBloodsuckerInvisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UCurveFloat* InvisibilityChangeCurve;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
public:
    UBloodsuckerInvisibilityComponent(const FObjectInitializer& ObjectInitializer);

};

