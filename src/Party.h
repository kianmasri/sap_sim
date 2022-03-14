#ifndef SAPSIM_PARTY_H
#define SAPSIM_PARTY_H

#include <list>

#include "Pet.h"

namespace SAPSim {
class Party {
 private:
  std::list<Pet> party;

 public:
  void add(int idx, Pet pet);
  void remove(int idx);
  void move(int src, int dest);
  void merge(int src, int dest);
  Pet get(int idx);
};
}  // namespace SAPSim

#endif