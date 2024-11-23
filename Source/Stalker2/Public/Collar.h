#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Collar.generated.h"

class UAkComponent;
class USkeletalMeshComponent;

UCLASS()
class STALKER2_API ACollar : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CollarSID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAkComponent* HissingComp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* CollarSK;
    
public:
    ACollar(const FObjectInitializer& ObjectInitializer);

};

