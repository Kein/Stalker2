#pragma once
#include "CoreMinimal.h"
#include "InteractionComponent.h"
#include "MultiClickInteractionData.h"
#include "MultiClickComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UMultiClickComponent : public UInteractionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FMultiClickInteractionData InteractionData;
    
public:
    UMultiClickComponent(const FObjectInitializer& ObjectInitializer);

};

