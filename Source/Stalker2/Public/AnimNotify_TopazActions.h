#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAnimTopazAction.h"
#include "AnimNotify_TopazActions.generated.h"

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_TopazActions : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAnimTopazAction TopazAction;
    
    UAnimNotify_TopazActions();

};

