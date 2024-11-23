#pragma once
#include "CoreMinimal.h"
#include "EItemContainerType.generated.h"

UENUM(BlueprintType)
enum class EItemContainerType : uint8 {
    None,
    Inventory,
    Trader,
    Stash,
    PlayerBuyCart,
    PlayerSellCart,
    SingleItem,
    PackOfItems,
    Dummy,
    GetCount,
};

