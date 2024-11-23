#pragma once
#include "CoreMinimal.h"
#include "DifficultyData.h"
#include "MenuSubViewBase.h"
#include "ShortcutData.h"
#include "Templates/SubclassOf.h"
#include "DifficultySubView.generated.h"

class UMenuButtonBase;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UDifficultySubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMenuButtonBase> DifficultyButtonStyleClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FShortcutData> DifficultyButtonShortcuts;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, FDifficultyData> DifficultyDataSet;
    
public:
    UDifficultySubView();

};

