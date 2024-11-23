#pragma once
#include "CoreMinimal.h"
#include "EAudioRoomPresetBase.generated.h"

UENUM()
enum class EAudioRoomPresetBase : int8 {
    None,
    Custom,
    GlobalExterior,
    RoomWoodSmall,
    RoomWoodMedium,
    RoomWoodLarge,
    RoomConcreteSmall,
    RoomConcreteMedium,
    RoomConcreteLarge,
    CaveGroundSmall,
    CaveGroundMedium,
    CaveGroundLarge,
    CaveRockSmall,
    CaveRockMedium,
    CaveRockLarge,
    HangarMedium,
    HangarLarge,
    LabSmall,
    LabMedium,
    LabLarge,
    SewerSmall,
    SewerMedium,
    SewerLarge,
    TunnelSmall,
    TunnelMedium,
    TunnelLarge,
    BasementSmall,
    BasementMedium,
    BasementLarge,
    IsolatedSmall,
    IsolatedMedium,
    IsolatedLarge,
    MetalSmall,
    SIRCAAMedium,
    SIRCAALarge,
    SIRCAAMediumNoDetails,
    SIRCAALargeNoDetails,
    SIRCAAGallery,
    Generators_Large,
    Elevator_Tunnel,
    Strelok_Arena,
    Lab_X7,
    XlabSmall,
    XlabMedium,
    XlabLarge,
    GetCount,
};

