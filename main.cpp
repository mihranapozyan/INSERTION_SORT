#include <iostream>
#include <vector>
#include "InsertionSort.h"

int main()
{
    std::vector<int> v{5, 1, 6, 9, 2, 20, 10, 3, 7, 8, 4, 3};

    InsertionSort<int> sort_v(v);

    for (const auto &num : v) {
        std::cout << num << " ";
    }

    return 0;
}