#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PresentationSubsystem.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UPresentationSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPresentationSubsystem();

    UFUNCTION(BlueprintCallable)
    void ResumeGame();
    
    UFUNCTION(BlueprintCallable)
    void GoToMainMenu();
    
};

