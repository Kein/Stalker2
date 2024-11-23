#pragma once
#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonComboBoxString.generated.h"

class UModioCommonComboBoxStringStyle;

UCLASS()
class MODIOUI_API UModioCommonComboBoxString : public UComboBoxString {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonComboBoxStringStyle> ModioStyle;
    
public:
    UModioCommonComboBoxString();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonComboBoxStringStyle> InStyle);
    
};

