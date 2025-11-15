/********************************************************************************************
 * @file    task1.cpp
 *
 * @details Write a function that computes the sum of all elements in a 1-dimensional array
 *          and returns the result. The function should:
 *            - Take an integer array `arr[]` and its size `n` as input.
 *            - Return the sum of all elements in the array.
 *
 *         Prototype:
 *              int sum_array(int arr[], int n);
 *
 *          Call this function from `main()` with a sample array to test its behavior.
 *
 ********************************************************************************************/

 #include <iostream>

 /**
  * @brief   Computes the sum of all elements in an integer array
  *
  * @param   arr[]   Input integer array
  * @param   n       Size of the array
  * @return  Sum of all elements in the array
  */
int sum_array(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}

int main() {
    int sample_array[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(sample_array) / sizeof(sample_array[0]);

    int result = sum_array(sample_array, size);
    std::cout << "Sum of array elements: " << result << std::endl;

    return 0;
}