#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModCollectionEntry.h"
#include "ModioModInfoUIDetails.h"
#include "ModioModCollectionEntryUI.generated.h"

UCLASS(BlueprintType)
class MODIOUICORE_API UModioModCollectionEntryUI : public UObject, public IModioModInfoUIDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FModioModCollectionEntry Underlying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bCachedSubscriptionStatus;
    
    UModioModCollectionEntryUI();


    // Fix for true pure virtual functions not being implemented
};

