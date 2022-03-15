#include "Player.h"

namespace SAPSim {

// TODO: Implement Ability keywords: Buy, FriendSummoned
int Player::buy_pet(int shop_idx, int party_idx) {
  auto pet = shop.get_pet(shop_idx);
  if (gold >= pet.get_cost()) {
    gold -= pet.get_cost();
    party.add(party_idx, pet);
  }
}

// TODO: Implement Ability keywords: EatsShopFood, FoodBought
int Player::buy_food(int shop_idx, int party_idx) {
  auto food = shop.get_food(shop_idx);
  if (gold >= food.get_cost()) {
    gold -= food.get_cost();
    food.activate(party_idx);
  }
}

// TODO: Implement Ability keywords: Sell, FriendSold
void Player::sell(int party_idx) {
  gold += party.get(party_idx).get_level();
  party.remove(party_idx);
}

void Player::roll() {
  if (gold > 0) {
    gold -= 1;
    shop.refresh();
  }
}

void Player::freeze(int shop_idx) { shop.freeze(shop_idx); }

void Player::move(int src_idx, int dest_idx) { party.move(src_idx, dest_idx); }

void Player::merge(int src_idx, int dest_idx) {
  party.merge(src_idx, dest_idx);
}

void Player::end_turn() {}

}  // namespace SAPSim