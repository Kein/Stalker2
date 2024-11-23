#include "ModioCommonScrollBoxStyle.h"

UModioCommonScrollBoxStyle::UModioCommonScrollBoxStyle() {
    this->ScrollBarStyle = NULL;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->ConsumeMouseWheel = EConsumeMouseWheel::WhenScrollingPossible;
    this->AllowOverscroll = false;
    this->BackPadScrolling = false;
    this->FrontPadScrolling = false;
    this->bAnimateWheelScrolling = false;
    this->NavigationDestination = EDescendantScrollDestination::IntoView;
    this->NavigationScrollPadding = 0.00f;
    this->ScrollWhenFocusChanges = EScrollWhenFocusChanges::NoScroll;
    this->bAllowRightClickDragScrolling = false;
    this->WheelScrollMultiplier = 1.00f;
    this->bScrollByNavigationInput = false;
    this->NavigationScrollOffsetStep = 100;
    this->NavigationScrollOffsetSpeed = 0.10f;
}


