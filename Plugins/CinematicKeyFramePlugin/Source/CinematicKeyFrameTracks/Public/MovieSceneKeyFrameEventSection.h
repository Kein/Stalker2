#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "CinematicKeyFrameData.h"
#include "MovieSceneKeyFrameEventSection.generated.h"

UCLASS()
class CINEMATICKEYFRAMETRACKS_API UMovieSceneKeyFrameEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCinematicKeyFrameData Data;
    
    UMovieSceneKeyFrameEventSection();

};

