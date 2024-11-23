#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CutsceneBlinkConfig.h"
#include "ECutsceneBlinkProfile.h"
#include "ECutsceneEyesIdleProfile.h"
#include "EyesLookAtData.generated.h"

class AActor;
class UAnimMontage;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FEyesLookAtData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ECutsceneBlinkProfile, FCutsceneBlinkConfig> CutsceneBlinkConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* BlinkAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlinkOnEyeMoveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlinkOnEyeMoveInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ControlRigEnableInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ControlRigDisableInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float CutsceneProceduralEyesWeight;
    
    UPROPERTY(BlueprintReadOnly)
    float CutsceneProceduralEyesAmplitude;
    
    UPROPERTY(BlueprintReadOnly)
    float CutsceneProceduralEyesIntensity;
    
    UPROPERTY()
    bool bShouldBeEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    float ControlRigAlpha;
    
    UPROPERTY()
    float CutsceneEyesLookAtWeight;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LookAtLocation;
    
    UPROPERTY()
    AActor* LookAtActor;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* LookAtSkeletalMesh;
    
    UPROPERTY()
    ECutsceneBlinkProfile CutsceneBlinkProfile;
    
    UPROPERTY(BlueprintReadOnly)
    ECutsceneEyesIdleProfile CutsceneEyesIdleProfile;
    
    UPROPERTY()
    float TimeToNextBlink;
    
    UPROPERTY()
    float BlinkOnEyeMoveCooldown;
    
    UPROPERTY(BlueprintReadOnly)
    float CutsceneHeadControlRigAlpha;
    
    UPROPERTY()
    float CutsceneHeadLookAtWeight;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldOffOnEdges;
    
    FEyesLookAtData();
};

