# Do-While Loops in C++

## Overview

The `do-while` loop in C++ is similar to the `while` loop, but with one key difference: it guarantees that the loop will execute at least once, regardless of whether the condition is initially true or false. The condition is checked **after** the code block has been executed, making it useful in situations where you want the loop body to run at least once before the condition is evaluated.

## Syntax

```cpp
do {
    // Code block to execute
} while (condition);
```

- **Condition**: The loop checks this condition **after** the code inside the loop has been executed. If the condition is `true`, the loop will repeat. If it’s `false`, the loop will stop.

## Example

Here’s a simple example of a `do-while` loop that prints numbers from 1 to 5:

```cpp
#include <iostream>

int main() {
    int i = 1;
    do {
        std::cout << i << std::endl;
        i++;  // Increment the value of i
    } while (i <= 5);
    
    return 0;
}
```

### Explanation:
- **Initialization**: `int i = 1;` initializes the variable `i`.
- **Code Block**: The loop prints the value of `i` and increments it after each iteration.
- **Condition**: `i <= 5;` checks if the loop should run again. Since the condition is checked **after** the block is executed, the loop is guaranteed to run at least once.

### Output:
```
1
2
3
4
5
```

## Key Difference: `while` vs `do-while`

The main difference between `while` and `do-while` loops is **when the condition is checked**:
- In a `while` loop, the condition is checked before the loop body executes.
- In a `do-while` loop, the condition is checked after the loop body executes, ensuring that the loop runs at least once.

### Example: Guaranteed Execution

Here’s an example where the `do-while` loop runs at least once, even though the condition is `false` from the beginning:

```cpp
#include <iostream>

int main() {
    int i = 10;
    do {
        std::cout << "This will print at least once, i = " << i << std::endl;
        i++;
    } while (i < 5);
    
    return 0;
}
```

### Output:
```
This will print at least once, i = 10
```

In this case, even though `i` is already greater than 5, the loop runs **once** because the condition is only checked after the first iteration.

## Common Use Case: User Input Validation

A common use of the `do-while` loop is in input validation, where you want to repeatedly prompt the user until they provide valid input.

```cpp
#include <iostream>

int main() {
    int number;
    
    do {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> number;
    } while (number < 1 || number > 10);
    
    std::cout << "You entered: " << number << std::endl;
    return 0;
}
```

### Explanation:
- **Input Validation**: The loop ensures that the user enters a valid number between 1 and 10. The user is prompted at least once, regardless of what they enter initially.

## Best Practices

- Use `do-while` loops when you want the code block to run at least once before checking the condition.
- Be cautious with conditions to avoid infinite loops—make sure the condition will eventually evaluate to `false`.
- For input validation and tasks where you require at least one execution, the `do-while` loop is often a good choice.

## Next Steps

After understanding the `do-while` loop, review the differences between `for`, `while`, and `do-while` loops to choose the best one for different situations. You can revisit the [ForLoops.md](ForLoops.md) and [WhileLoops.md](WhileLoops.md) files for comparisons.
