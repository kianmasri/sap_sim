#include "Player.h"

namespace SAPSim {

// TODO: Implement Ability keywords: Buy, FriendSummoned
int Player::buy_pet(int shop_idx, int party_idx) {
  auto pet = shop.get_pet(shop_idx);
  if (gold >= pet.get_cost()) {
    gold -= pet.get_cost();
    party.add_pet(party_idx, pet);
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
  gold += party.get_pet(party_idx).get_level();
  party.remove_pet(party_idx);
}

void Player::roll() {
  if (gold > 0) {
    gold -= 1;
    shop.refresh();
  }
}

}  // namespace SAPSim