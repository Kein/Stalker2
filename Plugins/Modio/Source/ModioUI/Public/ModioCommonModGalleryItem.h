#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModInfo.h"
#include "ModioCommonModGalleryItem.generated.h"

UCLASS(BlueprintType)
class MODIOUI_API UModioCommonModGalleryItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioModInfo ModInfo;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ImageGalleryIndex;
    
    UModioCommonModGalleryItem();

};

