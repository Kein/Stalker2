#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModioCommonGenericModEntry.h"
#include "ModioGenericModEntry.generated.h"

class UModioGenericModEntryRating;
class UPanelWidget;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioGenericModEntry : public UModioCommonGenericModEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioGenericModEntryRating* Rating;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* ModAuthorText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* ByText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* ModIncompatiblePanel;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SelectedOperationTrackerImageColorTint;
    
    UPROPERTY(EditAnywhere)
    FLinearColor UnselectedOperationTrackerImageColorTint;
    
    UPROPERTY(EditAnywhere)
    FLinearColor UnselectedOperationTrackerImageColorTintError;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SelectedByTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor UnselectedByTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SelectedModAuthorTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor UnselectedModAuthorTextColor;
    
public:
    UModioGenericModEntry();

};

