#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModioUserID.h"
#include "ModioUser.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioUserID userId;
    
    UPROPERTY(BlueprintReadOnly)
    FString username;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime DateOnline;
    
    UPROPERTY(BlueprintReadOnly)
    FString ProfileUrl;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisplayNamePortal;
    
    FModioUser();
};

