#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ECodelockKeyType.h"
#include "AnimNotify_CodelockKeyPress.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_CodelockKeyPress : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECodelockKeyType KeyType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CodeDigit;
    
    UAnimNotify_CodelockKeyPress();

};

