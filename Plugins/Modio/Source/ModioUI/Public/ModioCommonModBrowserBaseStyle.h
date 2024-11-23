#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModBrowserBaseStyle.generated.h"

class UModioCommonAuthViewBase;
class UModioCommonDialogViewBase;
class UModioCommonModDetailsViewBase;
class UModioCommonReportViewBase;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonModBrowserBaseStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonModDetailsViewBase> ModDetailsClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonAuthViewBase> UserAuthClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonReportViewBase> ReportClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonDialogViewBase> DialogClass;
    
    UModioCommonModBrowserBaseStyle();

};

