#pragma once
#include "CoreMinimal.h"
#include "EAnimGuitarRightHandState.h"
#include "EAnimGuitarState.h"
#include "AnimPlayerGuitarData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerGuitarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraPitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraYawLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraResetInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentChord;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimGuitarState AnimGuitarState;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimGuitarRightHandState RightHandState;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPlayingGuitar;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPlayFromContextual;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsMajorScale;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldExitGuitar;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAutoStrumMode;
    
    UPROPERTY(BlueprintReadOnly)
    float CameraYaw;
    
    UPROPERTY(BlueprintReadOnly)
    float CameraPitch;
    
    FAnimPlayerGuitarData();
};

