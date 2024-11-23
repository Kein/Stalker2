#pragma once
#include "CoreMinimal.h"
#include "DebugWidgetBase.h"
#include "UIWarningSettings.h"
#include "DebugTextWidgetBase.generated.h"

class UDataTable;
class UGSCTextBlock;
class UImage;
class UUserWidget;

UCLASS(EditInlineNew)
class STALKER2_API UDebugTextWidgetBase : public UDebugWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName WidgetWarningId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TextWarningDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsShouldEnableInWidget;
    
    UPROPERTY(Instanced)
    UImage* DebugImage;
    
    UPROPERTY(Instanced)
    UGSCTextBlock* DebugText;
    
    UDebugTextWidgetBase();

protected:
    UFUNCTION()
    FUIWarningSettings FindRengeSettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckDebugTextBluprint(const FText& Text, UUserWidget* InOwnerWidget);
    
};

