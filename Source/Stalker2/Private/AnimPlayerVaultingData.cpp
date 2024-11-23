#include "AnimPlayerVaultingData.h"

FAnimPlayerVaultingData::FAnimPlayerVaultingData() {
    this->State = EVaultState::None;
    this->bIsVaulting = false;
    this->bIsAnimInProgress = false;
    this->bIsVaultingOver = false;
    this->bIsVaultingOnTop = false;
    this->Sequence = NULL;
    this->VaultAlpha = 0.00f;
}

