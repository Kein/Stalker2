#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ReferenceHolderBase.generated.h"

UCLASS()
class STALKER2_API AReferenceHolderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<FSoftObjectPath, UClass*> ObjectsReferences;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath AssetPath;
    
    AReferenceHolderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void ValidateGatheredReferences() const;
    
    UFUNCTION()
    void UpdateObjectReferences();
    
    UFUNCTION()
    void CheckAssetReferences();
    
};

