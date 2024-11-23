#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonQuickAccessTabViewStyle.generated.h"

class UModioCommonBorderStyle;
class UModioCommonButtonStyle;
class UModioCommonDynamicImageStyle;
class UModioCommonModOperationTrackerUserWidgetStyle;
class UModioCommonStorageSpaceTrackerUserWidgetStyle;
class UModioCommonTextStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonQuickAccessTabViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonBorderStyle> InternalBackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonBorderStyle> OverlayBackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonDynamicImageStyle> ProfileImageStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> UserNameTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonStorageSpaceTrackerUserWidgetStyle> StorageSpaceTrackerStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonModOperationTrackerUserWidgetStyle> ModOperationTrackerStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonButtonStyle> MainGameMenuButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonButtonStyle> AuthButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonButtonStyle> MyCollectionButtonStyle;
    
    UModioCommonQuickAccessTabViewStyle();

};

