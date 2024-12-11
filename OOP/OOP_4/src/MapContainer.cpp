#include "../include/MapContainer.h"
#include <stdexcept>

void MapContainer::print()
{
    for (const auto &pair : data)
    {
        std::cout << pair.first << " ";
    }
    std::cout << std::endl;
}

void MapContainer::rprint()
{
    for (auto it = data.rbegin(); it != data.rend(); ++it)
    {
        std::cout << it->first << " ";
    }
    std::cout << std::endl;
}

void MapContainer::add(int value)
{
    data[value] = value; 
}

void MapContainer::remove(int value)
{
    data.erase(value);
}

int MapContainer::get(size_t index)
{
    if (index >= data.size())
    {
        throw std::out_of_range("Index out of bounds");
    }
    auto it = data.begin();
    std::advance(it, index);
    return it->first;
}