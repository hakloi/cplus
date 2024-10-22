#include <vector>
#include <iostream>
#include <cmath>
#include "main.hpp"

using namespace std;

int main()
{
    Employee s("Name of employee", 21, "Deliverer", 1000.0f);
    cout << ((s.getName() == "Name of employee") &&
             (s.getAge() == 21) &&
             (s.getProfession() == "Deliverer") &&
             (abs(s.getMeanPoints() - 1000.0f) < 0.0001f)) << endl;

    Employee s2("Name of employee 2", 25, "Manager", 3000.0f);
    cout << ((s2.getName() == "Name of employee 2") &&
             (s2.getAge() == 25) &&
             (s2.getProfession() == "Manager") &&
             (abs(s2.getMeanPoints() - 3000.0f) < 0.0001f)) << endl;

    return 0;
}
