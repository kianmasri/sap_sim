#ifndef SAPSIM_PLAYER_H
#define SAPSIM_PLAYER_H

#include "Party.h"
#include "Shop.h"

namespace SAPSim {

class Player {
 private:
  int gold;
  int life;
  int wins;
  int turn;
  Party party;
  Shop shop;

 public:
  int buy_pet(int shop_idx, int party_idx);
  int buy_food(int shop_idx, int party_idx);
  void sell(int party_idx);
  void roll();
  void freeze(int shop_idx);
  void move(int src_idx, int des_idx);
  void merge(int src_idx, int dest_idx);
  void end_turn();
};

}  // namespace SAPSim

#endif