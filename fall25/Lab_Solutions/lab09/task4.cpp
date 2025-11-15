/********************************************************************************************
 * @file   task4.cpp
 * 
 * @details Write a recursive method to find the maximum element in a given array.
 * Implement the following recursive function:
 * 
 * @code
 *  // This helper function finds the maximum of first n elements in the array
 *  int findMax ( const vector <int >& a , int n ) {
 *      if ( n == ____ )
 *          return ________ ; // base case
 *      int m = ___________ ; // recursively find the maximum of n -1 elements
 *      return ______________ ; // return maximum of m and the last element
 *  }
 * 
 *  // User calls this
 *  int findMax ( const vector <int >& a ) {
 *      return findMax (a , a . size () ) ;
 *  }
 * @endcode
 * 
 * The function should:
 *  - Take a constant reference to a vector of integers a.
 *  - Use recursion to determine the maximum of the first n elements.
 *  - Apply an appropriate base case when only one element remains.
 *         
 * Call this function from main() with a sample vector to test its behavior.
 ********************************************************************************************/

#include <iostream>
#include <vector>

/**
* @brief   Recursively finds the maximum element in the first n elements of an array
*
* @param   a       Constant reference to the vector of integers
* @param   n       Number of elements to consider
* @return  Maximum element among the first n elements
*/
int findMax(const std::vector<int>& a, int n) {
    if (n == 1)
        return a[0]; // base case
    int m = findMax(a, n - 1); // recursively find the maximum of n -1 elements
    return (m > a[n - 1]) ? m : a[n - 1]; // return maximum of m and the last element
}

// User calls this
int findMax(const std::vector<int>& a) {
    return findMax(a, a.size());
}

int main() {
    std::vector<int> sample_vector = { 3, 5, 2, 8, 1, 4 };
    int max_value = findMax(sample_vector);
    std::cout << "Maximum value in the array: " << max_value << std::endl;
    return 0;
}