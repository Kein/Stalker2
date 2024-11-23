#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ENotifyGuitarAction.h"
#include "AnimNotify_GuitarAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_GuitarAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ENotifyGuitarAction GuitarAction;
    
    UAnimNotify_GuitarAction();

};

