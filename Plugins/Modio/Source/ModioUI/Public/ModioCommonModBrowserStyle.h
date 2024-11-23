#pragma once
#include "CoreMinimal.h"
#include "ModioCommonModBrowserBaseStyle.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModBrowserStyle.generated.h"

class UModioCommonModListBase;
class UModioCommonQuickAccessViewBase;
class UModioCommonSearchViewBase;
class UModioCommonTabButtonBase;
class UModioCommonTabButtonStyle;

UCLASS(Abstract)
class MODIOUI_API UModioCommonModBrowserStyle : public UModioCommonModBrowserBaseStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonTabButtonBase> TabButtonClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonTabButtonStyle> TabButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonModListBase> FeaturedViewClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonModListBase> CollectionViewClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonQuickAccessViewBase> QuickAccessViewClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonSearchViewBase> SearchViewClass;
    
    UModioCommonModBrowserStyle();

};

