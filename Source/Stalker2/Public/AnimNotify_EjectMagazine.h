#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_EjectMagazine.generated.h"

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_EjectMagazine : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Lifetime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector InitialImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MagazineSocketName;
    
    UAnimNotify_EjectMagazine();

};

