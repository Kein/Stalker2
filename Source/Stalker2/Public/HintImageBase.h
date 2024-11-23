#pragma once
#include "CoreMinimal.h"
#include "EInputIconsType.h"
#include "WidgetBase.h"
#include "HintImageBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UHintImageBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EInputIconsType InputIconsType;
    
    UHintImageBase();

};

