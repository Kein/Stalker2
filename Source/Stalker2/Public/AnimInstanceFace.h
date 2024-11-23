#pragma once
#include "CoreMinimal.h"
#include "AnimCutsceneData.h"
#include "AnimHumanFaceData.h"
#include "AnimHumanStateData.h"
#include "AnimInstanceBase.h"
#include "AnimSleepData.h"
#include "AnimWoundedData.h"
#include "AnimInstanceFace.generated.h"

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceFace : public UAnimInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanStateData StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanFaceData FaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimWoundedData WoundedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimSleepData SleepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimCutsceneData CutsceneData;
    
    UAnimInstanceFace();

};

