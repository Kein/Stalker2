#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_BlendToSection.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_BlendToSection : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SectionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAlphaBlend BlendOption;
    
    UAnimNotify_BlendToSection();

};

