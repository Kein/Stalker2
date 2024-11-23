#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EStateTag.h"
#include "AnimNotify_SetStateTag.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_SetStateTag : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStateTag StateTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnabled;
    
    UAnimNotify_SetStateTag();

};

