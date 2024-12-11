#include "../include/VectorContainer.h"
#include <vector>
#include <algorithm>
#include <stdexcept>

void VectorContainer::print()
{
    for (int x : data)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void VectorContainer::rprint()
{
    for (auto it = data.rbegin(); it != data.rend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void VectorContainer::add(int value)
{
    data.push_back(value);
}

void VectorContainer::remove(int value)
{
    data.erase(std::remove(data.begin(), data.end(), value), data.end());
}

int VectorContainer::get(size_t index)
{
    if (index >= data.size())
        throw std::out_of_range("Index out of bounds");
    return data[index];
}