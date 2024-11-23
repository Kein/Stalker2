#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GSCCustomActorValidatorInterface -FallbackName=GSCCustomActorValidatorInterface
#include "ContextualActionsGameGraphInfo.h"
#include "GameGraphContextualActions.h"
#include "GameGraphData.generated.h"

class UGameGraphRenderingComponent;

UCLASS() // FIXME custom module
class STALKER2_API AGameGraphData : public AActor { //, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<uint32, FGameGraphContextualActions> VertexContextualActions;
    
    UPROPERTY()
    TMap<FGuid, FContextualActionsGameGraphInfo> ContextualActionsVerticesInfo;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Instanced, Transient)
    UGameGraphRenderingComponent* DebugRenderingComp;
    
public:
    AGameGraphData(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

