#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioErrorCode.h"
#include "ModioModInfo.h"
#include "ModioCommonDialogLibrary.generated.h"

class UModioCommonDialogInfo;

UCLASS(BlueprintType)
class MODIOUI_API UModioCommonDialogLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioCommonDialogLibrary();

    UFUNCTION(BlueprintCallable)
    static UModioCommonDialogInfo* CreateUninstallDialogInfo(const FModioModInfo& ModInfo);
    
    UFUNCTION(BlueprintCallable)
    static UModioCommonDialogInfo* CreateManualDialogInfo(const FText& TitleText, const FText& DialogText);
    
    UFUNCTION(BlueprintCallable)
    static UModioCommonDialogInfo* CreateErrorDialogInfo(const FModioErrorCode& ErrorCode, const FText& TitleText);
    
    UFUNCTION(BlueprintCallable)
    static UModioCommonDialogInfo* CreateConfirmUninstallDialogInfo(const FModioModInfo& ModInfo);
    
};

