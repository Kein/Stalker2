#pragma once
#include "CoreMinimal.h"
#include "InitialCollectionSize.generated.h"

USTRUCT(BlueprintType)
struct FInitialCollectionSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AgentView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AgentModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AnomalyView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AnomalyModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ArtifactView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ProjectileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AkLateReverbComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AkRoomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AkSurfaceReflectorSetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DestructibleView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DestructibleModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WetnessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FlashlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ContextualActionModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 QuestNode;
    
    STALKER2_API FInitialCollectionSize();
};

