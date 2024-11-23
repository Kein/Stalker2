#pragma once
#include "CoreMinimal.h"
#include "CommonTileView.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonTileView.generated.h"

class UModioCommonListViewStyle;

UCLASS()
class MODIOUI_API UModioCommonTileView : public UCommonTileView {
    GENERATED_UCLASS_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonListViewStyle> ModioStyle;
    
public:
    //UModioCommonTileView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonListViewStyle> InStyle);
    
};

