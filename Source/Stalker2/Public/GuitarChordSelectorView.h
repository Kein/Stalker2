#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "GuitarChordSelectorView.generated.h"

class UGuitarChordView;
class UHintInputController;

UCLASS(EditInlineNew)
class STALKER2_API UGuitarChordSelectorView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UHintInputController* HintGuitarSwapScale;
    
    UPROPERTY(Instanced)
    UGuitarChordView* GuitarChord1View;
    
    UPROPERTY(Instanced)
    UGuitarChordView* GuitarChord2View;
    
    UPROPERTY(Instanced)
    UGuitarChordView* GuitarChord3View;
    
    UPROPERTY(Instanced)
    UGuitarChordView* GuitarChord4View;
    
    UPROPERTY(Instanced)
    UGuitarChordView* GuitarChord5View;
    
    UPROPERTY(Instanced)
    UGuitarChordView* GuitarChord6View;
    
    UPROPERTY(Instanced, Transient)
    UGuitarChordView* HoveredChord;
    
    UGuitarChordSelectorView();

};

