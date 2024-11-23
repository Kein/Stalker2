#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "ELoadingDestination.h"
#include "InfoScreenSettings.h"
#include "LoadingScreenBehaviourSettings.h"
#include "LoadingScreenSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class STALKER2_API ULoadingScreenSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    TMap<ELoadingDestination, FLoadingScreenBehaviourSettings> LoadingScreenBehaviourSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSlateFontInfo DescriptionFont;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSlateFontInfo TitleFont;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSlateFontInfo WaitForUserInputTextStyle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FLinearColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FMargin ContentPadding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FMargin TipsTitleTextPadding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FMargin TipsTextPadding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FMargin LoadArrowPadding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FVector2D LoadArrowRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float WaitForUserInputTextPos;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 TipsRangeMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FText WaitForUserInputText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSoftObjectPath LoadingScreenIndicatorBackground;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FVector2D LoadingScreenIndicatorBackgroundSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSoftObjectPath LoadingIndicatorArrow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSoftObjectPath ForegroundImage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSoftObjectPath SlidingDirtMaterialPtrTopLeft;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSoftObjectPath SlidingDirtMaterialPtrTopRight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSoftObjectPath SlidingDirtMaterialPtrBottomLeft;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSoftObjectPath SlidingDirtMaterialPtrBottomRight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    TArray<FInfoScreenSettings> InfoScreenSettingsData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FVector2D SlidingDirtMaterialSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float TimeTillShowingLoadingIndicator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float TimeTillHidingLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSoftObjectPath CustomTeleportMediaSource;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FSoftObjectPath IntroductionLogoMediaSource;
    
    ULoadingScreenSettings();

};

