#pragma once
#include "CoreMinimal.h"
#include "DialogAnswerInfo.h"
#include "UID.h"
#include "DialogFolderInfo.generated.h"

USTRUCT()
struct FDialogFolderInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText FolderName;
    
    UPROPERTY()
    TArray<FDialogAnswerInfo> Answers;
    
    UPROPERTY()
    FUID MemberUID;
    
    STALKER2_API FDialogFolderInfo();
};

