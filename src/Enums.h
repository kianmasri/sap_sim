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
  Faint,  // Called in Party::faint()
  Buy,    // Called in Player::buy()
  Sell,   // Called in Player::sell()
  EatsShopFood,
  EndOfTurn,       // Called in Player::end_turn()
  LevelUp,         // Called in Pet::merge()
  FoodBought,      // Called in Player::buy_food()
  FriendSummoned,  // Called in Party::add()
  StartOfBattle,
  StartOfTurn,
  BeforeAttack,
  Hurt,
  FriendSold,  // Called in Player::sell()
  EndTurn,     // Called in Player::end_turn()
  FriendAheadAttacks,
  FriendAheadAbility,
  FriendFaints,  // Called in Pet::faint()
};

}  // namespace SAPSim

#endif