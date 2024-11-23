#pragma once
#include "CoreMinimal.h"
#include "ModioUIModManagementEventReceiver.h"
#include "ModioUISubscriptionsChangedReceiver.h"
#include "ModioCommonQuickAccessViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonQuickAccessTabView.generated.h"

class UModioCommonBorder;
class UModioCommonButtonBase;
class UModioCommonModOperationTrackerUserWidget;
class UModioCommonProfileImage;
class UModioCommonQuickAccessTabViewStyle;
class UModioCommonStorageSpaceTrackerUserWidget;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonQuickAccessTabView : public UModioCommonQuickAccessViewBase, public IModioUIModManagementEventReceiver, public IModioUISubscriptionsChangedReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonQuickAccessTabViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonBorder* InternalBackgroundBorder;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonBorder* OverlayBackgroundBorder;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonProfileImage* ProfileImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* UserNameTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonStorageSpaceTrackerUserWidget* StorageSpaceTrackerUserWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* MainGameMenuButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* AuthButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* MyCollectionButton;
    
public:
    UModioCommonQuickAccessTabView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonQuickAccessTabViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnMainGameMenuButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnCollectionButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnCloseButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnAuthButtonClicked();
    

    // Fix for true pure virtual functions not being implemented
};

