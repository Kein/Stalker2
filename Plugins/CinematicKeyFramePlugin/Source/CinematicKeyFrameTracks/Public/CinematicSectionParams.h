#pragma once
#include "CoreMinimal.h"
#include "CinematicSectionParams.generated.h"

class UMovieSceneSequencePlayer;

USTRUCT(BlueprintType)
struct CINEMATICKEYFRAMETRACKS_API FCinematicSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UMovieSceneSequencePlayer> SequencerPlayer;
    
    FCinematicSectionParams();
};

