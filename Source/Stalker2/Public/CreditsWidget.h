#pragma once
#include "CoreMinimal.h"
#include "RoleDisplaySettings.h"
#include "SectionTitleDisplaySettings.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "CreditsWidget.generated.h"

class UCreditsNamesWidget;
class UCreditsRoleWidget;
class UCreditsSectionTitle;
class UCreditsSpacer;
class UOverlay;
class UScrollBox;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UCreditsWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UVerticalBox* ItemsContainer;
    
    UPROPERTY(Instanced)
    UScrollBox* CreditsScroll;
    
    UPROPERTY(Instanced)
    UOverlay* CreditsOverlay;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCreditsSpacer> SpacerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCreditsSectionTitle> CreditsSectionTitleClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCreditsRoleWidget> CreditsRoleTitleClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCreditsNamesWidget> CreditsNamesClass;
    
    UPROPERTY(Transient)
    UWidgetAnimation* AppearAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    FSectionTitleDisplaySettings SectionTitleDisplaySettings;
    
    UPROPERTY(EditDefaultsOnly)
    FRoleDisplaySettings FirstRoleDisplaySettings;
    
    UPROPERTY(EditDefaultsOnly)
    FRoleDisplaySettings RoleDisplaySettings;
    
    UPROPERTY(EditInstanceOnly)
    float CreditsScrollMultiplier;
    
    UPROPERTY(EditInstanceOnly)
    float CreditsScrollUserMultiplier;
    
public:
    UCreditsWidget();

};

