#pragma once
#include "CoreMinimal.h"
#include "ModioCommonImageBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonImage.generated.h"

class UCommonLazyImage;
class UModioCommonImageStyle;
class UTexture2DDynamic;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonImage : public UModioCommonImageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonImageStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonLazyImage* ImageFrame;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonLazyImage* Image;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTexture2DDynamic* LoadedImageTexture;
    
public:
    UModioCommonImage();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonImageStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SynchronizeProperties();
    
};

