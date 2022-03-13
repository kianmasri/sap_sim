#include "Player.h"

namespace SAPSim {

// pay gold, add pet to party, remove pet from shop
// party_idx must be less than or equal to party.size()
// shop_idx must be less than pet_shop.size() + food_shop.size()
int Player::buy_pet(int shop_idx, int party_idx) {
  // Bounds check
  if (party_idx <= party.size() && shop_idx < pet_shop.size()) {
    auto party_it = std::next(party.begin(), party_idx);
    auto pet = std::next(pet_shop.begin(), shop_idx)->pet;
    // Check if player can afford pet
    if (gold >= pet.get_cost()) {
      gold -= pet.get_cost();
      // Check if they are buying to combine
      if (party_it->get_name() == pet.get_name()) {
        party_it->merge(pet);
        return 0;
      } else if (party.size() < 5) {  // check if party is full
        party.insert(party_it, pet);
        return 0;
      }
    }
  }
  return -1;
}

int Player::buy_food(int shop_idx, int party_idx) {
  if (party_idx <= party.size() && shop_idx < food_shop.size()) {
    auto party_it = std::next(party.begin(), party_idx);
    auto food = std::next(food_shop.begin(), shop_idx)->food;
    // Check if player can afford pet
    if(gold >= food.get_cost()) {
        food.activate(party_idx);
        return 0;
    }
  }
  return -1;
}

void Player::sell(int party_idx) {
    auto party_it = std::next(party.begin(), party_idx);
    
}

}  // namespace SAPSim