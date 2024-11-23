#include "ModioCommonRichTextBlock.h"
#include "Templates/SubclassOf.h"

UModioCommonRichTextBlock::UModioCommonRichTextBlock() {
    this->ModioStyle = NULL;
}

void UModioCommonRichTextBlock::SetStyle(TSubclassOf<UModioCommonRichTextStyle> InStyle) {
}


