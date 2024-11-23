#pragma once
#include "CoreMinimal.h"
#include "AnimCutsceneData.h"
#include "AnimHandItemData.h"
#include "AnimInstanceBase.h"
#include "AnimLocomotionData.h"
#include "AnimPlayerAutoCoverData.h"
#include "AnimPlayerCameraData.h"
#include "AnimPlayerClimbingData.h"
#include "AnimPlayerCollectionsData.h"
#include "AnimPlayerDetectorData.h"
#include "AnimPlayerDialogData.h"
#include "AnimPlayerDodgeData.h"
#include "AnimPlayerGuitarData.h"
#include "AnimPlayerHitData.h"
#include "AnimPlayerIdleSwayData.h"
#include "AnimPlayerLookAtData.h"
#include "AnimPlayerMaterialData.h"
#include "AnimPlayerShadowData.h"
#include "AnimPlayerStateData.h"
#include "AnimPlayerStealthData.h"
#include "AnimPlayerTransitionData.h"
#include "AnimPlayerUnfocusableTargetData.h"
#include "AnimPlayerVaultingData.h"
#include "AnimPlayerWeaponData.h"
#include "AnimPlayerWeaponInertiaData.h"
#include "AnimPlayerWeaponPushbackData.h"
#include "AnimPlayerWeaponSwingData.h"
#include "AnimTwoHandsIKData.h"
#include "TwoLegIKData.h"
#include "AnimInstancePlayer.generated.h"

UCLASS(NonTransient)
class STALKER2_API UAnimInstancePlayer : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimLocomotionData LocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerWeaponData WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerCameraData CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerTransitionData TransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerStateData StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerCollectionsData CollectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimTwoHandsIKData HandsIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTwoLegIKData LegsIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerIdleSwayData IdleSwayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerClimbingData ClimbingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerWeaponSwingData WeaponSwingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerWeaponInertiaData WeaponInertiaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerWeaponPushbackData WeaponPushbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerDetectorData DetectorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHandItemData HandItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerMaterialData MaterialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerLookAtData LookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerAutoCoverData AutoCoverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerGuitarData GuitarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerDodgeData DodgeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerDialogData DialogData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimPlayerUnfocusableTargetData AnimPlayerUnfocusableTargetData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimPlayerVaultingData VaultingData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimPlayerShadowData ShadowData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimPlayerStealthData StealthData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimCutsceneData CutsceneData;
    
public:
    UAnimInstancePlayer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimNotify_InteractionEvent();
    
};

