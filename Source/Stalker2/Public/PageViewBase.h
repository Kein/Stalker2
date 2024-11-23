#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "PageViewBase.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UPageViewBase : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldBindWidgetInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudIgnoreInputOnPouse;
    
protected:
    UPROPERTY(Transient)
    bool bOpenedFromDialog;
    
public:
    UPageViewBase();

};

