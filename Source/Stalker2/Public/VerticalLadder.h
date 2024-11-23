#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "ActorInteractionDataInterface.h"
#include "ELadderType.h"
#include "InteractableObject.h"
#include "VerticalLadder.generated.h"

class AActor;
class UArrowComponent;
class UBoxComponent;
class UImpulseComponent;
class ULadderComponent;
class UPrimitiveComponent;
class USceneComponent;
class USingleClickComponent;

UCLASS()
class STALKER2_API AVerticalLadder : public AInteractableObject, public IActorInteractionDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UBoxComponent* ClimbZone;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UArrowComponent* ClimbStart;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USceneComponent* FoldedLadderRoot;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UBoxComponent* FoldedLadderCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USingleClickComponent* SingleClickComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    ULadderComponent* LadderComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UImpulseComponent* ImpulseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D CollisionExtend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionHeightUpperExtend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LadderAccessAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LadderHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoInteractTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoInteractBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bClimbingCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMeshVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELadderType LadderType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFoldedLadder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FoldedLadderHeight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float FoldedLadderZLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoldedLadderHorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoldedLadderPushImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BottomSupportMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TopSupportMeshOffset;
    
public:
    AVerticalLadder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void ProtectMeshLock(const ECollisionEnabled::Type CollisionType);
    
private:
    UFUNCTION()
    void OnUnfoldingStarted();
    
    UFUNCTION()
    void OnUnfoldingEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnLadderEnabled();
    
    UFUNCTION()
    void OnHiddenStateChanged();
    
protected:
    UFUNCTION()
    void OnClimbZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnClimbZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
private:
    UFUNCTION(BlueprintPure)
    float GetClimbZoneHalfHeight() const;
    

    // Fix for true pure virtual functions not being implemented
};

