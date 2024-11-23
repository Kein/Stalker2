#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModTagInfo.h"
#include "ModioTagInfoUI.generated.h"

UCLASS(BlueprintType)
class MODIOUICORE_API UModioTagInfoUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FModioModTagInfo Underlying;
    
    UModioTagInfoUI();

};

