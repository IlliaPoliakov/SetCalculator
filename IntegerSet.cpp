#include"IntegerSet.h"

IntegerSet::IntegerSet(){}
IntegerSet::IntegerSet(const std::vector<int>& to_copy) {
    int_set = to_copy;
    std::sort(int_set.begin(), int_set.end());
    clean(int_set);
}
Set* IntegerSet::uni(Set* t_add) {
        auto to_add = dynamic_cast<IntegerSet*>(t_add);
        std::vector<int> to_return;
        size_t i = 0;
        size_t j = 0;
        while (i < to_add->int_set.size() && j < int_set.size()) {
            if (to_add->int_set[i] == int_set[j]) {
                to_return.push_back(int_set[j]);
                i++;
                j++;
            }
            else {
                to_return.push_back(to_add->int_set[i]);
                to_return.push_back(int_set[j]);
                i++;
                j++;
            }
            if (i == to_add->int_set.size()) {
                while (j < int_set.size()) {
                    to_return.push_back(int_set[j]);
                    j++;
                }
            }
            if (j == int_set.size()) {
                while (i < to_add->int_set.size()) {
                    to_return.push_back(to_add->int_set[i]);
                    i++;
                }
            }
        }
        std::sort(to_return.begin(), to_return.end());
        clean(to_return);
        IntegerSet* result = new IntegerSet;
        result->int_set = to_return;
        return result;
    }
Set* IntegerSet::intersect(Set* t_mult) {
        auto to_mult = dynamic_cast<IntegerSet*>(t_mult);
        std::vector<int> result;
        std::vector<int> res2 = to_mult->int_set;
        for (int i : int_set) {
            if (std::find(res2.begin(), res2.end(), i) != res2.end()) {
                result.push_back(i);
                res2.erase(std::find(res2.begin(), res2.end(), i));
            }
        }
        IntegerSet* res = new IntegerSet;
        clean(result);
        res->int_set = result;
        return res;
    }
Set* IntegerSet::sim_sub(Set* t_sim_sub) {
        auto to_sim_sub = dynamic_cast<IntegerSet*>(t_sim_sub);
        IntegerSet self;
        IntegerSet self2;
        self.int_set = int_set;
        self2.int_set = to_sim_sub->int_set;
        IntegerSet* add_set = dynamic_cast<IntegerSet*> (self.uni(&self2));
        IntegerSet* sum_set = dynamic_cast<IntegerSet*> (self.intersect(&self2));
        for (int i : sum_set->int_set) {
            add_set->int_set.erase(std::find(add_set->int_set.begin(), add_set->int_set.end(), i));
        }
        return add_set;
    }
