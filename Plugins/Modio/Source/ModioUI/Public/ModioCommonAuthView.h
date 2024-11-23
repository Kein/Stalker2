#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioCommonAuthViewBase.h"
#include "ModioCommonAuthView.generated.h"

class UModioCommonEmailAuthCodeViewBase;
class UModioCommonEmailAuthLoadingViewBase;
class UModioCommonEmailAuthViewBase;
class UModioCommonTermsOfUseViewBase;
class UModioCommonWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonAuthView : public UModioCommonAuthViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonWidgetSwitcher* AuthSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UModioCommonTermsOfUseViewBase* TermsOfUseView;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UModioCommonEmailAuthViewBase* EmailAuthView;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UModioCommonEmailAuthLoadingViewBase* EmailAuthLoadingView;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UModioCommonEmailAuthCodeViewBase* EmailAuthCodeView;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAuthCancelled;
    
public:
    UModioCommonAuthView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetShowTermsOfView(bool bShow);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTermsOfUseViewSubmitClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTermsOfUseViewLinkClicked(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTermsOfUseViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthViewSubmitClicked(const FString& EmailAddress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthLoadingViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthCodeViewSubmitClicked(const FString& AuthCode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthCodeViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthCodeViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleEmailAuthenticated(FModioErrorCode ErrorCode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleEmailAuthCodeSent(FModioErrorCode ErrorCode);
    
};

