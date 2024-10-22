#include <vector>
#include <iostream>
#include <cmath>
#include "main.hpp"

using namespace std;

int main()
{
    vector<int> data = { 1, 4, -2, 3, 5, -8, 2 };
    auto result_1 = count_max_odd(data);

    const vector<int> data_2 = { 1, 4, -2, 7, 5, -8, 6 };
    auto result_2 = count_max_odd(data_2);

    cout << (abs(result_1 - 5) < 0.0001f && abs(result_2 - 7) < 0.0001f) << endl;

    return 0;
}
