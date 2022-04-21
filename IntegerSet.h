#pragma once
#include"Set.h"

class IntegerSet : public Set {
public:
    IntegerSet();
    IntegerSet(const std::vector<int>& to_copy);
    Set* uni(Set* t_add) override;
    Set* intersect(Set* t_mult) override;
    Set* sim_sub(Set* t_sim_sub) override;
    std::vector<int> int_set = {};
};
