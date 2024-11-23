#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModGalleryEntry.generated.h"

class UModioCommonDynamicImage;
class UModioCommonModGalleryEntryStyle;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModGalleryEntry : public UModioCommonActivatableWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonModGalleryEntryStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonDynamicImage* ModImage;
    
public:
    UModioCommonModGalleryEntry();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonModGalleryEntryStyle> InStyle);
    

    // Fix for true pure virtual functions not being implemented
};

