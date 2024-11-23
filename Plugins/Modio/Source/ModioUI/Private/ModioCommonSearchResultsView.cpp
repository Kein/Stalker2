#include "ModioCommonSearchResultsView.h"
#include "Templates/SubclassOf.h"

UModioCommonSearchResultsView::UModioCommonSearchResultsView() {
    this->ModioStyle = NULL;
    this->FilteredModListView = NULL;
    this->KeywordsLabelTextBlock = NULL;
    this->KeywordsDetailsTextBlock = NULL;
    this->CategoriesLabelTextBlock = NULL;
    this->CategoriesList = NULL;
    this->EditSearchButton = NULL;
    this->FilterCounterTextBlock = NULL;
    this->bWasEverPopulated = false;
}

void UModioCommonSearchResultsView::ShowSearchView_Implementation() {
}

void UModioCommonSearchResultsView::SetStyle(TSubclassOf<UModioCommonSearchResultsViewStyle> InStyle) {
}


