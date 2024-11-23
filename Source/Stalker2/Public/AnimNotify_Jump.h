#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EJumpState.h"
#include "AnimNotify_Jump.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_Jump : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EJumpState JumpState;
    
    UAnimNotify_Jump();

};

