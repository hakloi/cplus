#include "../include/Container.h"
#include <list>
#include <stdexcept>
#include <algorithm>

class ListContainer : public Container
{
private:
    std::list<int> data;

public:
    ListContainer() {}
    void print() override;
    void rprint() override;
    void add(int value) override;
    void remove(int value) override;
    int get(size_t index) override;
};