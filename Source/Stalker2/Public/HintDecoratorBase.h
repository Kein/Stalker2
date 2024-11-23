#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "EGSCInputDeviceType.h"
#include "HintDecoratorBase.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UHintDecoratorBase : public URichTextBlockImageDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGSCInputDeviceType DefaultPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableEditorDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableRecolorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableRecolorConnectedBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldUseStylePrefix;
    
    UHintDecoratorBase();

};

