#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "BookViewBase.generated.h"

class UNavigationPanel;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UBookViewBase : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefaultPageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldOpenDefaultPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableClick;
    
protected:
    UPROPERTY(Instanced)
    UWidgetSwitcher* Switcher;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UNavigationPanel* NavigationPanel;
    
public:
    UBookViewBase();

protected:
    UFUNCTION()
    void ClickMenuButton(int32 InButtonIndex);
    
    UFUNCTION()
    void ChangeSelectButton();
    
};

