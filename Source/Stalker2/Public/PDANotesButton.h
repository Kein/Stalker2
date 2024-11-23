#pragma once
#include "CoreMinimal.h"
#include "NoteFilterSettings.h"
#include "PDAButtonBase.h"
#include "PDANotesButton.generated.h"

class UImageWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UPDANotesButton : public UPDAButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImageWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FNoteFilterSettings FilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldEnableStailManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPDANotesButton();

};

