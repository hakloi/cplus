#include "../include/VectorContainer.h"
#include "../include/SetContainer.h"
#include "../include/MapContainer.h"
#include "../include/ListContainer.h"

int main()
{
    // VectorContainer tests
    std::cout << "VectorContainer tests" << std::endl;
    {
        VectorContainer vc;
        vc.add(1);
        vc.add(2);
        vc.add(3);
        vc.get(0);
        vc.print();  // 1 2 3
        vc.rprint(); // 3 2 1
        vc.remove(2);
        vc.print(); // 1 3
    }

    // ListContainer tests
    std::cout << "ListContainer tests" << std::endl;
    {
        ListContainer lc;
        lc.add(1);
        lc.add(2);
        lc.add(3);
        lc.get(2);
        lc.print();
        lc.rprint();
        lc.remove(2);
        lc.print();
    }

    // MapContainer tests
    std::cout << "MapContainer tests" << std::endl;
    {
        MapContainer mc;
        mc.add(1);
        mc.add(2);
        mc.add(3);
        mc.get(1);
        mc.print();
        mc.rprint();
        mc.remove(2);
        mc.print();
    }

    // SetContainer tests
    std::cout << "SetContainer tests" << std::endl;
    {
        SetContainer sc;
        sc.add(1);
        sc.add(2);
        sc.add(3);
        sc.add(2); 
        sc.get(0);
        sc.print();
        sc.rprint();
        sc.remove(2);
        sc.print();
    }

    std::cout << "All tests passed." << std::endl;
    return 0;
}