#pragma once
#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "PlayerEnhancedInputComponent.generated.h"

UCLASS(NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerEnhancedInputComponent : public UEnhancedInputComponent {
    GENERATED_BODY()
public:
    UPlayerEnhancedInputComponent(const FObjectInitializer& ObjectInitializer);

};

