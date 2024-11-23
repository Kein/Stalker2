#pragma once
#include "CoreMinimal.h"
#include "GuidActorComponent.h"
#include "OnHiddenStateChangedDelegate.h"
#include "OnUnfoldingEndedDelegate.h"
#include "OnUnfoldingStartedDelegate.h"
#include "SaveableComponent.h"
#include "LadderComponent.generated.h"

class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULadderComponent : public UGuidActorComponent, public ISaveableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* UnfoldingCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* HorizontalOffsetCurve;
    
    UPROPERTY(BlueprintAssignable)
    FOnUnfoldingStarted OnUnfoldingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnUnfoldingEnded OnUnfoldingEnded;
    
    UPROPERTY(BlueprintAssignable)
    FOnHiddenStateChanged OnHiddenStateChanged;
    
private:
    UPROPERTY(EditAnywhere)
    bool bTopBlocked;
    
    UPROPERTY(EditAnywhere)
    bool bLadderHidden;
    
public:
    ULadderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTopBlocked(const bool InbTopBlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetLadderHidden(const bool InbLadderHidden);
    
    UFUNCTION(BlueprintPure)
    bool IsTopBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLadderHidden() const;
    

    // Fix for true pure virtual functions not being implemented
};

