#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ButtonBase.h"
#include "PDAButtonBase.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UPDAButtonBase : public UButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UImage* BackgroundLeft;
    
    UPROPERTY(Instanced)
    UImage* BackgroundRight;
    
    UPROPERTY(Instanced)
    UImage* NewPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ButtonCollorEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ButtonCollorDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ButtonEnabledStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ButtonDisabledStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudHoverOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnHoverOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldShowNewItem;
    
    UPDAButtonBase();

};

