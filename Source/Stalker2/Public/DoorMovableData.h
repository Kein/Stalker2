#pragma once
#include "CoreMinimal.h"
#include "EDoorMoveDirection.h"
#include "DoorMovableData.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FDoorMovableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpenAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpenAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StealthOpenAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StealthOpenAngle;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* DoorMeshComponent;
    
    UPROPERTY(VisibleAnywhere)
    float InitialAngle;
    
    UPROPERTY(VisibleAnywhere)
    EDoorMoveDirection CurrentDirection;
    
    FDoorMovableData();
};

