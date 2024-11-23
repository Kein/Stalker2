#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/CheckBox.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonCheckBox.generated.h"

class UModioCommonCheckBoxStyle;
class UModioCommonTextBlock;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonCheckBox : public UCheckBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonCheckBoxStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UModioCommonTextBlock* LabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText LabelText;
    
public:
    UModioCommonCheckBox();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonCheckBoxStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FText& InLabelText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnCheckStateChanged(bool bIsChecked);
    
    UFUNCTION(BlueprintPure)
    FText GetLabelTextBlockText() const;
    
public:
    UFUNCTION(BlueprintPure)
    FText GetLabel() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FMargin GetCheckboxContentPadding() const;
    
};

