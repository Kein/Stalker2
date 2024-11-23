#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EHandItem.h"
#include "AnimNotify_UseHandItem.generated.h"

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_UseHandItem : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EHandItem HandItem;
    
    UAnimNotify_UseHandItem();

};

