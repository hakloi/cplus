#include "../include/Container.h"
#include <vector>

class VectorContainer : public Container 
{
    private:
        std::vector<int> data;

    public:
        void print() override;
        void rprint() override;
        void add(int value) override;
        void remove(int value) override;
        int get(size_t index) override;
};