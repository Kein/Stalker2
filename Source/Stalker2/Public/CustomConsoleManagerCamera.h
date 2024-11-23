#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerCamera.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerCamera : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerCamera();

    UFUNCTION(Exec)
    void ForegroundDepthScale(const float DepthScale);
    
};

