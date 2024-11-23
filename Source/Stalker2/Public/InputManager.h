#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "InputManager.generated.h"

class AActor;
class ACharacter;
class UInputComponent;
class UInputMappingContext;
class UInputProcessingUnit;
class UPlayerInput;

UCLASS()
class STALKER2_API UInputManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UInputMappingContext> RemapMappingContext;
    
    UPROPERTY()
    TArray<UInputProcessingUnit*> InputProcessingUnits;
    
    UPROPERTY()
    TArray<UInputProcessingUnit*> TickableIPUs;
    
    UPROPERTY(Instanced)
    UInputComponent* InputComponent;
    
    UPROPERTY()
    UPlayerInput* PlayerInput;
    
    UPROPERTY()
    ACharacter* PlayerCharacter;
    
    UPROPERTY(Transient)
    AActor* InteractProgressBarFocusedActor;
    
public:
    UInputManager();

};

