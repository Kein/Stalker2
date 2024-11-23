# TODO
Search for `FIXME` if you want to see all the things that need to be addressed

# Plugin dependencies
1. `Wwise 2023.1.7.8574.3199` if you need audio modding, otherwise use stub
2. `modio_ue4_public_src_v2023.11.ue5`

If you dont need ModIO then comment out all references and dependencies.


# Engine changes requirements
Commend out all references to `EInteractionType` or add an `InteractionType.h`enum to engine space:
```c++
#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EInteractionType : uint8
{
    None = 0,
    Hold = 1,
    MultiClick = 2,
    Combined = 3,
    SingleClick = 4,
    DealDamage = 5,
    AutoInteraction = 6,
    EInteractionType_MAX = 7,
};
```

The rest of the engine requirements are commented out, use `FIXME` to find them.

