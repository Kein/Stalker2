#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerDK.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerDK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerDK();

    UFUNCTION(Exec)
    void XSetInventoryGamepadNavigationParams(const float InputDelay, const float InputThreshold, const float SelectionDelay) const;
    
    UFUNCTION(Exec)
    void XSetInventoryGamepadNavigationByAxises(const bool bAxes) const;
    
    UFUNCTION(Exec)
    void XSetInventoryGamepadInputThreshold(const float InputThreshold) const;
    
    UFUNCTION(Exec)
    void XSetInventoryGamepadInputSelectionDelay(const float InputSelectionDelay) const;
    
    UFUNCTION(Exec)
    void XSetInventoryGamepadInputDelay(const float InputDelay) const;
    
    UFUNCTION(Exec)
    void XSetGamepadNavigationBorderSpeed(const float Speed) const;
    
    UFUNCTION(Exec)
    void XGridNavigationVar(const int32 InVar) const;
    
    UFUNCTION(Exec)
    void XDrawDebugInventoryNavigation(const bool bDraw) const;
    
    UFUNCTION(Exec)
    void XDKStartTwoQuestStage(const FString& QSID) const;
    
    UFUNCTION(Exec)
    void XDKStartQuestStage(const FString& QSID, const FString& SSID) const;
    
    UFUNCTION(Exec)
    void XDKStartQuest(const FString& SID) const;
    
    UFUNCTION(Exec)
    void XDKFinishQuestStage(const FString& QSID, const FString& SSID, const bool bWin) const;
    
    UFUNCTION(Exec)
    void XDKFinishQuest(const FString& SID, const bool bWin) const;
    
    UFUNCTION(Exec)
    void UseStackSplitContextual(const bool bInUse) const;
    
    UFUNCTION(Exec)
    void MoveItemsInTrade(const bool bMoveTraderItems, const bool bMoveOwnItems, const bool bMoveBarterItems) const;
    
    UFUNCTION(Exec)
    void HideCursorInMouseDrag(const bool bHide) const;
    
    UFUNCTION(Exec)
    void AllwaysShowDropHere(const bool bShow) const;
    
};

