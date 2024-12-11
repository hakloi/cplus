#pragma once

#include <vector>

class ArrayExtension {
private:
    std::vector<int> array;
public:
    int& operator[](int index);
    int operator[](int index) const;
    std::vector<int>::size_type size() const;

    ArrayExtension(const std::vector<int>& array);
    std::vector<int> sorted() const; 
    std::vector<int> every_nth(int n) const;
    bool is_increasing() const; 
    bool is_decreasing() const; 
    bool is_all_even() const; 
};
