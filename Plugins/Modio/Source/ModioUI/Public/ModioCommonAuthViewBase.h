#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonAuthViewBase.generated.h"

class UModioCommonEmailAuthCodeViewBase;
class UModioCommonEmailAuthLoadingViewBase;
class UModioCommonEmailAuthViewBase;
class UModioCommonTermsOfUseViewBase;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonAuthViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonTermsOfUseViewBase> TermsOfUseViewClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonEmailAuthViewBase> EmailAuthViewClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonEmailAuthLoadingViewBase> EmailAuthLoadingViewClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonEmailAuthCodeViewBase> EmailAuthCodeViewBaseClass;
    
public:
    UModioCommonAuthViewBase();

};

