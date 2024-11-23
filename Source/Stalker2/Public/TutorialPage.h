#pragma once
#include "CoreMinimal.h"
#include "BackgroundSettings.h"
#include "EPDATutorialCategory.h"
#include "PDAPage.h"
#include "TutorialPage.generated.h"

class UPDATutorialButton;
class UPDATutorialDetails;
class UPDATutorialPanel;

UCLASS(EditInlineNew)
class STALKER2_API UTutorialPage : public UPDAPage {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPDATutorialDetails* TutorialDetails;
    
    UPROPERTY(Instanced)
    UPDATutorialButton* ButtonAll;
    
    UPROPERTY(Instanced)
    UPDATutorialButton* ButtonNavigation;
    
    UPROPERTY(Instanced)
    UPDATutorialButton* ButtonFight;
    
    UPROPERTY(Instanced)
    UPDATutorialButton* ButtonSurvival;
    
    UPROPERTY(Instanced)
    UPDATutorialButton* ButtonEarning;
    
    UPROPERTY(Instanced)
    UPDATutorialPanel* TutorialPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefaultOpenFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TutorialSlotListScrollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EPDATutorialCategory, FBackgroundSettings> BackgroundSettings;
    
    UTutorialPage();

    UFUNCTION()
    void UIPDANavigatioTutorialUp();
    
    UFUNCTION()
    void UIPDANavigatioTutorialDown();
    
    UFUNCTION()
    void UIPDANavigationUp();
    
    UFUNCTION()
    void UIPDANavigationRight();
    
    UFUNCTION()
    void UIPDANavigationMouseUp();
    
    UFUNCTION()
    void UIPDANavigationMouseDown();
    
    UFUNCTION()
    void UIPDANavigationLeft();
    
    UFUNCTION()
    void UIPDANavigationDown();
    
    UFUNCTION()
    void UIPDANavigationButtonRelease();
    
protected:
    UFUNCTION()
    void ShowDetails(const bool bEmpty);
    
    UFUNCTION()
    void ShowBlockListNavigation(const bool bBlock);
    
    UFUNCTION()
    void ClickButtonMenu(const FName ButtonId);
    
};

