#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "CustomGrid.generated.h"

class UBorder;
class UCanvasPanel;
class UCurveFloat;
class UCustomGridSlot;
class UHorizontalBox;
class UImage;
class UInventoryNew;
class UItemDragWidget;
class UOverlay;
class UScrollBox;
class USizeBox;
class UTextWidget;
class UTexture2D;
class UTilingGridBack;
class UVerticalBox;
class UWeightBar;

UCLASS(EditInlineNew)
class STALKER2_API UCustomGrid : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(Instanced)
    UTilingGridBack* TilingBack;
    
    UPROPERTY()
    int32 SizeY;
    
    UPROPERTY()
    int32 SizeX;
    
    UPROPERTY(Instanced)
    TMap<int32, UCustomGridSlot*> Widgets;
    
    UPROPERTY(Instanced)
    TArray<UCustomGridSlot*> CachedWidgets;
    
    UPROPERTY()
    int32 GamepadCurrPosX;
    
    UPROPERTY()
    int32 GamepadCurrPosY;
    
    UPROPERTY(Instanced)
    UCanvasPanel* ItemPlacementPanel;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* OwnerMoney;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* GridScrollBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* HeaderText;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* GridSizeBox;
    
    UPROPERTY(Instanced)
    UBorder* ItemPlaceBorder;
    
    UPROPERTY(Instanced)
    UCanvasPanel* ScrollCanvasPanel;
    
    UPROPERTY(Instanced)
    UBorder* NavBorder;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBoxScroll;
    
    UPROPERTY(Instanced)
    UHorizontalBox* MoneyBox;
    
    UPROPERTY(Instanced)
    UImage* InfinityMoneyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultScrollEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HeaderLocSID;
    
public:
    UPROPERTY(Instanced, Transient)
    UCustomGridSlot* CurrPickedWidget;
    
    UPROPERTY(Instanced, Transient)
    UInventoryNew* InventoryNew;
    
    UPROPERTY(Instanced)
    UWeightBar* WeightBar;
    
    UPROPERTY(Instanced)
    UOverlay* WeightBarOverlay;
    
    UPROPERTY(Instanced)
    UTextWidget* WeightText;
    
    UPROPERTY(Instanced)
    UTextWidget* MaxWeightText;
    
    UPROPERTY(Instanced)
    UTextWidget* WeightUnits;
    
    UPROPERTY(Instanced)
    UTextWidget* LootSeparator;
    
    UPROPERTY(Instanced)
    UImage* WeightIcon;
    
    UPROPERTY(Instanced)
    UImage* PositiveHighlight;
    
    UPROPERTY(Instanced)
    UImage* NegativeHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeforeGamepadNavigationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GamepadNavigationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GamepadNavigationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawDebugNavigationLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* NavCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D VisibleCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> PositiveHighlightTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> NegativeHighlightTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float ScrollMovementSpeed;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> ItemSlotWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InventoryScrollChangeConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CellSize;
    
private:
    UPROPERTY(Instanced, Transient)
    UItemDragWidget* CurrMovingWidget;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* MousePosTargetWidget;
    
    UPROPERTY(EditAnywhere)
    float NavPosChangeAnimSpeed;
    
public:
    UCustomGrid();

private:
    UFUNCTION()
    void SetTargetCellDelayed();
    
    UFUNCTION()
    void SetCurrentCellDelayed();
    
    UFUNCTION()
    void OnScrollBarScrolled(float Offset);
    
};

