#pragma once
#include "CoreMinimal.h"
#include "EPDAPageType.h"
#include "PageViewBase.h"
#include "PDAPage.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UPDAPage : public UPageViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPDAPageType PDAPage;
    
    UPDAPage();

};

