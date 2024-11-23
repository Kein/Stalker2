#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/ScrollBox.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonScrollBox.generated.h"

class UModioCommonScrollBoxStyle;
class UWidget;
class UWidgetNavigation;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonScrollBoxStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidgetNavigation* UserDefinedNavigation;
    
public:
    UModioCommonScrollBox();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateNavigationData(int32 PendingScrollOffset);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonScrollBoxStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUserScrolledHandle(float CurrentOffset);
    
    UFUNCTION(BlueprintNativeEvent)
    UWidget* HandleCustomBoundaryNavigation(EUINavigation InNavigation);
    
};

