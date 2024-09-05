# Nested If Statements in C++

## Introduction

In some cases, you may need to check more than one condition inside an `if` statement. This is where **nested if statements** come in handy. A nested `if` statement is simply an `if` statement inside another `if` statement. This allows your program to make more complex decisions by checking multiple conditions.

## Basic Nested `if` Statement

A nested `if` statement works just like a regular `if` statement, but it allows you to check a second condition only if the first one is true.

### Syntax

```cpp
if (condition1) {
    // code to execute if condition1 is true

    if (condition2) {
        // code to execute if both condition1 and condition2 are true
    }
}
```

### Example

```cpp
#include <iostream>

int main() {
    int score = 95;
    bool completedAssignment = true;

    if (score >= 90) {
        std::cout << "You have an A grade." << std::endl;

        if (completedAssignment) {
            std::cout << "And you have completed the assignment!" << std::endl;
        }
    }

    return 0;
}
```

### Explanation:

- **First Condition:** The program checks if `score >= 90`. If this is true, the program continues to the next block.
- **Nested Condition:** Inside the first `if` block, the program checks the second condition `completedAssignment`. If both conditions are true, the message `"And you have completed the assignment!"` is printed.
- If `score` was less than 90, the second `if` block would be skipped entirely.

## Nested `if-else` Statement

You can also use `else` with nested `if` statements to handle cases where the conditions are false.

### Syntax

```cpp
if (condition1) {
    // code to execute if condition1 is true

    if (condition2) {
        // code to execute if both condition1 and condition2 are true
    } else {
        // code to execute if condition1 is true but condition2 is false
    }

} else {
    // code to execute if condition1 is false
}
```

### Example

```cpp
#include <iostream>

int main() {
    int score = 85;
    bool completedAssignment = false;

    if (score >= 90) {
        std::cout << "You have an A grade." << std::endl;

        if (completedAssignment) {
            std::cout << "And you have completed the assignment!" << std::endl;
        } else {
            std::cout << "But you didn't complete the assignment." << std::endl;
        }

    } else {
        std::cout << "You do not have an A grade." << std::endl;
    }

    return 0;
}
```

### Explanation:

- **First Condition:** The program checks if `score >= 90`.
- **Nested if-else:** If the first condition is true, the program checks if `completedAssignment` is true. If so, it prints the appropriate message. If not, it prints that the assignment wasn't completed.
- **Else for `score`:** If `score < 90`, the outer `else` block runs, and the message `"You do not have an A grade."` is printed.

## Why Use Nested `if` Statements?

- **More Specific Checks:** Nested `if` statements are useful when you need to perform more detailed checks that depend on previous conditions. For example, you might only want to check if a student completed an assignment if they already passed the exam.
- **Conditional Logic Flow:** They allow you to create more complex decision-making flows in your programs by combining multiple checks.

### Example: Checking Multiple Levels of Conditions

```cpp
#include <iostream>

int main() {
    int age = 20;
    bool hasID = true;

    if (age >= 18) {
        std::cout << "You are old enough to enter." << std::endl;

        if (hasID) {
            std::cout << "You can enter since you have an ID." << std::endl;
        } else {
            std::cout << "You need an ID to enter." << std::endl;
        }

    } else {
        std::cout << "You are not old enough to enter." << std::endl;
    }

    return 0;
}
```

In this example:
- The first `if` checks if the person is 18 or older.
- If they are, the second `if` checks if they have an ID. Depending on whether they have an ID or not, a different message is printed.
- If the person is not old enough, the outer `else` prints that they can't enter.

## Nesting Multiple `if` Statements

You can nest multiple `if` statements as needed. However, it's important to be careful when nesting too many conditions, as the code can become harder to read and maintain. In such cases, it might be better to refactor your code or use other structures, like `switch-case`, which can simplify complex decision-making.

## Summary

- **Nested `if` statements** allow you to check additional conditions inside an `if` block.
- They are useful when one condition depends on the outcome of another.
- Be cautious when nesting too many `if` statements, as it can make your code harder to follow.

Understanding how to use nested `if` statements is an important part of writing more complex and interactive programs. They allow you to handle multiple layers of conditions and control the flow of your program based on those conditions.
