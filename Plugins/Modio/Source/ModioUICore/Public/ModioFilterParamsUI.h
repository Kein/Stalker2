#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioFilterParams.h"
#include "ModioFilterParamsUI.generated.h"

UCLASS(BlueprintType)
class MODIOUICORE_API UModioFilterParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FModioFilterParams Underlying;
    
    UModioFilterParamsUI();

};

