#pragma once
#include "CoreMinimal.h"
#include "UIDActorOwnsModel.h"
#include "UIDActor_ContextualAction.generated.h"

UCLASS(Abstract)
class STALKER2_API AUIDActor_ContextualAction : public AUIDActorOwnsModel {
    GENERATED_BODY()
public:
    AUIDActor_ContextualAction(const FObjectInitializer& ObjectInitializer);

};

