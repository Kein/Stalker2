#include "CustomSimplifiedGrid.h"

UCustomSimplifiedGrid::UCustomSimplifiedGrid() : UUserWidget(FObjectInitializer::Get()) {
    this->CanvasPanel = NULL;
    this->TilingBack = NULL;
    this->SizeY = 0;
    this->SizeX = 0;
    this->GamepadCurrPosX = 0;
    this->GamepadCurrPosY = 0;
    this->ItemPlacementPanel = NULL;
    this->OwnerMoney = NULL;
    this->GridScrollBox = NULL;
    this->HeaderText = NULL;
    this->GridSizeBox = NULL;
    this->ItemPlaceBorder = NULL;
    this->ScrollCanvasPanel = NULL;
    this->NavBorder = NULL;
    this->VerticalBoxScroll = NULL;
    this->bDefaultScrollEnd = false;
    this->bShowHeader = false;
    this->WeightText = NULL;
    this->MaxWeightText = NULL;
    this->WeightUnits = NULL;
    this->LootSeparator = NULL;
    this->WeightIcon = NULL;
    this->BeforeGamepadNavigationDelay = 0.01f;
    this->GamepadNavigationThreshold = 0.05f;
    this->GamepadNavigationDelay = 0.05f;
    this->bDrawDebugNavigationLines = false;
    this->NavCurve = NULL;
    this->ItemSlotWidgetClass = NULL;
    this->CellSize = 65.00f;
    this->CurrMovingWidget = NULL;
    this->MousePosTargetWidget = NULL;
    this->NavPosChangeAnimSpeed = 300.00f;
}

void UCustomSimplifiedGrid::OnScrollBarScrolled(float Offset) {
}


