#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_MakeAttack.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_MakeAttack : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInstantAttack;
    
    UAnimNotify_MakeAttack();

};

