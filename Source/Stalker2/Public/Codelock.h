#pragma once
#include "CoreMinimal.h"
#include "ECodelockKeyType.h"
#include "InteractableObject.h"
#include "Codelock.generated.h"

class UCodeComponent;
class UCodelockSingleClickComponent;
class USkeletalMeshComponent;

UCLASS()
class STALKER2_API ACodelock : public AInteractableObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCodelockSingleClickComponent* InteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCodeComponent* CodeComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float CodeLockDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float CodeLockZoomInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float CodeLockZoomOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    float CodeLockForceZoomOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    float FailDisplayTimerRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverrideKeyMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, ECodelockKeyType> KeyMap;
    
public:
    ACodelock(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnKeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputCodePassed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputCodeFailed();
    
};

