#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateColor.h"
#include "UpgradesSettings.generated.h"

UCLASS()
class STALKER2_API UUpgradesSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FSlateColor Purchased;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor bLocked;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor Available;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor Toggleable;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor ResetUpgrade;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor Unavailable;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor LastUpdated;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor ClosedNotEmptySection;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor EmptySection;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor OpenedSection;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HorizontalMaxNumber;
    
    UPROPERTY(EditDefaultsOnly)
    int32 VerticalMaxNumber;
    
    UPROPERTY(EditDefaultsOnly)
    float SectionAnimationDuration;
    
    UUpgradesSettings();

};

