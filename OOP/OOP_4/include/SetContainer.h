#include "../include/Container.h"
#include <set>
#include <stdexcept>

class SetContainer : public Container 
{
    private:
        std::set<int> data;

    public:
        SetContainer() {}
        void print() override;
        void rprint() override;
        void add(int value) override;
        void remove(int value) override;
        int get(size_t index) override;
};