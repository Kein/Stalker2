#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonScrollBoxStyle.generated.h"

class UModioCommonScrollBarStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonScrollBoxStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScrollBoxStyle Style;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonScrollBarStyle> ScrollBarStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESlateVisibility ScrollBarVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AllowOverscroll;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BackPadScrolling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool FrontPadScrolling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAnimateWheelScrolling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EDescendantScrollDestination NavigationDestination;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NavigationScrollPadding;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EScrollWhenFocusChanges ScrollWhenFocusChanges;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowRightClickDragScrolling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WheelScrollMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bScrollByNavigationInput;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NavigationScrollOffsetStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NavigationScrollOffsetSpeed;
    
    UModioCommonScrollBoxStyle();

};

