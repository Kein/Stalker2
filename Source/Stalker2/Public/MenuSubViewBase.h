#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "TextProperties.h"
#include "MenuSubViewBase.generated.h"

class UMenuButtonBase;
class UMenuButtonModel;
class UPanelWidget;
class UScrollBox;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UMenuSubViewBase : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextWidget* PauseText;
    
    UPROPERTY(Instanced)
    UPanelWidget* ButtonPanel;
    
    UPROPERTY(EditDefaultsOnly)
    UMenuButtonModel* MenuButtonModel;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DefaultSelectedIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FTextProperties TextProperties;
    
    UPROPERTY(EditDefaultsOnly)
    float SpaceBetweenOptions;
    
    UPROPERTY(Instanced)
    UScrollBox* ScrollBox;
    
    UPROPERTY(Instanced, Transient)
    TArray<UMenuButtonBase*> MenuOptionsHolder;
    
    UPROPERTY(Instanced, Transient)
    UMenuButtonBase* SelectedButton;
    
public:
    UMenuSubViewBase();

    UFUNCTION()
    void SelectOptionWidget(UMenuButtonBase* ButtonWidget);
    
};

