#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioCommonErrorWithRetryParamsUI.generated.h"

UCLASS(BlueprintType)
class MODIOUI_API UModioCommonErrorWithRetryParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ErrorTitleTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ErrorDescriptionTextLabel;
    
    UModioCommonErrorWithRetryParamsUI();

};

