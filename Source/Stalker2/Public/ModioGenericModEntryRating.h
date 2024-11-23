#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Styling/SlateColor.h"
#include "ModioGenericModEntryRating.generated.h"

class UPanelWidget;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioGenericModEntryRating : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* StarImagesPanel;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* StarImageTexture;
    
    UPROPERTY(EditAnywhere)
    FSlateColor StarActiveHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor StarInactiveHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor StarActiveUnhoveredColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor StarInactiveUnhoveredColor;
    
public:
    UModioGenericModEntryRating();

};

