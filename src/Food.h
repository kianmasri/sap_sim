#ifndef SAPSIM_FOOD_H
#define SAPSIM_FOOD_H

namespace SAPSim {

class Food {
  int tier;
  int name;
  int cost;

 public:
  void activate(int party_idx);
  int get_cost();
};

class FoodFactory {
  Food generate_food(int tier);
};

}  // namespace SAPSim
#endif