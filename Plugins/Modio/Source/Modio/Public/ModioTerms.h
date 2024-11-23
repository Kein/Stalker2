#pragma once
#include "CoreMinimal.h"
#include "ModioLink.h"
#include "ModioTerms.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioTerms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString AgreeButtonText;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisagreeButtonText;
    
    UPROPERTY(BlueprintReadOnly)
    FModioLink WebsiteLink;
    
    UPROPERTY(BlueprintReadOnly)
    FModioLink TermsLink;
    
    UPROPERTY(BlueprintReadOnly)
    FModioLink PrivacyLink;
    
    UPROPERTY(BlueprintReadOnly)
    FModioLink ManageLink;
    
    FModioTerms();
};

