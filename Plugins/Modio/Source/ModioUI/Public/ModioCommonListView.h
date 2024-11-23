#pragma once
#include "CoreMinimal.h"
#include "CommonListView.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonListView.generated.h"

class UModioCommonListViewStyle;

UCLASS()
class MODIOUI_API UModioCommonListView : public UCommonListView {
    GENERATED_UCLASS_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonListViewStyle> ModioStyle;
    
public:
    //UModioCommonListView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonListViewStyle> InStyle);
    
};

