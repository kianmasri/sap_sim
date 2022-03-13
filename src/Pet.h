#ifndef SAPSIM_PET_H
#define SAPSIM_PET_H

#include <vector>

#include "Ability.h"
#include "Effect.h"

namespace SAPSim {

class Pet {
 private:
  int tier;
  int name;
  int base_attack;
  int base_health;
  int experience;
  int cost;
  Ability ability;
  Effect effect;
  int packs;

 public:
  Pet(){};
  ~Pet(){};
  int get_name();
  void merge(Pet pet);
  Ability get_ability();
  int get_cost();
};

class PetFactory {
  std::vector<Pet> pets;

  bool add_pet(Pet pet);
  Pet generate_pet(int tier, bool exact);
};

}  // namespace SAPSim
#endif