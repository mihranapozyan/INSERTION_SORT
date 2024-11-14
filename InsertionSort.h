#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <vector>

// Template class InsertionSort accepts any data type that supports comparison (i.e., Comparable)
template<typename T>
class InsertionSort {
public:
    /**
     * Constructor that sorts the provided vector immediately upon object creation.
     * @param a_vec The vector to be sorted.
     */
    explicit InsertionSort(std::vector<T>& a_vec)  {
        sort(a_vec); // Sort the vector as soon as the object is created
    }

private:
    /**
     * Performs Insertion Sort on the provided vector.
     * @param a_vec The vector to be sorted.
     */
    static void sort(std::vector<T>& a_vec);
};

#endif //INSERTIONSORT_H
