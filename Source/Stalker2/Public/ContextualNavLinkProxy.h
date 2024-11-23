#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "ContextualNavLinkProxy.generated.h"

class AActor;

UCLASS()
class STALKER2_API AContextualNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    AContextualNavLinkProxy(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnStartUsingCustomLink(AActor* MovingActor, const FVector& DestinationPoint);
    
};

