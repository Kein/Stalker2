#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerSD.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerSD : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerSD();

    UFUNCTION(Exec)
    void XTeleportToPlacesOfInterest(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XShowCompass() const;
    
    UFUNCTION(Exec)
    void XShowAllWidget() const;
    
    UFUNCTION(Exec)
    void XHideCompass() const;
    
    UFUNCTION(Exec)
    void XHideAllWidget() const;
    
    UFUNCTION(Exec)
    void XGetActorNameByUID(int32 UID) const;
    
    UFUNCTION(Exec)
    void XBeginPlay() const;
    
};

