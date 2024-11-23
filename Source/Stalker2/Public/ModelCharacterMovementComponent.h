#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ModelCharacterMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UModelCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UModelCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

