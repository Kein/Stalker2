#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GSC_RelationColors.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FGSC_RelationColors : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ColourStyleID;
    
    FGSC_RelationColors();
};

