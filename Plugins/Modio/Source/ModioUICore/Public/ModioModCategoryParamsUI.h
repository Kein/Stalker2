#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModCategoryParams.h"
#include "ModioModCategoryParamsUI.generated.h"

UCLASS(BlueprintType)
class MODIOUICORE_API UModioModCategoryParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FModioModCategoryParams Underlying;
    
    UModioModCategoryParamsUI();

};

