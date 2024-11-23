#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DragDropZone.h"
#include "EInventoryEquipmentSlot.h"
#include "EquipmentNavigationPaths.h"
#include "EquipmentSlots.generated.h"

class UBorder;
class UCanvasPanel;
class UCanvasPanelSlot;
class UEquipmentSlot;
class UInteractableItemSlotBaseWidget;
class UInventoryNew;
class UItemDragWidget;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UEquipmentSlots : public UDragDropZone {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* MainHand;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* SecondHand;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* Head;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* Detector;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* Artifact1;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* Artifact2;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* Artifact3;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* Artifact4;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* Artifact5;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* Pistol;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* Torso;
    
    UPROPERTY(Instanced)
    UBorder* NavBorder;
    
    UPROPERTY(Instanced)
    UTextWidget* HeaderText;
    
public:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DefaultNavBorderColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DraggingNavBorderColor;
    
private:
    UPROPERTY(Instanced, Transient)
    UInventoryNew* InventoryNew;
    
    UPROPERTY(Instanced, Transient)
    TMap<int32, UEquipmentSlot*> ItemSlotsWidgets;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EInventoryEquipmentSlot, FEquipmentNavigationPaths> NavigationPaths;
    
    UPROPERTY(Instanced, Transient)
    UItemDragWidget* CurrMovingWidget;
    
    UPROPERTY(Instanced, Transient)
    UEquipmentSlot* CurrPickedSlot;
    
    UPROPERTY(Instanced, Transient)
    UCanvasPanelSlot* NavBorderSlot;
    
public:
    UEquipmentSlots();

    UFUNCTION()
    void OnItemMouseLeave(UInteractableItemSlotBaseWidget* ItemWidget);
    
    UFUNCTION()
    void OnItemMouseEnter(UInteractableItemSlotBaseWidget* ItemWidget);
    
};

