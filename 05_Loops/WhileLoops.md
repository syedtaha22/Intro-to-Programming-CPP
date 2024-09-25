# While Loops in C++

## Overview

The `while` loop in C++ is used when you want to repeat a block of code as long as a certain condition remains true. Unlike the `for` loop, the `while` loop is typically used when the number of iterations is not known beforehand, and the loop continues until the condition is met.

## Syntax

```cpp
while (condition) {
    // Code block to execute
}
```

- **Condition**: The loop checks this condition before each iteration. If the condition is `true`, the code inside the loop runs. If the condition is `false`, the loop terminates.

## Example

Here’s a basic example of a `while` loop that prints numbers from 1 to 5:

```cpp
#include <iostream>

int main() {
    int i = 1;
    while (i <= 5) {
        std::cout << i << std::endl;
        i++;  // Increment the value of i
    }
    return 0;
}
```

### Explanation:
- **Initialization**: `int i = 1;` initializes the variable `i` before the loop starts.
- **Condition**: `i <= 5;` ensures the loop runs while `i` is less than or equal to 5.
- **Increment**: `i++` increases the value of `i` by 1 after each iteration to eventually break the loop.

### Output:
```
1
2
3
4
5
```

## Infinite Loops

A `while` loop can result in an infinite loop if the condition never becomes `false`. In the example below, the condition is always `true`, which leads to an infinite loop:

```cpp
int i = 1;
while (true) {
    std::cout << i << std::endl;
    i++;
}
```

To prevent infinite loops, ensure that the condition will eventually evaluate to `false` or include a mechanism like `break` to exit the loop.

## `while` vs `for`

- Use a `while` loop when the number of iterations is unknown and depends on some dynamic condition.
- Use a `for` loop when you know the number of iterations in advance.

## Example: Waiting for User Input

A common use case for a `while` loop is waiting for a specific user input. In this example, the loop will continue until the user enters the correct password:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string password;
    
    while (password != "letmein") {
        std::cout << "Enter password: ";
        std::cin >> password;
    }
    
    std::cout << "Access granted!" << std::endl;
    return 0;
}
```

### Output (Example):
```
Enter password: hello
Enter password: 1234
Enter password: letmein
Access granted!
```

In this case, the loop continues until the user inputs the correct password.

## Best Practices

- Ensure that the condition in a `while` loop will eventually become `false` to avoid infinite loops.
- Use `break` statements carefully when breaking out of a loop early.
- Use `while` loops when the number of iterations is not predetermined.

## Next Steps

After mastering the `while` loop, explore the `do-while` loop, which is similar but guarantees at least one iteration of the code block. You can learn more in the [DoWhileLoops.md](DoWhileLoops.md) file.

