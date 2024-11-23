#pragma once
#include "CoreMinimal.h"
#include "BackgroundSettings.h"
#include "EMappingContext.h"
#include "ENoteType.h"
#include "PDAPage.h"
#include "NotesPage.generated.h"

class UPDANotePanel;
class UPDANotesButton;
class UPDANotesDetails;
class UWidget;

UCLASS(EditInlineNew)
class STALKER2_API UNotesPage : public UPDAPage {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPDANotesDetails* NoteDetails;
    
    UPROPERTY(Instanced)
    UPDANotesButton* ButtonAll;
    
    UPROPERTY(Instanced)
    UPDANotesButton* ButtonFlash;
    
    UPROPERTY(Instanced)
    UPDANotesButton* ButtonNotes;
    
    UPROPERTY(Instanced)
    UPDANotesButton* ButtonAudio;
    
    UPROPERTY(Instanced)
    UPDANotePanel* NotePanel;
    
    UPROPERTY(Instanced)
    UWidget* PlayAudioHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefaultOpenFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NotesSlotListScrollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ENoteType, FBackgroundSettings> BackgroundSettings;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName ButtonActionLeft;
    
    UPROPERTY(EditDefaultsOnly)
    FName ButtonActionRight;
    
    UPROPERTY(EditDefaultsOnly)
    EMappingContext MappingContext;
    
public:
    UNotesPage();

    UFUNCTION()
    void UIPDANavigationUp();
    
    UFUNCTION()
    void UIPDANavigationRight();
    
    UFUNCTION()
    void UIPDANavigationPlayAudio();
    
    UFUNCTION()
    void UIPDANavigatioNoteUp();
    
    UFUNCTION()
    void UIPDANavigatioNoteDown();
    
    UFUNCTION()
    void UIPDANavigationLeft();
    
    UFUNCTION()
    void UIPDANavigationDown();
    
    UFUNCTION()
    void UIPDANavigationButtonRelease();
    
protected:
    UFUNCTION()
    void SlotTransitionUp();
    
    UFUNCTION()
    void ShowDetails(const bool bEmpty);
    
    UFUNCTION()
    void ClickButtonMenu(const FName ButtonId);
    
};

