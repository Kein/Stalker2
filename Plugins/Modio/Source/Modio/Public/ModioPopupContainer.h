#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioPopupContainer.generated.h"

class UModioPopupBase;

UCLASS(EditInlineNew)
class UModioPopupContainer : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TArray<UModioPopupBase*> PopupStack;
    
    UPROPERTY(Instanced, Transient)
    TArray<UModioPopupBase*> PopupCache;
    
public:
    UModioPopupContainer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UModioPopupBase* PushPopup(TSubclassOf<UModioPopupBase> PopupClass);
    
    UFUNCTION(BlueprintCallable)
    UModioPopupBase* PopPopup(TSubclassOf<UModioPopupBase> PopupClass);
    
};

