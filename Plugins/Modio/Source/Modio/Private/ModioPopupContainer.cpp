#include "ModioPopupContainer.h"
#include "Components/SlateWrapperTypes.h"
#include "Templates/SubclassOf.h"

UModioPopupContainer::UModioPopupContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->Visibility = ESlateVisibility::Collapsed;
}

UModioPopupBase* UModioPopupContainer::PushPopup_Implementation(TSubclassOf<UModioPopupBase> PopupClass) {
    return NULL;
}

UModioPopupBase* UModioPopupContainer::PopPopup(TSubclassOf<UModioPopupBase> PopupClass) {
    return NULL;
}


