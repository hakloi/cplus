#include <vector>
#include <iostream>
#include <cmath>
#include "main.hpp"

using namespace std;

int main()
{
    VolumeOfLiquid c1(10);
    VolumeOfLiquid c2(20);
    const VolumeOfLiquid c3 = c1 + c2;
    const VolumeOfLiquid c41 = c1 - c2;
    const VolumeOfLiquid c42 = c2 - c1;
    const VolumeOfLiquid c5 = c1 * 3;
    const VolumeOfLiquid c6 = c1 / 3;
    const VolumeOfLiquid c7 = c1 % 3;

    cout << (c3.getVolume() == 30 &&
             c41.getVolume() == 0 &&
             c42.getVolume() == 10 &&
             c5.getVolume() == 30 &&
             c6.getVolume() == 3 &&
             c7.getVolume() == 1) << endl;

    return 0;
}
