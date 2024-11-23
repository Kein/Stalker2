#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "OnUpdateDetailsDelegate.h"
#include "OnUpdateSelectButtonDelegate.h"
#include "PDASlotPanelBase.generated.h"

class UPDAArrowButton;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UPDASlotPanelBase : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UVerticalBox* SlotContainer;
    
    UPROPERTY(Instanced)
    UPDAArrowButton* ArrowDown;
    
    UPROPERTY(Instanced)
    UPDAArrowButton* ArrowTop;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateDetails OnUpdateDetails;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateSelectButton OnUpdateSelectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ArrowActionIdTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ArrowActionIdDown;
    
    UPDASlotPanelBase();

protected:
    UFUNCTION()
    void UpdateSelectSlotID();
    
    UFUNCTION()
    void ClickSlot(const int32 QuestSlotIndex);
    
    UFUNCTION()
    void ClickArrowButton(const FName ButtonId);
    
};

