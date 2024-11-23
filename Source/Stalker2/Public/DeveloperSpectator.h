#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DeveloperSpectator.generated.h"

class UCameraComponent;

UCLASS()
class STALKER2_API ADeveloperSpectator : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SpeedMultiplier;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
public:
    ADeveloperSpectator(const FObjectInitializer& ObjectInitializer);

};

