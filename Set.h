#pragma once
#include<vector>
#include<string>
#include<algorithm>

template<class T>
void clean(std::vector<T>& int_set) {
    for (int i = 0; i < int_set.size() - 1; ++i) {
        if (int_set[i] == int_set[i + 1]) {
            int_set.erase(int_set.begin() + i);
            i--;
        }
    }
}

class Set {
public:
    Set();
    virtual Set* uni(Set* t_add);
    virtual Set* intersect(Set* t_add);
    virtual Set* sim_sub(Set* t_add);
};
