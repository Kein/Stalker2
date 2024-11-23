#pragma once
#include "CoreMinimal.h"
#include "EModioRating.h"
#include "ModioErrorCode.h"
#include "ModioUnsigned64.h"
#include "ModioCommonModEntryBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonGenericModEntry.generated.h"

class UModioCommonBorder;
class UModioCommonButtonBase;
class UModioCommonDynamicImage;
class UModioCommonGenericModEntryStyle;
class UModioCommonProgressBar;
class UModioCommonRichTextBlock;
class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonGenericModEntry : public UModioCommonModEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonGenericModEntryStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonBorder* Background;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* ForegroundContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonDynamicImage* ModImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* ModNameTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* OperationLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* OperationDetailsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* SpeedLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* SpeedDetailsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* DownloadsLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* DownloadsDetailsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* SizeLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* SizeDetailsTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* RatingPercentageTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* RatingPositiveTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* RatingNegativeTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* SubscribeButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* EnableButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* DisableButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* OpenModDetailsButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* ForceUninstallButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* PercentProgressTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonProgressBar* PercentProgressBar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinDecimalsFileSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxDecimalsFileSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinDecimalsProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxDecimalsProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinDecimalsSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxDecimalsSpeed;
    
public:
    UModioCommonGenericModEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSpeed(FModioUnsigned64 DeltaBytes, double DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOperationProgressPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOperationProgressBytes(FModioUnsigned64 Current, FModioUnsigned64 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchSpeedVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchForceUninstallButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchEnableButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchDisableButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchCancelButtonVisibility(bool bIsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonGenericModEntryStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRatingSubmissionComplete(FModioErrorCode ErrorCode, EModioRating Rating);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSwitchEnabledClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSubscribeClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOpenModDetailsClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleForceUninstallClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCancelClicked();
    
};

