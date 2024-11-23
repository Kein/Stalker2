#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PDANotesDetails.generated.h"

class UCheckBoxWidget;
class UCommonVerticalBox;
class UHorizontalBox;
class UImage;
class UModifiableRichText;
class UProgressBar;
class UScrollBox;
class UTextWidget;
class UVerticalBox;
class UWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDANotesDetails : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UVerticalBox* NotesBox;
    
    UPROPERTY(Instanced)
    UHorizontalBox* AudioContainer;
    
    UPROPERTY(Instanced)
    UImage* BackgroundImage;
    
    UPROPERTY(Instanced)
    UWidget* ImageContainer;
    
    UPROPERTY(Instanced)
    UModifiableRichText* TitleText;
    
    UPROPERTY(Instanced)
    UModifiableRichText* HintText;
    
    UPROPERTY(Instanced)
    UModifiableRichText* HeaderText;
    
    UPROPERTY(Instanced)
    UModifiableRichText* BodyText;
    
    UPROPERTY(Instanced)
    UModifiableRichText* FooterText;
    
    UPROPERTY(Instanced)
    UScrollBox* TextScroll;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCheckBoxWidget* AudioPlayButton;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UProgressBar* AudiologProgressBar;
    
    UPROPERTY(Instanced)
    UTextWidget* AbsentNoteText;
    
    UPROPERTY(Instanced)
    UTextWidget* TimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScrollMoveSpeed;
    
protected:
    UPROPERTY(Instanced)
    UCommonVerticalBox* ParentVerticalBox;
    
    UPROPERTY(Instanced)
    UWidget* TopBorder;
    
    UPROPERTY(Instanced)
    UWidget* BottomBorder;
    
    UPROPERTY(Instanced)
    UWidget* RightBorder;
    
    UPROPERTY(Instanced)
    UWidget* LeftBorder;
    
public:
    UPDANotesDetails();

    UFUNCTION(BlueprintCallable)
    void UpdateTimer();
    
    UFUNCTION(BlueprintCallable)
    void CheckBoxPlayAudio();
    
};

