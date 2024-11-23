#include "AnimNotify_UpdateMagazineVisibililty.h"

UAnimNotify_UpdateMagazineVisibililty::UAnimNotify_UpdateMagazineVisibililty() {
    this->bShowMagazine = false;
    this->TargetAttachedMagazineType = EAttachedMagazineType::Insert;
    this->UpdateSource = EUpdateSource::Reload;
}


