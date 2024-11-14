#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <vector>

template<typename T>
class InsertionSort {
public:
    // Constructor that accepts a vector and sorts it immediately
    explicit InsertionSort(std::vector<T> &a_vec)  { sort(a_vec); }

private:
    // Static method that performs the sorting algorithm
    static void sort(std::vector<T> &a_vec);
};

#endif //INSERTIONSORT_H
