#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "RightClickMenuItemWidget.generated.h"

class UButton;
class UImage;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API URightClickMenuItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UButton* ButtonClick;
    
    UPROPERTY(Instanced)
    UTextWidget* Label;
    
    UPROPERTY(Instanced)
    UImage* UnhoveredBackground;
    
    UPROPERTY(Instanced)
    UImage* HoveredBackground;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor TextColorHovered;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor TextColorUnhovered;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MenuItemWidgetClass;
    
public:
    URightClickMenuItemWidget();

    UFUNCTION()
    void OnButtonUnHovered();
    
    UFUNCTION()
    void OnButtonHovered();
    
    UFUNCTION()
    void OnButtonClick();
    
};

