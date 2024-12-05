#pragma once
#include "CoreMinimal.h"
//#include "InteractionType.h"
#include "EDisplayPriority.h"
#include "InteractableComponentEndInteractSignatureDelegate.h"
#include "InteractableComponentRunActionSignatureDelegate.h"
#include "InteractableComponentRunAlternativeActionSignatureDelegate.h"
#include "OnExcludeQuestNodeSignatureDelegate.h"
#include "OnFinishQuestNodeSignatureDelegate.h"
#include "OnStartQuestNodeSignatureDelegate.h"
#include "OnUpdateInteractDelegate.h"
#include "OnUpdateProgressDelegate.h"
#include "UIDActorComponent.h"
#include "InteractableComponent.generated.h"

class AActor;
class UBaseInteractableAction;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UInteractableComponent : public UUIDActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnStartQuestNodeSignature OnStartQuestNode;
    
    UPROPERTY(BlueprintAssignable)
    FOnFinishQuestNodeSignature OnFinishQuestNode;
    
    UPROPERTY(BlueprintAssignable)
    FOnExcludeQuestNodeSignature OnExcludeQuestNode;
    
    UPROPERTY(BlueprintAssignable)
    FInteractableComponentRunActionSignature OnRunAction;
    
    UPROPERTY(BlueprintAssignable)
    FInteractableComponentRunAlternativeActionSignature OnRunAlternativeAction;
    
    UPROPERTY(BlueprintAssignable)
    FInteractableComponentEndInteractSignature OnEndInteract;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateInteract OnUpdateInteract;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateProgress OnUpdateProgress;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UBaseInteractableAction*> InteractableActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> TriggerActorsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> AlternativeTriggerActorsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TriggerUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TriggerAlternativeUserData;
    
    //UPROPERTY(EditAnywhere)
    //EInteractionType InteractionType;
    
    UPROPERTY(EditAnywhere)
    EDisplayPriority DisplayPriority;
    
    UPROPERTY(EditAnywhere)
    float InteractionProgressDurationTime;
    
    UPROPERTY(EditAnywhere)
    float InteractionProgressIncreasingSpeed;
    
    UPROPERTY(EditAnywhere)
    float InteractionProgressFillTimeInSeconds;
    
    UPROPERTY(EditAnywhere)
    FString OverrideInteractionPromptText;
    
    UPROPERTY(EditAnywhere)
    bool bTickableInteractable;
    
    UPROPERTY(EditAnywhere)
    bool bInteractableWithDeadBody;
    
    UPROPERTY(Transient)
    AActor* CurrentInteractingActor;
    
public:
    UInteractableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bInEnabled);
    
    UFUNCTION()
    void SetDisplayPriority(const EDisplayPriority& NewPriority);
    
    UFUNCTION()
    bool GetPreventDefaultInteract() const;
    
    //UFUNCTION()
    //EInteractionType GetInteractionType() const;
    
    UFUNCTION()
    EDisplayPriority GetDisplayPriority() const;
    
};

