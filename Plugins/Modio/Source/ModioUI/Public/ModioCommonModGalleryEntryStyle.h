#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModGalleryEntryStyle.generated.h"

class UModioCommonDynamicImageStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonModGalleryEntryStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonDynamicImageStyle> ModImageNormalStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonDynamicImageStyle> ModImageSelectedStyle;
    
    UModioCommonModGalleryEntryStyle();

};

