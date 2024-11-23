#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EModioCommonDialogButtonType.h"
#include "ModioCommonDialogInfo.generated.h"

UCLASS(BlueprintType)
class MODIOUI_API UModioCommonDialogInfo : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogButtonClicked, EModioCommonDialogButtonType, ClickedButtonType);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DialogText;
    
    UPROPERTY(EditAnywhere)
    uint8 ButtonsToDisplay;
    
    UPROPERTY(BlueprintAssignable)
    FOnDialogButtonClicked OnDialogButtonClicked;
    
    UPROPERTY(BlueprintReadWrite)
    UObject* Owner;
    
    UModioCommonDialogInfo();

    UFUNCTION(BlueprintCallable)
    void HandleDialogButtonClicked(EModioCommonDialogButtonType ClickedButtonType);
    
};

