#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CodelockInteractionAnimations.h"
#include "PlayerCodelockAnimCollection.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UPlayerCodelockAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCodelockInteractionAnimations CodelockInteractionAnimations;
    
public:
    UPlayerCodelockAnimCollection();

};

