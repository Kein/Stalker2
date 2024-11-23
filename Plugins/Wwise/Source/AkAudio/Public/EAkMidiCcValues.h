#pragma once
#include "CoreMinimal.h"
#include "EAkMidiCcValues.generated.h"

UENUM(BlueprintType)
enum class EAkMidiCcValues : uint8 {
    AkMidiCcBankSelectCoarse,
    AkMidiCcModWheelCoarse,
    AkMidiCcBreathCtrlCoarse,
    AkMidiCcCtrl3Coarse,
    AkMidiCcFootPedalCoarse,
    AkMidiCcPortamentoCoarse,
    AkMidiCcDataEntryCoarse,
    AkMidiCcVolumeCoarse,
    AkMidiCcBalanceCoarse,
    AkMidiCcCtrl9Coarse,
    AkMidiCcPanPositionCoarse,
    AkMidiCcExpressionCoarse,
    AkMidiCcEffectCtrl1Coarse,
    AkMidiCcEffectCtrl2Coarse,
    AkMidiCcCtrl14Coarse,
    AkMidiCcCtrl15Coarse,
    AkMidiCcGenSlider1,
    AkMidiCcGenSlider2,
    AkMidiCcGenSlider3,
    AkMidiCcGenSlider4,
    AkMidiCcCtrl20Coarse,
    AkMidiCcCtrl21Coarse,
    AkMidiCcCtrl22Coarse,
    AkMidiCcCtrl23Coarse,
    AkMidiCcCtrl24Coarse,
    AkMidiCcCtrl25Coarse,
    AkMidiCcCtrl26Coarse,
    AkMidiCcCtrl27Coarse,
    AkMidiCcCtrl28Coarse,
    AkMidiCcCtrl29Coarse,
    AkMidiCcCtrl30Coarse,
    AkMidiCcCtrl31Coarse,
    AkMidiCcBankSelectFine,
    AkMidiCcModWheelFine,
    AkMidiCcBreathCtrlFine,
    AkMidiCcCtrl3Fine,
    AkMidiCcFootPedalFine,
    AkMidiCcPortamentoFine,
    AkMidiCcDataEntryFine,
    AkMidiCcVolumeFine,
    AkMidiCcBalanceFine,
    AkMidiCcCtrl9Fine,
    AkMidiCcPanPositionFine,
    AkMidiCcExpressionFine,
    AkMidiCcEffectCtrl1Fine,
    AkMidiCcEffectCtrl2Fine,
    AkMidiCcCtrl14Fine,
    AkMidiCcCtrl15Fine,
    AkMidiCcCtrl20Fine = 52,
    AkMidiCcCtrl21Fine,
    AkMidiCcCtrl22Fine,
    AkMidiCcCtrl23Fine,
    AkMidiCcCtrl24Fine,
    AkMidiCcCtrl25Fine,
    AkMidiCcCtrl26Fine,
    AkMidiCcCtrl27Fine,
    AkMidiCcCtrl28Fine,
    AkMidiCcCtrl29Fine,
    AkMidiCcCtrl30Fine,
    AkMidiCcCtrl31Fine,
    AkMidiCcHoldPedal,
    AkMidiCcPortamentoOnOff,
    AkMidiCcSustenutoPedal,
    AkMidiCcSoftPedal,
    AkMidiCcLegatoPedal,
    AkMidiCcHoldPedal2,
    AkMidiCcSoundVariation,
    AkMidiCcSoundTimbre,
    AkMidiCcSoundReleaseTime,
    AkMidiCcSoundAttackTime,
    AkMidiCcSoundBrightness,
    AkMidiCcSoundCtrl6,
    AkMidiCcSoundCtrl7,
    AkMidiCcSoundCtrl8,
    AkMidiCcSoundCtrl9,
    AkMidiCcSoundCtrl10,
    AkMidiCcGeneralButton1,
    AkMidiCcGeneralButton2,
    AkMidiCcGeneralButton3,
    AkMidiCcGeneralButton4,
    AkMidiCcReverbLevel = 91,
    AkMidiCcTremoloLevel,
    AkMidiCcChorusLevel,
    AkMidiCcCelesteLevel,
    AkMidiCcPhaserLevel,
    AkMidiCcDataButtonP1,
    AkMidiCcDataButtonM1,
    AkMidiCcNonRegisterCoarse,
    AkMidiCcNonRegisterFine,
    AkMidiCcAllSoundOff = 120,
    AkMidiCcAllControllersOff,
    AkMidiCcLocalKeyboard,
    AkMidiCcAllNotesOff,
    AkMidiCcOmniModeOff,
    AkMidiCcOmniModeOn,
    AkMidiCcOmniMonophonicOn,
    AkMidiCcOmniPolyphonicOn,
};

