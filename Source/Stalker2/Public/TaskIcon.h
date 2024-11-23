#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetBase.h"
#include "TaskIcon.generated.h"

class UImage;
class USizeBox;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UTaskIcon : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FVector2f DesiredSize;
    
protected:
    UPROPERTY(Instanced)
    USizeBox* IconSize;
    
    UPROPERTY(Instanced)
    UImage* SelectedMarker;
    
    UPROPERTY(Instanced)
    UImage* TaskMarker;
    
    UPROPERTY(EditDefaultsOnly)
    FName MainQuestColorStyleID;
    
    UPROPERTY(EditDefaultsOnly)
    FName SecondaryQuestColorStyleID;
    
public:
    UTaskIcon();

};

