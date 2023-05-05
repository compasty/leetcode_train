#ifndef HELLO_H
#define HELLO_H

#include <vector>

void swap(int& a, int& b) {
  int c = a;
  a = b;
  b = c;
}

template<typename T>
bool is_vector_same(std::vector<T> &v1, std::vector<T> &v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (auto iter1 = v1.cbegin(), iter2 = v2.cbegin(); iter1 != v1.cend() && iter2 != v2.cend(); iter1++, iter2++) {
        if (*iter1 != *iter2) {
            return false;
        }
    }
    return true;
}

#endif