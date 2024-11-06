# Function Parameters in C++

## Overview

In C++, you can pass parameters to functions in different ways, which affects how data is transferred and whether modifications inside the function affect the original data. Understanding these methods **(pass-by-value, pass-by-reference, pass-by-pointer)** is essential for writing efficient and predictable code.

## 1. Pass-by-Value

When a parameter is passed by value, a copy of the argument is created in the function. Modifying the parameter inside the function does not affect the original argument outside of the function.

### Syntax Example

```cpp
#include <iostream>
using namespace std;

void increment(int num) {
    num += 1;
    cout << "Inside function: " << num << endl;
}

int main() {
    int value = 10;
    increment(value);  // Pass-by-value
    cout << "Outside function: " << value << endl;  // Output: 10
    return 0;
}
```

### Explanation

In this example, `value` is passed to `increment` by value. Modifying `num` inside `increment` doesn’t change `value` in `main()`.

## 2. Pass-by-Reference

In pass-by-reference, the function receives a reference to the original variable, not a copy. Changes made to the parameter inside the function will reflect in the original variable.

### Syntax Example

```cpp
#include <iostream>
using namespace std;

void increment(int &num) {  // & indicates pass-by-reference
    num += 1;
    cout << "Inside function: " << num << endl;
}

int main() {
    int value = 10;
    increment(value);  // Pass-by-reference
    cout << "Outside function: " << value << endl;  // Output: 11
    return 0;
}
```

### Explanation

Here, `increment` modifies `num`, which directly affects `value` in `main()`, since `num` is a reference to `value`.

## 3. Pass-by-Pointer

Pass-by-pointer involves passing the address of the variable, allowing the function to modify the original variable. This method uses pointers and is often used for more complex data manipulation.

### Syntax Example

```cpp
#include <iostream>
using namespace std;

void increment(int *num) {  // * indicates pointer parameter
    *num += 1;  // Dereference to access and modify the value
    cout << "Inside function: " << *num << endl;
}

int main() {
    int value = 10;
    increment(&value);  // Pass address of value (pass-by-pointer)
    cout << "Outside function: " << value << endl;  // Output: 11
    return 0;
}
```

### Explanation

In this example, `increment` accepts a pointer to `value` and modifies it by dereferencing `num` with `*num`. Changes inside the function reflect in `value` because `increment` operates directly on its address.

## 4. Default Parameters

Default parameters allow you to specify a default value for one or more parameters in a function declaration. If the caller omits these arguments, the function uses the default values.

### Syntax Example

```cpp
#include <iostream>
using namespace std;

void greet(string name = "Guest") {  // "Guest" is the default parameter
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Alice");  // Output: Hello, Alice!
    greet();         // Output: Hello, Guest!
    return 0;
}
```

### Explanation

In this example, `greet` has a default parameter `"Guest"`. If no argument is passed, `name` takes on this default value. Default parameters are especially useful when certain arguments are optional.

### Important Notes
- Default parameters should be specified only in the function declaration, not the function definition (if they’re separate).
- Default parameters must be listed from right to left.

## When to Use Each Method

- **Pass-by-Value**: Use when you want the function to work with a copy of the data, leaving the original unchanged. Suitable for simple data types or when modifications aren’t needed.
- **Pass-by-Reference**: Use when you want the function to modify the original variable without making a copy. Preferred for large data structures (like arrays or objects) to avoid copying overhead.
- **Pass-by-Pointer**: Use for complex data manipulation or when working with dynamically allocated memory. Pass-by-pointer also allows handling `null` values, which can be useful in conditional operations.
- **Default Parameters**: Use when you want to allow optional arguments, making function calls more flexible and simplifying code where certain arguments are often the same.

## Next Steps

This document covered different ways to pass parameters to functions, including their syntax and use cases. To learn about another essential function concept, **recursion**, and its applications, see [Recursion.md](Recursion.md).
