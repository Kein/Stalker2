#pragma once
#include "CoreMinimal.h"
#include "ModioCreateModParams.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioCreateModParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PathToLogoFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Summary;
    
    FModioCreateModParams();
};

