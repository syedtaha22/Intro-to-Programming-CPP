# Practice Questions

This document contains a collection of practice problems designed to help you strengthen your understanding of key concepts in C++. The problems are divided into three sections: **Structs**, **Linked Lists and Nodes**, and **Vectors**. Each section contains a variety of problems, ranging from basic to advanced, to help you build your skills step by step.

## Structs

In this section, you will practice working with **structs** in C++. Structs are a way to group related variables together under one name. These problems will help you get comfortable with creating and manipulating structs, understanding member variables, and using constructors.

### 1. Define a simple struct

Define a struct named `Person` with two member variables: `name` of type string and `age` of type integer. Create an instance of the struct and initialize it with appropriate values.

### 2. Create a struct with a constructor

Create a struct named `Book` with three member variables: `title` (string), `author` (string), and `price` (double). Add a constructor to the struct that initializes these values when an instance of `Book` is created. Instantiate the struct and initialize it with values for the title, author, and price.

### 3. Accessing struct members

Create a struct called `Rectangle` with two member variables: `length` and `width`, both of type double. Write a program that creates an instance of the struct, sets the `length` and `width` values, and then prints out the area of the rectangle, calculated as `length × width`.

### 4. Using a struct with an array

Define a struct named `Student` with two member variables: `name` (string) and `rollNumber` (integer). Create an array of 5 `Student` structs. Populate the array with data for 5 students and display the details of each student.

### 5. Structs with functions

Define a struct named `Circle` with a single member variable: `radius` (double). Add a function to the struct that calculates and returns the area of the circle, using the formula `π * radius²`. Create an instance of the struct, set the radius, and print out the area.

### 6. Passing structs to functions

Create a struct called `Car` with three member variables: `make` (string), `model` (string), and `year` (integer). Write a function that takes a `Car` struct as an argument and prints out the details of the car in the format: `"Make: <make>, Model: <model>, Year: <year>"`. Pass an instance of the `Car` struct to this function and display the car details.

### 7. Structs with default values

Create a struct named `Employee` with three member variables: `name` (string), `id` (integer), and `salary` (double). Set default values for the struct members using a constructor. Create an instance of the struct without passing any arguments, and print the default values.

### 8. Struct with nested structs

Define a struct `Department` with two member variables: `name` (string) and `budget` (double). Define another struct `Company` that contains three member variables: `name` (string), `location` (string), and a `Department` struct. Create an instance of the `Company` struct, initializing both the company and department details. Print out the details of the company and its department.

---

## Linked Lists & Nodes

In this section, you will practice creating and manipulating **nodes** within a linked list. A **node** typically contains two things: data and a pointer to the next node in the list. By solving these problems, you'll understand how linked lists function and how to perform basic node operations like adding, removing, and manipulating elements.

### Easy

1. **Add a node at the front**  
   Create a linked list with a `Node` struct that contains an integer as data and a pointer to the next node. Implement a function to add a new node at the front of the list. The function should take an integer as input and add a new node with that data at the beginning of the list.

2. **Add a node in the middle**  
   Extend your linked list to include a function that adds a node at a specific position in the list. The function should take an integer data and a position (index) as arguments, and insert a new node at the given position. For example, if the list is `2 -> 4 -> 6` and the input is `5` at position `1`, the resulting list should be `2 -> 5 -> 4 -> 6`.

3. **Delete a node**  
   Create a function that deletes a node from the linked list at a given position. The function should take an index and remove the node at that position. Ensure that the list properly updates the `next` pointers to maintain the integrity of the linked list.

### Intermediate

1. **Reverse the linked list**  
   Write a function that reverses a linked list in place. The function should take the head of the list as input and reverse the order of the nodes, so that the last node becomes the first, the second to last becomes the second, and so on.

2. **Find the middle of the linked list**  
   Implement a function that finds the middle element of a linked list. If the list has an odd number of nodes, return the exact middle. If the list has an even number of nodes, return the second of the two middle nodes. Do this in a single pass through the list.

3. **Remove all occurrences of a given value**  
   Implement a function that removes all nodes from the linked list that contain a specified value. After the operation, the linked list should not contain any node with that value. Make sure to handle the case when the node to remove is the head of the list.

### Advanced

1. **Merge two sorted linked lists**  
   Write a function that takes two sorted linked lists as input and merges them into a single sorted linked list. The function should combine the nodes from both lists in ascending order without using any additional memory (other than pointers).

2. **Remove duplicates from an unsorted linked list**  
   Create a function that removes duplicate nodes from an unsorted linked list. The function should remove all duplicates without using any extra space (i.e., modifying the list in place). After calling the function, the linked list should have unique nodes only.

3. **Rearrange a linked list**  
   Given a linked list, rearrange the nodes such that all even-positioned nodes appear before all odd-positioned nodes. For example, if the list is `1 -> 2 -> 3 -> 4 -> 5`, after rearranging, it should become `2 -> 4 -> 1 -> 3 -> 5`.

---

## Vectors

In this section, you will practice working with **vectors** in C++. Vectors are dynamic arrays that automatically resize when elements are added or removed. They are part of the C++ Standard Template Library (STL), and they provide more flexibility compared to regular arrays. By solving these problems, you’ll become familiar with the syntax and functions associated with vectors and learn how to use them effectively in your programs.

### Basic

1. **Initialize a vector of integers**  
   Create a vector that holds integer values. Initialize it with the values `10, 20, 30, 40, 50`. Print the vector's elements using a loop.

2. **Find the size of a vector**  
   Create a vector of integers and add a few values to it. Implement a function that returns the size of the vector (i.e., the number of elements it holds). Then print the size of the vector.

3. **Add an element to the end of the vector**  
   Create a vector of integers. Use the `push_back()` function to add a new element to the end of the vector and print the updated vector.

### Intermediate

1. **Insert an element at a specific position**  
   Create a vector of integers. Insert a new element at a specified index using the `insert()` function. After inserting the element, print the vector to verify the insertion.

2. **Remove an element from the vector**  
   Create a vector of integers and remove an element at a specified index using the `erase()` function. After removing the element, print the vector to verify that the element has been removed.

3. **Access an element at a specific index**  
   Create a vector of strings containing the names of 5 cities. Access and print the element at the 2nd index (third city in the vector).

### Advanced

1. **Remove all occurrences of a specific element**  
   Create a vector of integers. Write a function that removes all occurrences of a specified element from the vector without using additional memory. After modifying the vector, print it.

2. **Rotate a vector**  
   Create a vector of integers and implement a function that rotates the vector to the left or right by `n` positions. After rotating the vector, print the modified vector.

3. **Find the intersection of two vectors**  
   Create two vectors of integers. Write a function that finds the intersection (common elements) of the two vectors and returns a new vector containing only those common elements.

4. **Partition a vector into two parts**  
   Create a vector of integers. Implement a function that partitions the vector into two parts: one containing all the elements greater than or equal to a given number and the other containing elements smaller than that number. Print both parts.

5. **Vector with custom objects**  
   Create a vector that holds custom objects. Define a `Person` struct with fields like `name` and `age`, and store a list of `Person` objects in the vector. Print the vector contents.

6. **Find the median of a vector**  
   Create a vector of integers and implement a function that finds the median value of the vector. If the vector has an odd number of elements, return the middle element. If the vector has an even number of elements, return the average of the two middle elements.
