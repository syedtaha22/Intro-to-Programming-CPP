# If-Else Statements in C++

## Introduction

In programming, we often need to make decisions based on certain conditions. For example, you might want your program to behave differently depending on the user’s input. In C++, we use **if-else statements** to control the flow of the program based on conditions.

## Basic `if` Statement

The `if` statement checks whether a condition is true. If it is, the program runs a specific block of code. If the condition is false, the block of code is skipped.

### Syntax

```cpp
if (condition) {
    // code to execute if the condition is true
}
```

### Example

```cpp
#include <iostream>

int main() {
    int age = 18;

    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    }

    return 0;
}
```

In this example:
- The condition `age >= 18` is checked.
- Since `age` is equal to 18, the condition is **true**, and `"You are an adult."` is printed to the screen.
- If `age` was less than 18, the message wouldn't be printed.

## `if-else` Statement

Sometimes, you want to do one thing if the condition is true, and something else if the condition is false. This is where `else` comes in.

### Syntax

```cpp
if (condition) {
    // code to execute if the condition is true
} else {
    // code to execute if the condition is false
}
```

### Example

```cpp
#include <iostream>

int main() {
    int age = 16;

    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a minor." << std::endl;
    }

    return 0;
}
```

In this example:
- If `age` is 18 or more, the program prints `"You are an adult."`
- If `age` is less than 18, the program prints `"You are a minor."`

## `if-else if-else` Chain

Sometimes, you need to check more than one condition. In this case, you can use `else if` to add additional conditions.

### Syntax

```cpp
if (condition1) {
    // code to execute if condition1 is true
} else if (condition2) {
    // code to execute if condition2 is true
} else {
    // code to execute if none of the above conditions are true
}
```

### Example

```cpp
#include <iostream>

int main() {
    int score = 85;

    if (score >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else if (score >= 70) {
        std::cout << "Grade: C" << std::endl;
    } else {
        std::cout << "Grade: F" << std::endl;
    }

    return 0;
}
```

In this example:
- The program checks the score and prints the corresponding grade.
- If `score` is 90 or above, it prints "Grade: A".
- If `score` is 80 or above but less than 90, it prints "Grade: B", and so on.
- If none of the conditions are true, it defaults to printing "Grade: F".

## Ternary Operator

The **ternary operator** is a shorthand way to write simple `if-else` statements. It’s useful when you only have one thing to do for the true and false conditions. The syntax is more compact and looks like this:

### Syntax

```cpp
condition ? value_if_true : value_if_false;
```

### Example

```cpp
#include <iostream>

int main() {
    int age = 20;

    std::string status = (age >= 18) ? "adult" : "minor";
    std::cout << "You are an " << status << "." << std::endl;

    return 0;
}
```

In this example:
- The condition `age >= 18` is checked.
- If the condition is true, the value `"adult"` is assigned to `status`. Otherwise, `"minor"` is assigned.
- The program then prints `"You are an adult."` because `age` is 20.

### When to Use Ternary Operator

- Use the ternary operator when you have a simple `if-else` statement with just one expression on both sides.
- For more complex logic with multiple statements, it’s better to stick with regular `if-else` blocks for readability.

## Summary

In this guide, you learned:
- How to use the `if` statement to check a condition.
- How to use `if-else` to handle both true and false cases.
- How to check multiple conditions using `else if`.
- How to use the ternary operator as a shorter alternative for simple `if-else` statements.

Understanding conditional statements is crucial for controlling the flow of your programs. They allow your program to make decisions and respond to different inputs or situations.