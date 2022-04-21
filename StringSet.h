#pragma once
#include "Set.h"

class StringSet : public Set {
public:
    StringSet();
    StringSet(const std::vector<std::string>& to_copy);
    Set* uni(Set* t_add) override;
    Set* intersect(Set* t_mult) override;
    Set* sim_sub(Set* t_sim_sub) override;
    std::vector<std::string> string_set = {};
};
