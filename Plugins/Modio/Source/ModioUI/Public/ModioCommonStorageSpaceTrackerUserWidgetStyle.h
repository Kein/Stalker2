#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonStorageSpaceTrackerUserWidgetStyle.generated.h"

class UModioCommonImageStyle;
class UModioCommonProgressBarStyle;
class UModioCommonTextStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonStorageSpaceTrackerUserWidgetStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonImageStyle> IconImageStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> UsedSpaceLabelTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> UsedSpaceTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> FreeSpaceLabelTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> FreeSpaceTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> TotalSpaceLabelTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> TotalSpaceTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonProgressBarStyle> StorageSpaceProgressBarStyle;
    
    UModioCommonStorageSpaceTrackerUserWidgetStyle();

};

