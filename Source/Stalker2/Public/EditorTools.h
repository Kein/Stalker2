#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GSCCustomActorValidatorInterface -FallbackName=GSCCustomActorValidatorInterface
#include "EZeroBoundsFilter.h"
#include "EditorTools.generated.h"

class UWorld;

UCLASS() // FIXME custom module
class STALKER2_API AEditorTools : public AActor { //, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bEmptyGroupsOutputToMessageLog;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bEmptyGroupsOutputToConsole;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bRemoveEmptyGroupActors;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EZeroBoundsFilter ZeroBoundsFilter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bZeroBoundsOutputToConsole;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bZeroBoundsOutputToMessageLog;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bBigClustersOutputToConsole;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bBigClustersOutputToMessageLog;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bBigClustersExcludeEmptyGroupActors;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FName GridNameForDebug;
    
public:
    AEditorTools(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void XVerifyAllActorsForBrokenReference();
    
    UFUNCTION()
    void XRemoveRestoredLabelFromActors() const;
    
    UFUNCTION()
    void UpdateVoiceSounds();
    
    UFUNCTION()
    void RemoveEditorContainers();
    
public:
    UFUNCTION()
    static bool IsGameWorld(UWorld* GameWorld);
    
    UFUNCTION()
    static bool IsActorInGameWorld(AActor* ActorToCheck);
    
    UFUNCTION()
    static float GetSkyLightUpdateDeltaTime();
    
private:
    UFUNCTION()
    void FixAttachMeshes();
    
    UFUNCTION()
    void CheckAllPrototypes();
    
    UFUNCTION()
    void ChangeNotesToTeleportPoints();
    

    // Fix for true pure virtual functions not being implemented
};

