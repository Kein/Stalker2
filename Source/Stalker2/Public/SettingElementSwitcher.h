#pragma once
#include "CoreMinimal.h"
#include "SettingElement.h"
#include "SettingElementSwitcher.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API USettingElementSwitcher : public USettingElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<int32, FString> ValuesToLocSID;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> AvailableValues;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    UPROPERTY(EditAnywhere)
    bool bLocalizeValues;
    
    UPROPERTY(EditInstanceOnly)
    int32 DisableDependenciesWhenValueIs;
    
    UPROPERTY(EditInstanceOnly)
    TArray<int32> DisableDependenciesValues;
    
    UPROPERTY(EditInstanceOnly)
    bool bWrapValueAround;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateDescriptionOnValueChange;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FString> ValuesToDescriptionSID;
    
    UPROPERTY(EditInstanceOnly)
    bool bReverseValues;
    
public:
    USettingElementSwitcher();

private:
    UFUNCTION()
    void SortValues();
    
};

