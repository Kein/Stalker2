#pragma once
#include "CoreMinimal.h"
#include "AIEntityCollection.h"
#include "AITickComponentCollection.h"
#include "AgentCollection.h"
#include "AgentModelCollection.h"
#include "AkComponentCollection.h"
#include "AkLateReverbCollection.h"
#include "AkRoomCollection.h"
#include "AkSurfaceReflectorSetCollection.h"
#include "AnomalyCollection.h"
#include "AnomalyModelCollection.h"
#include "ArtifactCollection.h"
#include "BaseTickableManager.h"
#include "ContextualActionModelCollection.h"
#include "DestructibleModelCollection.h"
#include "DestructibleObjectCollection.h"
#include "HeadFlashlightComponentCollection.h"
#include "ItemContainerModelCollection.h"
#include "QuestNodeCollection.h"
#include "WetnessComponentCollection.h"
#include "TickAggregationManager.generated.h"

UCLASS()
class STALKER2_API UTickAggregationManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FAgentCollection AgentsCollection;
    
    UPROPERTY(Transient)
    FAIEntityCollection AIEntityCollection;
    
    UPROPERTY(Transient)
    FArtifactCollection ArtifactsCollection;
    
    UPROPERTY(Transient)
    FAnomalyCollection AnomaliesCollection;
    
    UPROPERTY(Transient)
    FAITickComponentCollection AITickComponentsCollection;
    
    UPROPERTY(Transient)
    FDestructibleObjectCollection DestructibleCollection;
    
    UPROPERTY(Transient)
    FWetnessComponentCollection WetnessComponentCollection;
    
    UPROPERTY(Transient)
    FHeadFlashlightComponentCollection HeadFlashlightComponentCollection;
    
    UPROPERTY(Transient)
    FItemContainerModelCollection ItemContainersCollection;
    
    UPROPERTY(Transient)
    FAkRoomCollection AkRoomComponentsCollection;
    
    UPROPERTY(Transient)
    FAkComponentCollection AkComponentsCollection;
    
    UPROPERTY(Transient)
    FAkLateReverbCollection AkLateReverbComponentsCollection;
    
    UPROPERTY(Transient)
    FAkSurfaceReflectorSetCollection AkSurfaceReflectorSetsCollection;
    
    UPROPERTY(Transient)
    FAgentModelCollection AgentModelCollection;
    
    UPROPERTY(Transient)
    FAnomalyModelCollection AnomalyModelCollection;
    
    UPROPERTY(Transient)
    FDestructibleModelCollection DestructibleModelCollection;
    
    UPROPERTY(Transient)
    FContextualActionModelCollection ContextualActionModelCollection;
    
    UPROPERTY(Transient)
    FQuestNodeCollection QuestNodeCollection;
    
public:
    UTickAggregationManager();

};

