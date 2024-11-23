#include "QuickSlot.h"

UQuickSlot::UQuickSlot() {
    this->Icon = NULL;
    this->Background = NULL;
    this->DefaultImage = NULL;
    this->UseFrame = NULL;
    this->ShouldUseFrame = NULL;
    this->HighlightImage = NULL;
    this->ItemCountText = NULL;
    this->IconSizeBox = NULL;
    this->InventoryHighlightImage = NULL;
    this->ClickAnimation = NULL;
    this->ShouldUseAnimation = NULL;
    this->SlotIndex = 0;
    this->BackgroundTexture = NULL;
    this->UseFrameTexture = NULL;
    this->ShouldUseFrameTexture = NULL;
    this->DefaultIconTexture = NULL;
    this->InventoryHighlightTexture = NULL;
    this->QuickSlotSize = 70.00f;
    this->IconSize = 64.00f;
    this->bEnableHint = true;
    this->bEnableCountText = true;
    this->bEnableTransparency = true;
    this->bEnableClickAnimation = true;
    this->bEnableShouldUseAnimation = true;
    this->LowTransparency = 0.50f;
    this->HighTransparency = 1.00f;
    this->ClickAnimationSpeed = 1.00f;
    this->ShouldUseAnimationSpeed = 1.00f;
    this->ShouldUseAnimationDuration = 10;
    this->ShouldUseAnimationCooldown = 10;
    this->SlotTypeIcon = NULL;
}

void UQuickSlot::StopCooldown() {
}


