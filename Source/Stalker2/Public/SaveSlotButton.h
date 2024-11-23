#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MenuButtonBase.h"
#include "ShortcutData.h"
#include "SaveSlotButton.generated.h"

class UEditableTextBox;
class UImage;
class UTextWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API USaveSlotButton : public UMenuButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* Thumbnail;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UImage* CompatibilityImage;
    
    UPROPERTY(Instanced)
    UEditableTextBox* SaveName;
    
    UPROPERTY(Instanced)
    UTextWidget* DateTime;
    
    UPROPERTY(Instanced)
    UTextWidget* GameDuration;
    
    UPROPERTY(Instanced)
    UTextWidget* SaveTypeText;
    
    UPROPERTY(Instanced)
    UTextWidget* LocationName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FShortcutData> RenameStateShortcuts;
    
    UPROPERTY(EditDefaultsOnly)
    FString DateTimeFormat;
    
    UPROPERTY(EditDefaultsOnly)
    FString GameDurationTimeFormat;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor CompatibleSaveColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor PartiallyCompatibleSaveColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NonCompatibleSaveColor;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UTexture2D>> SaveIcons;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> CorruptedSaveThumbnail;
    
public:
    USaveSlotButton();

};

