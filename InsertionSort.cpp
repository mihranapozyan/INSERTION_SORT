#include "InsertionSort.h"
#include <algorithm>

// Definition of the InsertionSort::sort method
template<typename T>
void InsertionSort<T>::sort(std::vector<T> &a_vec) {
    // Loop over each element starting from the second one (index 1)
    for (int i = 1; i < a_vec.size(); i++) {
        // Compare the current element with the previous ones and move it left
        for (int j = i; j > 0 && a_vec[j] < a_vec[j - 1]; --j) {
            // Swap elements if they're out of order
            std::swap(a_vec[j], a_vec[j - 1]);
        }
    }
}

// Explicit instantiation of InsertionSort for specific data types
template class InsertionSort<int>;
template class InsertionSort<double>;
template class InsertionSort<float>;
