#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EInteractFXType.h"
#include "AnimNotify_PlayInteractablesFX.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_PlayInteractablesFX : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CustomBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EInteractFXType InteractFXType;
    
    UAnimNotify_PlayInteractablesFX();

    //FIXME was static
    UFUNCTION()
    TArray<FString> GetAvailableBones() const;
    
};

