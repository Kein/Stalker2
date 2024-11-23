#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractObjectData.h"
#include "ItemGiveComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UItemGiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FInteractObjectData> ObjectsToGive;
    
public:
    UItemGiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ProvideItems();
    
};

