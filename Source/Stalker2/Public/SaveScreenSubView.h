#pragma once
#include "CoreMinimal.h"
#include "ESaveType.h"
#include "MenuSubViewBase.h"
#include "ShortcutData.h"
#include "Templates/SubclassOf.h"
#include "SaveScreenSubView.generated.h"

class UMenuButtonActionBase;
class UMenuButtonBase;
class UMenuNavigationPanelBase;
class USaveLoadActionBase;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API USaveScreenSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    USaveLoadActionBase* SaveButtonActionPrototype;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMenuButtonBase> SaveButtonStyleClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FShortcutData> SaveButtonShortcuts;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USaveLoadActionBase* NewSaveButtonActionPrototype;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMenuButtonBase> NewSaveButtonStyleClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMenuButtonBase> BlockedButtonStyleClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FShortcutData> NewSaveButtonShortcuts;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<ESaveType> SaveTypesToShow;
    
    UPROPERTY(EditDefaultsOnly)
    bool bLoadPage;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UMenuButtonActionBase* BlockedSaveButtonAction;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UMenuButtonActionBase* SaveButtonAction;
    
    UPROPERTY(Instanced)
    UMenuNavigationPanelBase* NavigationPanel;
    
public:
    USaveScreenSubView();

    UFUNCTION()
    void OnNavigationButtonPressed(const int32 InButtonIndex);
    
};

