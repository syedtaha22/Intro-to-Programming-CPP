### Practice Questions: Pointers and Dynamic Memory  

This file contains practice tasks divided into sections based on difficulty: *easy*, *intermediate*, *hard*, and *advanced*. These tasks focus solely on core pointer concepts, including pointer arithmetic, dynamic memory allocation, and dynamic arrays. No STL functions or advanced pointer constructs like function pointers are included.  

For each task, attempt to write code to solve the problem, and draw memory diagrams to better understand how the pointers and dynamic memory interact in each case. Visualizing the stack and heap in your solutions will deepen your comprehension of how pointers work.  

---

#### **Easy**  

**Task 1:**  
Write a program to create a single integer dynamically, assign it a value using a pointer, and then deallocate the memory. Ensure that the pointer is set to `nullptr` after deletion.  

**Task 2:**  
Create a dynamic array of size 5. Assign values to each element using pointer arithmetic, then print those values. Finally, free the memory.  

**Task 3:**  
Write a program that swaps the values of two integers using pointers. Dynamically allocate memory for both integers, perform the swap, and then deallocate the memory.  

---

#### **Intermediate**  

**Task 1:**  
Write a program to dynamically create an array of size `n` (user-provided), where the user enters the values for each element. Implement a function to calculate the sum of all elements using pointer arithmetic. Deallocate the memory after use.  

**Task 2:**  
Dynamically allocate a 2D array of integers with `m` rows and `n` columns (user-provided sizes). Populate the array with values based on the formula: `arr[i][j] = i * j`. Print the array, then free the allocated memory.  

**Task 3:**  
Write a program to reverse the contents of a dynamic array in-place using pointer arithmetic. Dynamically allocate an array, fill it with values, reverse it using two pointers (`start` and `end`), and display the reversed array.  

---

#### **Hard**  

**Task 1:**  
Create a program that mimics the behavior of a dynamic stack. Implement a structure or class with functions to:  
1. Push elements onto the stack.  
2. Pop elements from the stack.  
3. Dynamically resize the stack when it reaches capacity (double the size).  
Ensure all memory is properly deallocated at the end.  

**Task 2:**  
Write a program that takes two dynamic arrays of the same size and computes their dot product. The dot product is the sum of the products of corresponding elements from the two arrays. Use only pointer arithmetic to access elements.  

**Task 3:**  
Simulate a 2D array of characters using a single dynamically allocated 1D array. Write a program that reads the dimensions `m` and `n`, creates the array, and accesses it as if it were a 2D array. Populate it with a user-defined pattern and display the result.  

---

#### **Advanced**  

**Task 1:**  
Implement a dynamic matrix class in C++. The class should support:  
1. Dynamic memory allocation for a 2D array.  
2. Overloaded operators for addition and subtraction of two matrices.  
3. Proper memory management to prevent leaks.  

**Task 2:**  
Create a program to dynamically allocate a triangular matrix (lower triangular or upper triangular) and populate it with values using pointer arithmetic. For example, in a lower triangular matrix, only elements below and on the diagonal should be stored and manipulated.  

**Task 3:**  
Write a program to perform in-place transposition of a dynamically allocated 2D array (square matrix). Allocate the memory, populate the matrix, perform the transpose using pointer arithmetic, and print the result. Ensure proper cleanup of memory.  

**Task 4:**  
Build a program to dynamically allocate and manage a sparse matrix using a linked list or an equivalent structure. The program should allow users to insert non-zero values, retrieve values, and delete the structure safely.  

---

### Notes:  
For all tasks:  
- Ensure proper memory deallocation to prevent leaks.  
- Use `nullptr` to nullify pointers after deletion.  
- Test edge cases, such as empty arrays or matrices of size `1x1`.  

