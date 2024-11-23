#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RightClickMenuItemData.h"
#include "Templates/SubclassOf.h"
#include "RightClickMenuWidget.generated.h"

class UImage;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API URightClickMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UVerticalBox* Menu;
    
    UPROPERTY(Instanced)
    UImage* Left_NoTile;
    
    UPROPERTY(Instanced)
    UImage* Right_NoTile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MenuItemWidgetClass;
    
    UPROPERTY(Transient)
    UWidgetAnimation* RadiationMark;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NoTileBordersElementsNum;
    
public:
    URightClickMenuWidget();

private:
    UFUNCTION()
    void OnNoItemClick();
    
    UFUNCTION()
    void OnItemHover(const FRightClickMenuItemData& Data, const bool bInHover);
    
    UFUNCTION()
    void OnItemClicked(const FRightClickMenuItemData& Data);
    
};

