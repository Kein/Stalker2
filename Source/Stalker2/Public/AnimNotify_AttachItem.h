#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAttachAction.h"
#include "EAttachType.h"
#include "AnimNotify_AttachItem.generated.h"

class USkeletalMesh;

UCLASS(CollapseCategories)
class UAnimNotify_AttachItem : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttachAction AttachAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForceBindedHandsLookVertical;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldOverwritePitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttachType AttachedItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString BindedAttachSid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* AttachMesh;
    
    UAnimNotify_AttachItem();

};

