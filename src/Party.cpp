#include "Party.h"

namespace SAPSim {

void Party::add(int idx, Pet pet) {
  if (idx <= party.size() && idx >= 0) {
    auto pos_it = std::next(party.begin(), idx);
    party.insert(pos_it, pet);
  }
}

void Party::remove(int idx) {
  if (idx < party.size() && idx >= 0) {
    auto pos_it = std::next(party.begin(), idx);
    party.erase(pos_it);
  }
}

void Party::move(int src, int dest) {
  if (src > 0 && src < party.size() && dest < party.size() && dest > 0 &&
      src != dest) {
    auto src_it = std::next(party.begin(), src);
    auto dest_it = std::next(party.begin(), dest);
    auto src_pet = *src_it;
    party.erase(src_it);
    party.insert(dest_it, src_pet);
  }
}

void Party::merge(int src, int dest) {
  if (src > 0 && src < party.size() && dest < party.size() && dest > 0 &&
      src != dest) {
    auto src_it = std::next(party.begin(), src);
    auto dest_it = std::next(party.begin(), dest);
    auto src_pet = *src_it;
    party.erase(src_it);
    dest_it->merge(src_pet);
  }
}

Pet Party::get(int idx) {
  if (idx > 0 && idx < party.size()) {
    return *std::next(party.begin(), idx);
  }
}

void Party::faint(int idx) { remove(idx); }

}  // namespace SAPSim