#ifndef SAPSIM_ENUMS_H
#define SAPSIM_ENUMS_H

namespace SAPSim {

const struct Pack {
  enum {
    StandardPack = 1,
    ExpansionPack1 = 2,
    ExpansionPack2 = 4,
  };
};

enum class AbilityKeyword {
  Faint,
  Buy,
  Sell,
  EatsShopFood,
  EndOfTurn,
  LevelUp,
  FoodBought,
  FriendSummoned,
  StartOfBattle,
  StartOfTurn,
  BeforeAttack,
  Hurt,
  FriendSold,
  EndTurn,
  FriendAheadAttacks,
  FriendAheadAbility,
  FriendFaints,
};

}  // namespace SAPSim

#endif