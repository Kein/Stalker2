#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayerExternalAnimations.h"
#include "PlayerInternalAnimations.h"
#include "PlayerAnimCollection.generated.h"

class UPlayerAnimCollection;

UCLASS()
class STALKER2_API UPlayerAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPlayerExternalAnimations ExternalAnimations;
    
    UPROPERTY(EditAnywhere)
    FPlayerInternalAnimations InternalAnimations;
    
    UPROPERTY(EditAnywhere)
    UPlayerAnimCollection* ParentAnimCollection;
    
public:
    UPlayerAnimCollection();

};

