#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GuidInterface.h"
#include "UIDActor_InteractableObject.h"
#include "InteractableObject.generated.h"

UCLASS()
class STALKER2_API AInteractableObject : public AUIDActor_InteractableObject, public IGuidInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bUnbreakable;
    
    UPROPERTY(EditAnywhere)
    bool bBroken;
    
    UPROPERTY(EditAnywhere)
    bool bSelfSufficient;
    
    UPROPERTY(EditAnywhere)
    bool bPrerequisiteRequired;
    
    UPROPERTY(EditDefaultsOnly)
    bool bInteractionActive;
    
    UPROPERTY(Transient)
    bool bFirstPlay;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGuid Guid;
    
public:
    AInteractableObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Toggle();
    
    UFUNCTION(BlueprintCallable)
    void SetUnbreakable(const bool bInUnbreakable);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfSufficient(const bool bInSelfSufficient);
    
    UFUNCTION(BlueprintCallable)
    void SetPrerequisiteRequired(const bool bInPrerequisiteRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionActive(const bool bInInteractionActive);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBroken(const bool bInBroken);
    
    UFUNCTION(BlueprintCallable)
    void PauseSkeletalComponent(const bool bPause);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNightStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFirstPlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEmissionStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEmissionFinish();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDayStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimationEventTriggered();
    
    UFUNCTION(BlueprintPure)
    bool IsUnbreakable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSelfSufficient() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPrerequisiteRequired() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBroken() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetGUID() const override PURE_VIRTUAL(GetGUID, return FGuid{};);
    
};

