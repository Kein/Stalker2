#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LookAtAngleParams.h"
#include "LookAtSourceComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULookAtSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* Target;
    
    UPROPERTY(EditAnywhere)
    bool bIsEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bUseDefaultSetting;
    
    UPROPERTY(EditAnywhere)
    FLookAtAngleParams LookAtAngleParams;
    
    ULookAtSourceComponent(const FObjectInitializer& ObjectInitializer);

};

