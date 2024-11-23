#pragma once
#include "CoreMinimal.h"
#include "EModioRating.h"
#include "ModioErrorCode.h"
#include "ModioUnsigned64.h"
#include "ModioUIAsyncOperationWidget.h"
#include "ModioCommonModDetailsViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModDetailsView.generated.h"

class UButton;
class UHorizontalBox;
class UModioCommonButtonBase;
class UModioCommonCheckBox;
class UModioCommonErrorWithRetryWidget;
class UModioCommonModDetailsViewStyle;
class UModioCommonModGalleryView;
class UModioCommonModTagList;
class UModioCommonProgressBar;
class UModioCommonScrollBox;
class UModioCommonTextBlock;
class UVerticalBox;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModDetailsView : public UModioCommonModDetailsViewBase, public IModioUIAsyncOperationWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonModDetailsViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ModNameTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* SubscribeButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* RateUpButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* RateDownButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* ReportButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UButton* CollectionButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ModSummaryTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ModFullDescriptionLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ModFullDescriptionTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UHorizontalBox* OperationContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* ProgressBarContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UHorizontalBox* StatusContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCheckBox* InstalledCheckBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCheckBox* EnabledCheckBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* OperationProgressLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* OperationProgressTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonProgressBar* OperationProgressBar;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* FileSizeLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* FileSizeTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* LastUpdatedLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* LastUpdatedTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ReleaseDateLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ReleaseDateTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* SubscribersLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* SubscribersTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* CreatedByLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* CreatedByTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TagsLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonModTagList* TagsWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonModGalleryView* ModGalleryView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonScrollBox* ModioCommonDescriptionScrollBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* SpeedDetailsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* ModDetailsLoader;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonErrorWithRetryWidget* ErrorWithRetryWidget;
    
public:
    UModioCommonModDetailsView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSpeed(FModioUnsigned64 DeltaBytes, double DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOperationProgressPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOperationProgressBytes(FModioUnsigned64 Current, FModioUnsigned64 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputActions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonModDetailsViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRatingSubmissionComplete(FModioErrorCode ErrorCode, EModioRating SubmittedRating);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSwitchEnabledClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSubscribeClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleReportClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRateUpClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRateDownClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCollectionClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateTopButtonsInputBindings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateTagsInputBindings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateBottomButtonsInputBindings();
    

    // Fix for true pure virtual functions not being implemented
};

