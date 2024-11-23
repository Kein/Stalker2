#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBar.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonScrollBar.generated.h"

class UModioCommonScrollBarStyle;

UCLASS()
class MODIOUI_API UModioCommonScrollBar : public UScrollBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonScrollBarStyle> ModioStyle;
    
public:
    UModioCommonScrollBar();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonScrollBarStyle> InStyle);
    
};

