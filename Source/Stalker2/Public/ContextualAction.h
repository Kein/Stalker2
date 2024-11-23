#pragma once
#include "CoreMinimal.h"
#include "UIDActor_ContextualAction.h"
#include "ContextualAction.generated.h"

UCLASS()
class STALKER2_API AContextualAction : public AUIDActor_ContextualAction {
    GENERATED_BODY()
public:
    AContextualAction(const FObjectInitializer& ObjectInitializer);

};

