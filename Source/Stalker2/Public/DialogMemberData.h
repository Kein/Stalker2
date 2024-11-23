#pragma once
#include "CoreMinimal.h"
#include "DialogMemberData.generated.h"

USTRUCT()
struct FDialogMemberData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString DialogMemberName;
    
    UPROPERTY(EditAnywhere)
    bool bOptionalMember;
    
    STALKER2_API FDialogMemberData();
};

