#include "../include/ListContainer.h"
#include <algorithm>
#include <stdexcept>

void ListContainer::print()
{
    for (int x : data)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void ListContainer::rprint()
{
    for (auto it = data.rbegin(); it != data.rend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void ListContainer::add(int value)
{
    data.push_back(value);
}

void ListContainer::remove(int value)
{
    data.remove(value);
}

int ListContainer::get(size_t index)
{
    if (index >= data.size())
    {
        throw std::out_of_range("Index out of bounds");
    }
    auto it = data.begin();
    std::advance(it, index);
    return *it;
}