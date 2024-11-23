#pragma once
#include "CoreMinimal.h"
#include "ModioUIUserAvatarDownloadCompletedReceiver.h"
#include "ModioUIUserChangedReceiver.h"
#include "ModioCommonDynamicImage.h"
#include "ModioCommonProfileImage.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonProfileImage : public UModioCommonDynamicImage, public IModioUIUserChangedReceiver, public IModioUIUserAvatarDownloadCompletedReceiver {
    GENERATED_BODY()
public:
    UModioCommonProfileImage();


    // Fix for true pure virtual functions not being implemented
};

