#pragma once
#include "CoreMinimal.h"
#include "TickOnlyInEditorActor.h"
#include "PrefabRelativePositionCustomPrimitiveDataUpdatingActor.generated.h"

UCLASS()
class PREFABASSET_API APrefabRelativePositionCustomPrimitiveDataUpdatingActor : public ATickOnlyInEditorActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 CustomDataIndex;
    
    APrefabRelativePositionCustomPrimitiveDataUpdatingActor(const FObjectInitializer& ObjectInitializer);

};

