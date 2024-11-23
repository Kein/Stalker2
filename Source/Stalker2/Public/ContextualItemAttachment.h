#pragma once
#include "CoreMinimal.h"
#include "EContextualItemAttachType.h"
#include "ContextualItemAttachment.generated.h"

class UNiagaraSystem;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct STALKER2_API FContextualItemAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EContextualItemAttachType ContextualItemAttachType;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FName AttachmentName;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* MeshToBeAttached;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* SkeletalMeshToBeAttached;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* NiagaraAsset;
    
    FContextualItemAttachment();
};

