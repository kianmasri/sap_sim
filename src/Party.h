#ifndef SAPSIM_PARTY_H
#define SAPSIM_PARTY_H

#include <list>

#include "Pet.h"

namespace SAPSim {
class Party {
 private:
  std::list<Pet> party;

 public:
  void add_pet(int idx, Pet pet);
  void remove_pet(int idx);
  Pet get_pet(int idx);
};
}  // namespace SAPSim

#endif