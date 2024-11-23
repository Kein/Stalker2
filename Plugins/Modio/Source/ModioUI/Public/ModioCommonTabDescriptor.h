#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonTabDescriptor.generated.h"

class UModioCommonTabButtonBase;
class UModioCommonTabButtonStyle;

USTRUCT(BlueprintType)
struct FModioCommonTabDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TabText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonTabButtonBase> TabButtonType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonTabButtonStyle> TabButtonStyle;
    
    MODIOUI_API FModioCommonTabDescriptor();
};

