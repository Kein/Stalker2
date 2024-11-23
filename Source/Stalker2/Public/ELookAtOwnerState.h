#pragma once
#include "CoreMinimal.h"
#include "ELookAtOwnerState.generated.h"

UENUM(BlueprintType)
enum class ELookAtOwnerState : uint8 {
    Empty,
    RelaxStand,
    RelaxARStand,
    CombatStand,
    CombatCrouch,
    CombatLowCrouch,
    CoverIdleStand,
    CoverIdleCrouch,
    CoverIdleLowCrouch,
    CoverStandBlindLeft,
    CoverCrouchBlindLeft,
    CoverCrouchBlindTop,
    ZeroRotations,
    EnterContextualAction,
    CAWomanSitChair,
    CAWomanSitChairItemManipulation,
    CAWomanStandBartable,
    CAWomanStandBartableItemManipulation,
    CADefault,
    CASitGround,
    CASitBartable,
    CASitChair,
    CASitLegsDandling,
    CASitTable,
    CAStand,
    CAStandAgainstWall,
    CAStandAgainstWallRight,
    CAStandAgainstWallLeft,
    CAStandBartable,
    CASitGroundEatDrinkSmoke,
    CASitGroundItemManipulation,
    CASitGroundSurroundingInteract,
    CASitGroundWounded,
    CASitBartableEatDrinkSmoke,
    CASitBartableSurroundingInteract,
    CASitChairEatDrinkSmoke,
    CASitChairItemManipulation,
    CASitChairSurroundingInteract,
    CASitLegsDandlingEatDrinkSmoke,
    CASitLegsDandlingItemManipulation,
    CASitLegsDandlingSurroundingInteract,
    CASitTableEatDrinkSmoke,
    CASitTableItemManipulation,
    CASitTableSurroundingInteract,
    CAStandEatDrinkSmoke,
    CAStandItemManipulation,
    CAStandSurroundingInteract,
    CAStandAgainstWallEatDrinkSmoke,
    CAStandAgainstWallItemManipulation,
    CAStandAgainstWallSurroundingInteract,
    CAStandBartableEatDrinkSmoke,
    CAStandBartableItemManipulation,
    CAStandBartableSurroundingInteract,
    CAQuestBatyaSidorovych,
    CAQuestBatyaSitChair,
    CAQuestAgatha,
    CAQuestAgathaSmoke,
    CAQuestHarpia,
    CAQuestDoroznuk,
    CAQuestBereza,
    CAQuestKalina,
    CAQuestSolomia,
    CAQuestKorshunov,
    CAQuestBartender,
    SitGround = CASitGroundSurroundingInteract,
    SitBartable = CAQuestAgatha,
    SitChair = CAQuestBartender,
    SitLegsDandling = CAQuestBartender,
    SitTable = CAQuestBartender,
    Stand = CAQuestBartender,
    StandAgainstWall = CAQuestBartender,
    StandBartable = CAQuestBartender,
};
