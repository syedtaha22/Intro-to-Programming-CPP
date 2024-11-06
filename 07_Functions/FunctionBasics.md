# Function Basics in C++

## What are Functions?

A function in C++ is a block of code designed to perform a specific task. Functions allow you to break down complex code into smaller, reusable components, which can improve code readability and make programs easier to debug and maintain. By using functions, you can call the same code multiple times without rewriting it.

## General Syntax of a Function

In C++, a function consists of a **return type**, **name**, **parameters**, and **body**. Here's the basic syntax:

```cpp
return_type function_name(parameter1_type parameter1, parameter2_type parameter2, ...) {
    // Function body: code to be executed
    return value; // Optional, based on return type
}
```

### Parts of a Function

- **Return Type**: Specifies the type of value the function returns (e.g., `int`, `void`, `double`). If the function doesn’t return a value, use `void`.
- **Function Name**: An identifier for the function. Choose a descriptive name related to the function's task.
- **Parameters**: Variables passed into the function for use within the function body. Parameters have types and names.
- **Function Body**: Contains the code that performs the function’s task. A return statement may be included, depending on the return type.

## How to Call Functions

To use a function, you need to **call** it by its name, passing any required arguments. Function calls can be made from `main()` or other functions.

### Example of Declaring and Calling a Function

Below is an example of a simple function that adds two integers and returns the result.

```cpp
#include <iostream>
using namespace std;

// Function declaration and definition
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 10);  // Function call
    cout << "The result is: " << result << endl;  // Output: The result is: 15
    return 0;
}
```

### Explanation

1. `int add(int a, int b)` - This declares a function named `add` that takes two integers as parameters and returns an integer.
2. `int result = add(5, 10);` - Calls the `add` function with arguments `5` and `10`, then stores the return value in `result`.

## Returning Values from Functions

A function can return a value of any specified type. If a function is declared to return a specific type, it must use the `return` statement to send that type back to the caller.

```cpp
double multiply(double x, double y) {
    return x * y;
}
```

### Void Functions

If a function doesn’t need to return any value, use the `void` keyword as its return type.

```cpp
void greet() {
    cout << "Hello, welcome to C++ programming!" << endl;
}

int main() {
    greet();  // Calls the void function greet
    return 0;
}
```

### Function Parameters and Arguments

Parameters are defined in the function declaration and are used to pass values into a function. When calling the function, the values provided are known as arguments.

```cpp
int subtract(int x, int y) {
    return x - y;
}

int main() {
    int result = subtract(20, 5);  // Passing 20 and 5 as arguments
    cout << "The result is: " << result << endl;  // Output: The result is: 15
    return 0;
}
```

## Next Steps

This document covered the basics of functions, including their definition, syntax, and calling process. Next, explore different ways to pass parameters to functions, such as **pass-by-value**, **pass-by-reference**, and **pass-by-pointer**, to understand how data is transferred and modified in functions. See [FunctionParameters.md](FunctionParameters.md) for details.

