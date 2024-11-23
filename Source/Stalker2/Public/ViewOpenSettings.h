#pragma once
#include "CoreMinimal.h"
#include "ECloseType.h"
#include "EWidgetNameEx.h"
#include "ViewOpenSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FViewOpenSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEffectCursorOnShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudShowMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudIgnoreInputOnPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudClearInputOnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudSendOpenUpdateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudCheckOpenView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudIgnoreCheckOpenView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoudIgnoreLowPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNewerCloseOtherViews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECloseType CloseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EWidgetNameEx> WidgetsToHideThisWhenOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EWidgetNameEx> CloseWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PriorityZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanBeRestoredAfterPause;
    
public:
    FViewOpenSettings();
};

