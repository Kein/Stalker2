#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModioCommonModDetailsView.h"
#include "Styling/SlateColor.h"
#include "ModioModDetailsView.generated.h"

class UHorizontalBox;
class UImage;
class UModioGenericModEntryRating;
class UPanelWidget;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioModDetailsView : public UModioCommonModDetailsView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* AuthorTextLabel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* AuthorText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* TagsTextLabel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* TagsText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* RatedTextLabel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* RatedText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* FileSizeTextLabel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* ReleaseDateTextLabel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* LastUpdatedTextLabel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* ErrorMessageText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UHorizontalBox* ErrorMessageHorizontalBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioGenericModEntryRating* Rating;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* LikeImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* DislikeImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* ModIncompatibleInfoPanel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ActiveRatingImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor InactiveRatingImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor OperationTrackerImageColorTintError;
    
public:
    UModioModDetailsView();

};

