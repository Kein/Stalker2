#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModTagEntry.generated.h"

class UModioCommonButtonBase;
class UModioCommonCheckBox;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModTagEntry : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UModioCommonButtonBase* TagButton;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UModioCommonCheckBox* TagCheckbox;
    
    UPROPERTY(BlueprintReadOnly)
    FString Tag;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllowMultipleSelection;
    
public:
    UModioCommonModTagEntry();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTag(const FString& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelected(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAllowMultipleSelection(bool bInAllowMultipleSelection);
    
    UFUNCTION(BlueprintPure)
    FString GetTag() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSelected() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllowMultipleSelection() const;
    
};

