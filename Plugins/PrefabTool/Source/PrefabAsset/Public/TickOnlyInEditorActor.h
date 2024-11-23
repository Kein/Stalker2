#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TickOnlyInEditorActor.generated.h"

UCLASS()
class PREFABASSET_API ATickOnlyInEditorActor : public AActor {
    GENERATED_BODY()
public:
    ATickOnlyInEditorActor(const FObjectInitializer& ObjectInitializer);

};

