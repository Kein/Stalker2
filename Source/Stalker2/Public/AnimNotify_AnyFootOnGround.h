#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFootType.h"
#include "AnimNotify_AnyFootOnGround.generated.h"

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_AnyFootOnGround : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFootType Foot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ToeSocketName;
    
    UPROPERTY(EditAnywhere)
    bool bAttachedParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UAnimNotify_AnyFootOnGround();

};

