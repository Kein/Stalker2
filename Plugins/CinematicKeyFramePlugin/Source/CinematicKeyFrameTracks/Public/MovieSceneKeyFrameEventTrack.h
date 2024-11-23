#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneKeyFrameEventTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class CINEMATICKEYFRAMETRACKS_API UMovieSceneKeyFrameEventTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneKeyFrameEventTrack();


    // Fix for true pure virtual functions not being implemented
};

