#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_LaunchVoiceOver.generated.h"

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_LaunchVoiceOver : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString VoiceOverSID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bQuest;
    
public:
    UAnimNotify_LaunchVoiceOver();

protected:
    UFUNCTION()
    TArray<FString> GetVoiceoverSIDOptions() const;
    
};

