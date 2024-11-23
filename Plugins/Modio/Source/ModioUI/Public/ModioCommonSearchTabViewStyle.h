#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonSearchTabViewStyle.generated.h"

class UModioCommonBorderStyle;
class UModioCommonButtonStyle;
class UModioCommonEditableTextBoxStyle;
class UModioCommonTextStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonSearchTabViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonBorderStyle> InternalBackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonBorderStyle> OverlayBackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonTextStyle> SearchTabTitleTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonEditableTextBoxStyle> SearchTextBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonButtonStyle> CloseButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonButtonStyle> ResetButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonButtonStyle> SearchButtonStyle;
    
    UModioCommonSearchTabViewStyle();

};

