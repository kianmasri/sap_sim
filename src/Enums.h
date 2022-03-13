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
  faint,
  buy,
  sell,
  eats_shop_food,
  end_of_turn,
  level_up,
  food_bought,
  friend_summoned,
  start_of_battle,
  start_of_turn,
  before_attack,
  hurt,
  friend_sold,
  end_turn,
  friend_ahead_attacks,
  friend_ahead_ability,
  friend_faints,
};

}  // namespace SAPSim

#endif