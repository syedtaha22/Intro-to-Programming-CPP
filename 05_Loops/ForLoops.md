# For Loops in C++

## Overview

The `for` loop is one of the most commonly used loops in C++. It is especially useful when you know in advance how many times you want a block of code to execute. A `for` loop allows you to repeat a set of instructions a specific number of times with a well-defined structure.

## Syntax

```cpp
for (initialization; condition; increment/decrement) {
    // Code block to execute
}
```

- **Initialization**: This step executes once at the beginning of the loop. It usually involves initializing a loop counter.
- **Condition**: This is checked before each iteration of the loop. If the condition is `true`, the loop continues; if it's `false`, the loop terminates.
- **Increment/Decrement**: This step updates the loop counter after each iteration.

## Example

Here’s a basic example of a `for` loop that prints numbers from 1 to 5:

```cpp
#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {
        std::cout << i << std::endl;
    }
    return 0;
}
```

### Explanation:
- **Initialization**: `int i = 1;` initializes the loop variable `i` to 1.
- **Condition**: `i <= 5;` ensures the loop runs as long as `i` is less than or equal to 5.
- **Increment**: `i++` increases the value of `i` by 1 after each iteration.

### Output:
```
1
2
3
4
5
```

## Nested For Loops

You can also nest `for` loops to work with multiple variables or more complex structures, such as printing a pattern:

```cpp
#include <iostream>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 2; j++) {
            std::cout << "i = " << i << ", j = " << j << std::endl;
        }
    }
    return 0;
}
```

### Output:
```
i = 1, j = 1
i = 1, j = 2
i = 2, j = 1
i = 2, j = 2
i = 3, j = 1
i = 3, j = 2
```

## Infinite Loops

If the condition in a `for` loop never becomes `false`, the loop will run indefinitely. For example, the following loop is infinite:

```cpp
for (int i = 1; ; i++) {
    std::cout << i << std::endl;
}
```

In such cases, make sure to include a condition that will eventually break the loop to avoid unintended infinite loops.

## Best Practices

- Use `for` loops when the number of iterations is known in advance.
- Make sure your loop conditions will eventually become `false` to avoid infinite loops.
- Keep your loop conditions and increments simple to ensure readability.

## Next Steps

Once you're comfortable with `for` loops, try experimenting with more complex loops, such as nested loops, or explore how loops work with arrays in the [Arrays](../07_Arrays/README.md) section.
```