#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ERagdollAction.h"
#include "AnimNotify_RagdollAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_RagdollAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERagdollAction RagdollAction;
    
    UAnimNotify_RagdollAction();

};

