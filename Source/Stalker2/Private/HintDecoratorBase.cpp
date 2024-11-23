#include "HintDecoratorBase.h"

UHintDecoratorBase::UHintDecoratorBase() : URichTextBlockImageDecorator(FObjectInitializer::Get()) {
    this->DefaultPlatform = EGSCInputDeviceType::MouseKeyboard;
    this->bEnableEditorDebug = false;
    this->bEnableRecolorIcon = true;
    this->bEnableRecolorConnectedBack = true;
    this->bShouldUseStylePrefix = false;
}


