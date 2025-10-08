/*********************************************************************************
 * @file    task3a.cpp
 *
 * @brief   Sorting algorithms can be compared not just by their overall running time,
 *          but also by how many operations they perform internally. Insertion sort is
 *          influenced strongly by the initial order of the input. When the array is
 *          already sorted, only a small number of comparisons are made and almost no
 *          swaps occur. When the array is in descending order, however, each new element
 *          must be compared against every previously placed element and then shifted,
 *          leading to its worst-case behavior.
 *
 * @details Your task is to initialize random arrays of increasing size, from 1 to 100
 *          elements. For each size, sort the array using insertion sort while keeping
 *          track of two values: the number of comparisons performed and the number of
 *          swaps performed. Repeat this experiment 5 times per size, calculate the
 *          averages for both counts, and store the results. At the end, explain your
 *          findings. In addition, write down the formulas for the maximum number of
 *          comparisons and the maximum number of swaps insertion sort performs in the
 *          worst case for an array of size N.
 *
 *********************************************************************************/

#include <iostream>
#include <vector>
#include <random>   // for srand, rand
#include <ctime>    // for time
#include <iomanip>  // for std::setw

 /**
  * @paragraph Explanation of Findings
  *
  * @brief  Insertion sort is efficient for small or nearly sorted datasets, as it minimizes
  *         the number of comparisons and swaps in such cases. However, its performance
  *         degrades significantly with larger or reverse-sorted datasets, leading to a
  *         quadratic growth in both comparisons and swaps. This behavior highlights the
  *         importance of choosing the right sorting algorithm based on the initial order
  *         of the data.
  *
  * @details In the worst-case scenario, which occurs when the array is sorted in descending order,
  *          the number of comparisons and swaps can be derived as follows:
  *             Each element (except the first) is compared with all previously sorted elements.
  *             For an array of size N, the first element requires 0 comparisons, the second requires
  *             1, the third requires 2, and so on, up to the (N-1)th element which requires (N-1)
  *             comparisons. The Arithmetic series sum gives us the total number of comparisons:
  *                 Total Comparisons = 0 + 1 + 2 + ... + (N-1) = (N*(N-1))/2 = (N^2 - N)/2
  *             Each comparison in the worst case leads to a swap, as each element must be moved to its
  *             correct position. Therefore, the total number of swaps is also:
  *                 Total Swaps = (N*(N-1))/2 = (N^2 - N)/2
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

            // Insertion sort with counting
            int comparisons = 0;
            int swaps = 0;

            for (int i = 1; i < size; ++i) {
                int key = arr[i];
                int j = i - 1;

                // Move elements of arr[0..i-1], that are greater than key,
                // to one position ahead of their current position
                while (j >= 0) {
                    comparisons++;
                    if (arr[j] > key) {
                        arr[j + 1] = arr[j];
                        swaps++;
                        j--;
                    }
                    else break;
                }

                // Insert the key at its correct position, if needed
                if (j + 1 != i) {
                    arr[j + 1] = key;
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
