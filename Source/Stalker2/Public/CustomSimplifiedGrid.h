#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "CustomSimplifiedGrid.generated.h"

class UBorder;
class UCanvasPanel;
class UCurveFloat;
class UCustomSimplifiedGridSlot;
class UImage;
class UItemDragWidget;
class UScrollBox;
class USizeBox;
class UTextWidget;
class UTilingGridBack;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UCustomSimplifiedGrid : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(Instanced, Transient)
    UTilingGridBack* TilingBack;
    
    UPROPERTY(Transient)
    int32 SizeY;
    
    UPROPERTY(Transient)
    int32 SizeX;
    
    UPROPERTY(Instanced, Transient)
    TMap<int32, UCustomSimplifiedGridSlot*> Widgets;
    
    UPROPERTY(Instanced, Transient)
    TArray<UCustomSimplifiedGridSlot*> CachedWidgets;
    
    UPROPERTY(Transient)
    int32 GamepadCurrPosX;
    
    UPROPERTY(Transient)
    int32 GamepadCurrPosY;
    
    UPROPERTY(Instanced, Transient)
    UCanvasPanel* ItemPlacementPanel;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextWidget* OwnerMoney;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* GridScrollBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextWidget* HeaderText;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USizeBox* GridSizeBox;
    
    UPROPERTY(Instanced, Transient)
    UBorder* ItemPlaceBorder;
    
    UPROPERTY(Instanced, Transient)
    UCanvasPanel* ScrollCanvasPanel;
    
    UPROPERTY(Instanced, Transient)
    UBorder* NavBorder;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBoxScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDefaultScrollEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString HeaderLocSID;
    
public:
    UPROPERTY(Instanced, Transient)
    UTextWidget* WeightText;
    
    UPROPERTY(Instanced, Transient)
    UTextWidget* MaxWeightText;
    
    UPROPERTY(Instanced, Transient)
    UTextWidget* WeightUnits;
    
    UPROPERTY(Instanced, Transient)
    UTextWidget* LootSeparator;
    
    UPROPERTY(Instanced, Transient)
    UImage* WeightIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float BeforeGamepadNavigationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float GamepadNavigationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float GamepadNavigationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bDrawDebugNavigationLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UCurveFloat* NavCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FVector2D VisibleCells;
    
    UPROPERTY(EditAnywhere, Transient)
    TSubclassOf<UUserWidget> ItemSlotWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float CellSize;
    
private:
    UPROPERTY(Instanced, Transient)
    UItemDragWidget* CurrMovingWidget;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* MousePosTargetWidget;
    
    UPROPERTY(EditAnywhere)
    float NavPosChangeAnimSpeed;
    
public:
    UCustomSimplifiedGrid();

private:
    UFUNCTION()
    void OnScrollBarScrolled(float Offset);
    
};

