#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AkComponentRetargetRow.generated.h"

USTRUCT(BlueprintType)
struct FAkComponentRetargetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName TargetSocketName;
    
    STALKER2_API FAkComponentRetargetRow();
};

