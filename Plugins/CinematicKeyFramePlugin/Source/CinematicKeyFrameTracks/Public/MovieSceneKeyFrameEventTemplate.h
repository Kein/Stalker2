#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "CinematicKeyFrameData.h"
#include "MovieSceneKeyFrameEventTemplate.generated.h"

USTRUCT()
struct CINEMATICKEYFRAMETRACKS_API FMovieSceneKeyFrameEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCinematicKeyFrameData Data;
    
    FMovieSceneKeyFrameEventTemplate();
};

