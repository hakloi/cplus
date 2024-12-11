#include "../include/Container.h"
#include <map>
#include <stdexcept>

class MapContainer : public Container
{
private:
    std::map<int, int> data;

public:
    MapContainer() {}
    void print() override;
    void rprint() override;
    void add(int value) override;
    void remove(int value) override;
    int get(size_t index) override;
};