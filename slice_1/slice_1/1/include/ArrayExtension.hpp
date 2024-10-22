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
    std::vector<int> sorted() const; // возвращает отсортированный массив
    std::vector<int> every_nth(int n) const; // возвращает каждый n-й элемент массива (0, n, 2n, 3n, ...)
    bool is_increasing() const; // возвращает true, если все элементы массива упорядочены по возрастанию
    bool is_decreasing() const; // возвращает true, если все элементы массива упорядочены по убыванию
    bool is_all_even() const; // возвращает true, если все элементы массива являются четными числами
};
