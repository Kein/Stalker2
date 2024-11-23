#pragma once
#include "CoreMinimal.h"
#include "ModioUnsigned64.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonStorageSpaceTrackerUserWidget.generated.h"

class UModioCommonImage;
class UModioCommonProgressBar;
class UModioCommonStorageSpaceTrackerUserWidgetStyle;
class UModioCommonStorageSpaceTrackerWidget;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonStorageSpaceTrackerUserWidget : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonStorageSpaceTrackerUserWidgetStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonStorageSpaceTrackerWidget* Tracker;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonImage* IconImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* UsedSpaceLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* UsedSpaceTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* FreeSpaceLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* FreeSpaceTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TotalSpaceLabelTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TotalSpaceTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonProgressBar* StorageSpaceProgressBar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinDecimals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxDecimals;
    
public:
    UModioCommonStorageSpaceTrackerUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonStorageSpaceTrackerUserWidgetStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnStorageSpaceTrackerUpdated(FModioUnsigned64 UsedSpace, FModioUnsigned64 FreeSpace, FModioUnsigned64 TotalSpace);
    
};

