#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ECutsceneEyesIdleProfile.h"
#include "AnimNotify_ToggleEyesLookAt.generated.h"

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_ToggleEyesLookAt : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldChangeEyesIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECutsceneEyesIdleProfile NewEyesIdleProfile;
    
public:
    UAnimNotify_ToggleEyesLookAt();

};

