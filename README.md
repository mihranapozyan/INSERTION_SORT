# InsertionSort Template Class

This repository provides an implementation of the Insertion Sort algorithm using C++ templates. The `InsertionSort` class can be used to sort vectors of any data type (such as `int`, `float`, or `double`) that supports the `<` operator for comparison.

## Features

- **Template-based implementation**: Can be used with any type that supports comparisons.
- **Sorting algorithm**: Implements the classical Insertion Sort algorithm, which is simple and effective for small datasets.
- **Header-only class**: The sorting logic is encapsulated within the header file, making it easy to include and use in your projects.

## How It Works

The `InsertionSort` class provides a constructor that accepts a reference to a `std::vector` and sorts it in place. The algorithm works by iterating over the vector, taking each element, and inserting it into its correct position in the already-sorted portion of the vector.

### Example

Here’s an example of how to use the `InsertionSort` class:

```cpp
#include <iostream>
#include <vector>
#include "InsertionSort.h"

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6};
    
    // Create an InsertionSort object to sort the vector
    InsertionSort<int> sorter(data);
    
    // Output the sorted vector
    for (int num : data) {
        std::cout << num << " ";
    }

    return 0;
}
