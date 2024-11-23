#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "EDamageSource.h"
#include "EDamageType.h"
#include "EffectValueOverridePair.h"
#include "UID.h"
#include "Weapon.h"
#include "CommonHitArgs.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FCommonHitArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ImpulseStr;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ArmorDamage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ArmorPiercing;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Bleeding;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float BleedingChanceIncrement;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector ImpulseDir;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUID DamageDealerUID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EDamageType DamageType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bDirectDamageSkipCalculations;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bShouldIgnoreArmor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FEffectValueOverridePair> ApplicableEffects;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EDamageSource DamageSource;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FWeapon Weapon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bFlownThroughObject;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LaunchTimestamp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsFractionDamage;
    
    FCommonHitArgs();
};

