#include <algorithm>
#include "ArrayExtension.hpp"

int& ArrayExtension::operator[](int index) {
    return array[index];
}
int ArrayExtension::operator[](int index) const {
    return array[index];
}
std::vector<int>::size_type ArrayExtension::size() const {
    return array.size();
}

ArrayExtension::ArrayExtension(const std::vector<int>& array)
    : array(array)
{}

std::vector<int> ArrayExtension::sorted() const {
    std::vector<int> sorted = array;
    std::sort(sorted.begin(), sorted.end()); // Исправлено
    return sorted;
}
std::vector<int> ArrayExtension::every_nth(int n) const {
    std::vector<int> every_nth;
    for (std::vector<int>::size_type i = 0; i < array.size(); i += n) { // Исправлено
        every_nth.push_back(array[i]);
    }
    return every_nth;
}
bool ArrayExtension::is_increasing() const {
    return std::is_sorted(array.begin(), array.end()); // Исправлено
}
bool ArrayExtension::is_decreasing() const {
    return std::is_sorted(array.begin(), array.end(), std::greater<int>()); // Исправлено
}
bool ArrayExtension::is_all_even() const {
    for (std::vector<int>::size_type i = 0; i < array.size(); i++) { // Исправлено
        if (array[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}
