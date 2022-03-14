#ifndef SAPSIM_SHOP_H
#define SAPSIM_SHOP_H

#include <list>

#include "Food.h"
#include "Pet.h"

namespace SAPSim {

class Shop {
 private:
  struct ShopPet {
    bool frozen;
    Pet pet;
  };
  struct ShopFood {
    bool frozen;
    Food food;
  };
  std::list<ShopPet> pet_shop;
  std::list<ShopFood> food_shop;

 public:
  Pet get_pet(int idx);
  Food get_food(int idx);
  void refresh();
  void freeze(int idx);
};

}  // namespace SAPSim
#endif