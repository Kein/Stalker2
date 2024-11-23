#pragma once
#include "CoreMinimal.h"
#include "AutoInteractionData.h"
#include "InteractionComponent.h"
#include "AutoInteractionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAutoInteractionComponent : public UInteractionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FAutoInteractionData InteractionData;
    
public:
    UAutoInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

