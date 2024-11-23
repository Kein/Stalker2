#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "CharacterStatSlot.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UCharacterStatSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* StatImage;
    
    UPROPERTY(Instanced)
    UImage* ProgressImage;
    
    UPROPERTY(Instanced)
    UImage* ProgressBeckground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldShowProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* StatIcon;
    
    UCharacterStatSlot();

};

