#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadResult.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadResult : uint8 {
    Success,
    InvalidCampaign,
    NoFreeSaveSlots,
    CantOverwriteSave,
    DataSaveFailed,
    LoadFileDoesNotExist,
    LoadFileReadingFailed,
    CampaignsSaveFailed,
    CampaignsFileReadingFailed,
    SaveDoesNotExist,
    SaveDeleteFailed,
    ThumbnailDeleteFailed,
    NoFreeCampaignSlots,
    NoSavesToLoad,
    CantAutosave,
    SavingRestricted,
    GenericError,
    SaveInProgress,
    GetCount,
};

