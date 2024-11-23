#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerContextualAction.generated.h"

class USingleClickComponent;

UCLASS()
class STALKER2_API APlayerContextualAction : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USingleClickComponent* SingleClickComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraYawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraYawMax;
    
public:
    APlayerContextualAction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void ActionStart();
    
    UFUNCTION()
    void ActionEnd();
    
};

