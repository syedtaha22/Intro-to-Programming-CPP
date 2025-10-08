/*********************************************************************************
 * @file    task2b.cpp
 *
 * @brief   Selection sort has a different behavior compared to insertion sort.
 *          While insertion sort adapts to the order of the data, selection sort
 *          always performs the same number of comparisons regardless of whether
 *          the array is sorted, reversed, or random. The number of swaps,
 *          however, depends on whether the algorithm checks before swapping the
 *          selected element with itself.
 *
 * @details Your task is to repeat the same experiment as in Task 1a, but this
 *          time using selection sort. Initialize random arrays of size 1 to 100,
 *          sort each using selection sort, and record both the number of
 *          comparisons and the number of swaps performed. Perform 5 runs for
 *          each size, calculate the averages for both counts, and compare the
 *          results with those obtained in Task 1a. Finally, write down the
 *          formulas for the maximum number of comparisons and the maximum
 *          number of swaps selection sort performs in the worst case for an
 *          array of size N, and add a short explanation of how its behavior
 *          differs from insertion sort.
 *
 *********************************************************************************/


#include <iostream>
#include <vector>
#include <random>   // for srand, rand
#include <ctime>    // for time
#include <iomanip>  // for std::setw

 /**
  * @title Explanation of Findings
  *
  * @brief  Selection sort consistently performs a fixed number of comparisons,
  *         regardless of the initial order of the data, making it less adaptive
  *         than insertion sort. However, by checking before swapping, it can
  *         minimize unnecessary swaps, especially in nearly sorted arrays.
  *         This characteristic makes selection sort's performance more predictable,
  *         but it generally remains less efficient than insertion sort for small
  *         or partially sorted datasets.
  *
  * @details In the worst-case scenario, which occurs when the array is sorted in
  *          descending order, the number of comparisons and swaps can be derived
  *          as follows:
  *             Selection sort always compares each element with every other element
  *             to find the minimum. For an array of size N, the first element requires
  *             (N-1) comparisons, the second requires (N-2), and so on, down to 1
  *             comparison for the second-to-last element. The Arithmetic series
  *             sum gives us the total number of comparisons:
  *                 Total Comparisons = (N-1) + (N-2) + ... + 1 = (N*(N-1))/2 = (N^2 - N)/2
  *             The number of swaps in selection sort is at most (N-1), as each element
  *             is swapped at most once when it is placed in its correct position.
  *             Therefore, the total number of swaps is: Total Swaps = N - 1
  */

int main() {
    std::srand(std::time(0)); // Seed for random number generation

    const int max_size = 100;
    const int trials = 5;

    std::cout << std::setw(5) << "Size" << std::setw(10) << " Compares" << std::setw(10) << "Swaps" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    for (int size = 1; size <= max_size; ++size) {
        long long total_comparisons = 0;
        long long total_swaps = 0;

        for (int t = 0; t < trials; ++t) {
            // Generate random array
            std::vector<int> arr(size);
            for (int i = 0; i < size; ++i) {
                arr[i] = std::rand() % 1000; // Random numbers between 0 and 999
            }

            // Selection sort with counting
            int comparisons = 0;
            int swaps = 0;

            for (int i = 0; i < size - 1; ++i) {
                int min_idx = i;

                // Find the minimum element in unsorted array
                for (int j = i + 1; j < size; ++j) {
                    comparisons++;
                    if (arr[j] < arr[min_idx]) min_idx = j;
                }


                if (min_idx != i) { // Only swap if needed
                    std::swap(arr[i], arr[min_idx]);
                    swaps++;
                }
            }

            // Verify sorted array (optional)
            for (int i = 1; i < size; ++i) {
                if (arr[i - 1] > arr[i]) {
                    std::cout << "Error: Array of size " << size << " not sorted correctly." << std::endl;
                    return 1;
                }
            }

            total_comparisons += comparisons;
            total_swaps += swaps;
        }

        double avg_comparisons = static_cast<double>(total_comparisons) / trials;
        double avg_swaps = static_cast<double>(total_swaps) / trials;

        std::cout << std::setw(5) << size << std::setw(10) << avg_comparisons << std::setw(10) << avg_swaps << std::endl;
    }

    return 0;
}