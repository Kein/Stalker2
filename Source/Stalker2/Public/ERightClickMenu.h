#pragma once
#include "CoreMinimal.h"
#include "ERightClickMenu.generated.h"

UENUM(BlueprintType)
enum class ERightClickMenu : uint8 {
    Use,
    Take,
    TakeAll,
    EquipToArtifactSlot,
    Equip,
    Unequip,
    Sell,
    SellAll,
    Buy,
    BuyAll,
    Return,
    UnloadAmmo,
    InspectArtifact,
    EquipToQuickSlot,
    AttachToWeapon,
    Remove,
    ReturnAll,
    Put,
    PutAll,
    Drop,
    DropAll,
    DetachAttach,
    DetachAllAttaches,
    Repair,
    RepairAll,
    Compare,
    ChangeWeaponAmmo,
    GetCount,
};

