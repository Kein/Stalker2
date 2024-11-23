#pragma once
#include "CoreMinimal.h"
#include "ESlotDirection.h"
#include "ViewBaseExtended.h"
#include "AttachSelectorView.generated.h"

class UAttachSelectorSlot;
class UAttachSelectorTip;
class UUniformGridPanel;

UCLASS(EditInlineNew)
class STALKER2_API UAttachSelectorView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UUniformGridPanel* SlotGridPanel;
    
    UPROPERTY(Instanced)
    UAttachSelectorTip* AttachSelectorTip;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UAttachSelectorSlot*> LeftSlots;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UAttachSelectorSlot*> RightSlots;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UAttachSelectorSlot*> UpSlots;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UAttachSelectorSlot*> DownSlots;
    
    UPROPERTY(Instanced, Transient)
    TArray<UAttachSelectorSlot*> AllSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FastChangeSlotTime;
    
private:
    UPROPERTY(Instanced)
    UAttachSelectorSlot* DetachSlot;
    
    UPROPERTY(Transient)
    ESlotDirection CurrentChooseLine;
    
    UPROPERTY(Transient)
    int32 IndexCurrentSelectedSlot;
    
    UPROPERTY(Instanced, Transient)
    UAttachSelectorSlot* SelectedSlot;
    
    UPROPERTY(Instanced, Transient)
    UAttachSelectorSlot* LastHoveredAttach;
    
    UPROPERTY(Transient)
    ESlotDirection LastTriggeredDirection;
    
public:
    UAttachSelectorView();

    UFUNCTION()
    void UIIterateUpSlots();
    
    UFUNCTION()
    void UIIterateRightSlots();
    
    UFUNCTION()
    void UIIterateLeftSlots();
    
    UFUNCTION()
    void UIIterateDownSlots();
    
    UFUNCTION()
    void SetCurrentChooseLine(const ESlotDirection InCurrentChooseLine);
    
    UFUNCTION()
    void DetachAllAttachByDirection();
    
    UFUNCTION()
    void AttachSelectorSlotUp();
    
    UFUNCTION(BlueprintCallable)
    void AttachSelectorSlotSelect();
    
    UFUNCTION(BlueprintCallable)
    void AttachSelectorSlotRight();
    
    UFUNCTION()
    void AttachSelectorSlotLeft();
    
    UFUNCTION()
    void AttachSelectorSlotDown();
    
    UFUNCTION(BlueprintCallable)
    void AttachSelectorDetachAll();
    
};

