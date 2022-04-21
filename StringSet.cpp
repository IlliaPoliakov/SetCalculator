#include"StringSet.h"

StringSet::StringSet() {
}
StringSet::StringSet(const std::vector<std::string>& to_copy) {
    string_set = to_copy;
    std::sort(string_set.begin(), string_set.end());
    clean(string_set);
}
Set* StringSet::uni(Set* t_add) {
    auto to_add = dynamic_cast<StringSet*>(t_add);
    std::vector<std::string> to_return;
    size_t i = 0;
    size_t j = 0;
    while (i < to_add->string_set.size() && j < string_set.size()) {
        if (to_add->string_set[i] == string_set[j]) {
            to_return.push_back(string_set[j]);
            i++;
            j++;
        }
        else {
            to_return.push_back(to_add->string_set[i]);
            to_return.push_back(string_set[j]);
            i++;
            j++;
        }
        if (i == to_add->string_set.size()) {
            while (j < string_set.size()) {
                to_return.push_back(string_set[j]);
                j++;
            }
        }
        if (j == string_set.size()) {
            while (i < to_add->string_set.size()) {
                to_return.push_back(to_add->string_set[i]);
                i++;
            }
        }
    }
    std::sort(to_return.begin(), to_return.end());
    clean(to_return);
    StringSet* result = new StringSet;
    result->string_set = to_return;
    return result;
}
Set* StringSet::intersect(Set* t_mult) {
    auto to_mult = dynamic_cast<StringSet*>(t_mult);
    std::vector<std::string> result;
    std::vector < std::string> res2 = to_mult->string_set;
    for (std::string i : string_set) {
        if (std::find(res2.begin(), res2.end(), i) != res2.end()) {
            result.push_back(i);
            res2.erase(std::find(res2.begin(), res2.end(), i));
        }
    }
    clean(result);
    StringSet* res = new StringSet;
    res->string_set = result;
    return res;
}
Set* StringSet::sim_sub(Set* t_sim_sub) {
    auto to_sim_sub = dynamic_cast<StringSet*>(t_sim_sub);
    StringSet* self = new StringSet;
    StringSet* self2 = new StringSet;
    self->string_set = string_set;
    self2->string_set = to_sim_sub->string_set;
    StringSet* add_set = dynamic_cast<StringSet*> (self->uni(self2));
    StringSet* sum_set = dynamic_cast<StringSet*> (self->intersect(self2));
    for (std::string i : sum_set->string_set) {
        add_set->string_set.erase(std::find(add_set->string_set.begin(), add_set->string_set.end(), i));
    }
    return add_set;
}
