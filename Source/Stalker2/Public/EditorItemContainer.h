#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMeshSubType.h"
#include "SpawnedItem.h"
#include "EditorItemContainer.generated.h"

UCLASS()
class STALKER2_API AEditorItemContainer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FString ConfigSID;
    
    UPROPERTY(EditAnywhere)
    FString BaseItemContainerPrototypeSID;
    
    UPROPERTY(EditAnywhere)
    FString MeshPath;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnedItem> SimpleItems;
    
private:
    UPROPERTY(EditDefaultsOnly)
    EMeshSubType ItemContainerType;
    
public:
    AEditorItemContainer(const FObjectInitializer& ObjectInitializer);

};

