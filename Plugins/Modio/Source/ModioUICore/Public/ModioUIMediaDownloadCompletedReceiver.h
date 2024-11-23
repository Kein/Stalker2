#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EModioLogoSize.h"
#include "ModioErrorCode.h"
#include "ModioModID.h"
#include "ModioOptionalImage.h"
#include "ModioUIMediaDownloadCompletedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIMediaDownloadCompletedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIMediaDownloadCompletedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalImage Image, EModioLogoSize LogoSize);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ec, int32 ImageIndex, FModioOptionalImage Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalImage Image);
    
};

