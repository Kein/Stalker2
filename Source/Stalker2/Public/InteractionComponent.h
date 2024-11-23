#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractSignatureDelegate.h"
#include "OnExcludeQuestNodeDelegateDelegate.h"
#include "OnFinishQuestNodeDelegateDelegate.h"
#include "OnStartQuestNodeDelegateDelegate.h"
#include "UIDActorComponent.h"
#include "InteractionComponent.generated.h"

class UInteractableAnimCollection;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UInteractionComponent : public UUIDActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnStartQuestNodeDelegate OnStartQuestNode;
    
    UPROPERTY(BlueprintAssignable)
    FOnFinishQuestNodeDelegate OnFinishQuestNode;
    
    UPROPERTY(BlueprintAssignable)
    FOnExcludeQuestNodeDelegate OnExcludeQuestNode;
    
    UPROPERTY(BlueprintAssignable)
    FInteractSignature OnInteractedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInteractSignature OnEndInteractedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInteractSignature OnNotifyInteractEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InteractionSocketName;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bIsInteractionActive;
    
    UPROPERTY(EditAnywhere)
    bool bShouldReleaseTargetOnInteraction;
    
    UPROPERTY(EditAnywhere)
    bool bRightHandBusy;
    
    UPROPERTY(EditAnywhere)
    bool bLeftHandBusy;
    
    UPROPERTY(EditAnywhere)
    bool bIsConeInteraction;
    
    UPROPERTY(EditAnywhere)
    bool bShowInactive;
    
    UPROPERTY(EditAnywhere)
    bool bSelfActivating;
    
    UPROPERTY(EditAnywhere)
    float MinInteractionRadius;
    
    UPROPERTY(EditAnywhere)
    float MaxInteractionRadius;
    
    UPROPERTY(EditAnywhere)
    FVector ConeTipOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InteractionHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InteractionPointHeightOffset;
    
    UPROPERTY(EditAnywhere)
    FVector ConeDirection;
    
    UPROPERTY(EditAnywhere)
    float ConeHeight;
    
    UPROPERTY(EditAnywhere)
    float ConeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UInteractableAnimCollection* InteractableAnimCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Offset;
    
    UPROPERTY(EditAnywhere)
    bool bShowInteractionDot;
    
public:
    UInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShowInactive(const bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfActivating(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionDistance(const float MinDistance, const float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionActive(const bool bActive);
    
    UFUNCTION(BlueprintPure)
    bool HasRelatedQuest() const;
    
private:
    UFUNCTION(BlueprintPure)
    bool HasItemRequirement() const;
    
};

