#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHintType.h"
#include "EInteractionSystemNotificationsType.h"
#include "NotificationModel.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FNotificationModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHintType HintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bItemsRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionSystemNotificationsType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AudiologChainPrototypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AudiologDuration;
    
    FNotificationModel();
};

