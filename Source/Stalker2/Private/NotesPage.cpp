#include "NotesPage.h"

UNotesPage::UNotesPage() {
    this->NoteDetails = NULL;
    this->ButtonAll = NULL;
    this->ButtonFlash = NULL;
    this->ButtonNotes = NULL;
    this->ButtonAudio = NULL;
    this->NotePanel = NULL;
    this->PlayAudioHint = NULL;
    this->DefaultOpenFilter = 0;
    this->NotesSlotListScrollTime = 0.50f;
    this->MappingContext = EMappingContext::None;
}

void UNotesPage::UIPDANavigationUp() {
}

void UNotesPage::UIPDANavigationRight() {
}

void UNotesPage::UIPDANavigationPlayAudio() {
}

void UNotesPage::UIPDANavigatioNoteUp() {
}

void UNotesPage::UIPDANavigatioNoteDown() {
}

void UNotesPage::UIPDANavigationLeft() {
}

void UNotesPage::UIPDANavigationDown() {
}

void UNotesPage::UIPDANavigationButtonRelease() {
}

void UNotesPage::SlotTransitionUp() {
}

void UNotesPage::ShowDetails(const bool bEmpty) {
}

void UNotesPage::ClickButtonMenu(const FName ButtonId) {
}


