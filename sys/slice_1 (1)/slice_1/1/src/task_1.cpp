#include "task_1.hpp"
#include <limits> 

int count_max_odd(const std::vector<int>& nums) {
    int max_odd = std::numeric_limits<int>::min(); 

    for (int num : nums) {
        if (num > 0 && num % 2 != 0) { 
            if (num > max_odd) {
                max_odd = num;
            }
        }
    }

    if (max_odd == std::numeric_limits<int>::min()) {
        return -1; 
    }

    return max_odd; 
}