#pragma once
#include "CoreMinimal.h"
#include "AnimFaceBlendConfig.h"
#include "EAnimationHeadTypes.h"
#include "EEmotionalFaceMasks.h"
#include "EyesLookAtData.h"
#include "AnimHumanFaceData.generated.h"

class UAnimMontage;
class UAnimSequence;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanFaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequence*> DeathAnimations;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* CurrentDeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimMontage*> HitAnimations;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* LastHitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequence*> WoundedAnimations;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* CurrentWoundedAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* LastWoundedAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> BlendShapeCurves;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    EEmotionalFaceMasks CurrentFaceMask;
    
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* FaceMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* CharacterSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEyesLookAtData EyesLookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimFaceBlendConfig FaceBlendConfig;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimationHeadTypes HeadType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<float> BlockingMasks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> FastFaceBlendCurves;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> SlowFaceBlendCurves;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAlive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsThroatAnimationsEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsThroatAnimationPlaying;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPlayingDummyDialogAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsFaceAnimBlendingOut;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsFaceAnimPlaying;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsFaceTongueAnimPlaying;
    
    UPROPERTY(BlueprintReadOnly)
    float DisableIdleTongueCurveValue;
    
    FAnimHumanFaceData();
};

