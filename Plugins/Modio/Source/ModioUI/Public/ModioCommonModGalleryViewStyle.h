#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModGalleryViewStyle.generated.h"

class UModioCommonDynamicImageStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonModGalleryViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonDynamicImageStyle> GalleryImageStyle;
    
    UModioCommonModGalleryViewStyle();

};

