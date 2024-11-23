#pragma once
#include "CoreMinimal.h"
#include "ModioModBrowserInterface.h"
#include "ModioUIUserChangedReceiver.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModBrowserBase.generated.h"

class UModioCommonModBrowserBaseStyle;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModBrowserBase : public UModioCommonActivatableWidget, public IModioModBrowserInterface, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonModBrowserBaseStyle> ModioStyle;
    
public:
    UModioCommonModBrowserBase();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonModBrowserBaseStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsUserAuthenticated() const;
    

    // Fix for true pure virtual functions not being implemented
};

