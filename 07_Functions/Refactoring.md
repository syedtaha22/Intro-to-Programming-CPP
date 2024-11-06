# Code Refactoring with Functions

Refactoring is the process of restructuring existing code to make it more readable, maintainable, and reusable, without changing its behavior. A key tool for refactoring is functions. Functions allow us to break complex problems into smaller, manageable pieces, improving code clarity and reducing redundancy.

In this guide, we will go through small examples of how to refactor simple code snippets using functions, and explain how to identify return types and parameters for the functions.

## Why Refactor Code Using Functions?

- **Avoid Redundancy**: If the same block of code is used multiple times, it can be extracted into a function to reduce repetition.
- **Improve Readability**: Small, focused functions make it easier to understand the logic of the program.
- **Enhance Maintainability**: If changes need to be made, functions make it easier to update one part of the code without affecting others.

## Key Concepts in Function Design

When designing functions, there are three main components you need to identify:
1. **Return Type**: What type of value the function will return (e.g., `int`, `double`, `void` if no value is returned).
2. **Function Name**: A descriptive name that explains what the function does.
3. **Parameters**: The input values or variables the function needs to perform its task.

### Identifying Return Type
- If the function performs a calculation and gives a result, such as adding two numbers, the return type would likely be a numerical type (like `int`, `float`, etc.).
- If the function doesn't return anything (e.g., printing output), the return type is `void`.

### Identifying Parameters
- The function parameters should represent the inputs required for the task. For example, in an `add` function, the parameters would be the two numbers you want to add.

---

## Example 1: Adding Two Numbers

**Before Refactoring (Ugly Code)**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    int x = 20, y = 30;
    int total = x + y;
    cout << "Total: " << total << endl;

    return 0;
}
```

This code has repeated logic for adding two numbers. Let’s refactor it to use a function.

**After Refactoring (Using Functions)**

```cpp
#include <iostream>
using namespace std;

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2; // Return type is int, since we are returning a sum of integers
}

int main() {
    cout << "Sum: " << add(5, 10) << endl;   // Parameters are 5 and 10, return type is int
    cout << "Total: " << add(20, 30) << endl; // Parameters are 20 and 30, return type is int
    return 0;
}
```

### Breakdown:
- **Return Type**: The function `add()` returns an `int`, since it calculates the sum of two integers.
- **Parameters**: The function takes two parameters, `int num1` and `int num2`, which represent the numbers to be added.

---

## Example 2: Printing a Greeting

**Before Refactoring**

```cpp
#include <iostream>
using namespace std;

int main() {
    string name1 = "Alice";
    cout << "Hello, " << name1 << "!" << endl;

    string name2 = "Bob";
    cout << "Hello, " << name2 << "!" << endl;

    string name3 = "Carol";
    cout << "Hello, " << name3 << "!" << endl;

    return 0;
}
```

This code repeats the same greeting logic for different names. Let’s refactor it into a function.

**After Refactoring (Using Functions)**

```cpp
#include <iostream>
using namespace std;

// Function to print a greeting message
void greet(const string& name) {
    cout << "Hello, " << name << "!" << endl;  // No return value, so return type is void
}

int main() {
    greet("Alice");  // Parameter is the string "Alice"
    greet("Bob");    // Parameter is the string "Bob"
    greet("Carol");  // Parameter is the string "Carol"
    return 0;
}
```

### Breakdown:
- **Return Type**: The `greet()` function does not return anything, so its return type is `void`.
- **Parameters**: The function takes a single parameter, `const string& name`, which represents the name to be greeted.

---

## Example 3: Finding the Maximum of Two Numbers

**Before Refactoring**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 5;
    if (a > b) cout << "Max: " << a << endl;
    else cout << "Max: " << b << endl;

    int x = 12, y = 15;
    if (x > y) cout << "Max: " << x << endl;
    else cout << "Max: " << y << endl;

    return 0;
}
```

This code repeats the logic of finding the maximum of two numbers. We can refactor it into a function.

**After Refactoring (Using Functions)**

```cpp
#include <iostream>
using namespace std;

// Function to find the maximum of two numbers
int findMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;  // Return type is int, since we are returning the larger number
}

int main() {
    cout << "Max: " << findMax(8, 5) << endl;  // Parameters are 8 and 5, return type is int
    cout << "Max: " << findMax(12, 15) << endl; // Parameters are 12 and 15, return type is int
    return 0;
}
```

### Breakdown:
- **Return Type**: The function `findMax()` returns an `int`, since it compares two integers and returns the larger one.
- **Parameters**: The function takes two parameters, `int num1` and `int num2`, which are the two numbers to compare.

---

## Conclusion

In the examples above, we saw how to refactor simple tasks into functions. Functions help in reducing repeated code, making the program easier to read and maintain.

To identify return types and parameters:
- **Return Type**: Determine what kind of value the function needs to return (e.g., number, string, void).
- **Parameters**: Identify what inputs the function needs to perform its task.

By using functions, you can write cleaner, more modular code. The key is to break down repetitive tasks into small, reusable functions that make your code easier to manage and understand. For more examples and practice, check out the [examples](examples/code_refactoring/) and [practice questions](practice_questions/refactoring.md)



