#include "../include/SetContainer.h"
#include <algorithm>
#include <stdexcept>

void SetContainer::print()
{
    for (int x : data)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void SetContainer::rprint()
{
    for (auto it = data.rbegin(); it != data.rend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void SetContainer::add(int value)
{
    data.insert(value);
}

void SetContainer::remove(int value)
{
    data.erase(value);
}

int SetContainer::get(size_t index)
{
    if (index >= data.size())
    {
        throw std::out_of_range("Index out of bounds");
    }
    auto it = data.begin();
    std::advance(it, index);
    return *it;
}