#pragma once
#include "CoreMinimal.h"
#include "EDebugBulletLog.generated.h"

UENUM()
enum class EDebugBulletLog {
    None,
    BaseDamage,
    LastBulletDamage,
    DistanceScalingDamage = 4,
    ArmorScalingDamage = 8,
    BoneScalingDamage = 16,
    BotsBaseDamage = 32,
    BotsLastBulletDamage = 64,
    BotsDistanceScalingDamage = 128,
    BotsArmorScalingDamage = 256,
    BotsBoneScalingDamage = 512,
    OnlyBaseDamage = 33,
    OnlyLastBulletDamage = 66,
    OnlyDistanceScalingDamage = 132,
    OnlyArmorScalingDamage = 264,
    OnlyBoneScalingDamage = 528,
    PlayerDamage = 31,
    BotsDamage = 992,
    Everything = 1023,
};

