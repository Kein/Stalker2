#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAttachedMagazineType.h"
#include "EUpdateSource.h"
#include "AnimNotify_UpdateMagazineVisibililty.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_UpdateMagazineVisibililty : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowMagazine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttachedMagazineType TargetAttachedMagazineType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUpdateSource UpdateSource;
    
    UAnimNotify_UpdateMagazineVisibililty();

};

