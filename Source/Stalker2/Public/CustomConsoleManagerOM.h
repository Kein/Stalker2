#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerOM.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerOM : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerOM();

private:
    UFUNCTION(Exec)
    void XSetCarouselTimeToCenter(float Time) const;
    
    UFUNCTION(Exec)
    void XSetCarouselRotation(float Rotation) const;
    
    UFUNCTION(Exec)
    void XSetCarouselLiftUpTime(float Time) const;
    
    UFUNCTION(Exec)
    void XSetCarouselForce(float Force) const;
    
    UFUNCTION(Exec)
    void XSetCarouselDuration(float Duration) const;
    
    UFUNCTION(Exec)
    void XSetCarouselDebugTrajectory(bool bEnable) const;
    
    UFUNCTION(Exec)
    void XSetCarouselAngle(float Angle) const;
    
};

