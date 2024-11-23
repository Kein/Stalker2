#pragma once
#include "CoreMinimal.h"
#include "Components/ExpandableArea.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonExpandableArea.generated.h"

class UModioCommonExpandableAreaStyle;

UCLASS()
class MODIOUI_API UModioCommonExpandableArea : public UExpandableArea {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonExpandableAreaStyle> ModioStyle;
    
    UPROPERTY(Transient)
    TSubclassOf<UModioCommonExpandableAreaStyle> CachedAppliedModioStyle;
    
public:
    UModioCommonExpandableArea();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonExpandableAreaStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFocusReceived();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFocusLost();
    
};

