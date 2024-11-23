#include "IdleScreenView.h"

UIdleScreenView::UIdleScreenView() {
    this->IndicatorSpeed = 0.80f;
    this->TextSwitcher = NULL;
    this->TextTransitionAnim = NULL;
    this->ShaderCompilingAnim = NULL;
    this->ShadersCompilationBox = NULL;
    this->ProgressBarShaderCompiling = NULL;
}

void UIdleScreenView::OnAnyKeyIsPressed() {
}


