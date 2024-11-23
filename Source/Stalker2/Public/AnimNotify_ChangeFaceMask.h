#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EEmotionalFaceMasks.h"
#include "AnimNotify_ChangeFaceMask.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_ChangeFaceMask : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEmotionalFaceMasks FaceMask;
    
    UAnimNotify_ChangeFaceMask();

};

