#pragma once
#include "CoreMinimal.h"
#include "ModioCommonReportReasonViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonReportReasonView.generated.h"

class UModioCommonButtonBase;
class UModioCommonCheckBox;
class UModioCommonCheckBoxStyle;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonReportReasonView : public UModioCommonReportReasonViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonCheckBoxStyle> ReportCheckBoxStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCheckBox* DMCACheckBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCheckBox* NotWorkingCheckBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCheckBox* RudeContentCheckBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCheckBox* IllegalContentCheckBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCheckBox* StolenContentCheckBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCheckBox* FalseInformationCheckBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCheckBox* OtherCheckBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* ProceedButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CancelButton;
    
public:
    UModioCommonReportReasonView();

};

