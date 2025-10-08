# Operators in C++

Operators are symbols that perform operations on variables and values. They are fundamental in constructing expressions and performing calculations in C++. This document covers the primary types of operators available in C++.

## Types of Operators

### 1. Arithmetic Operators

Arithmetic operators are used to perform mathematical operations:

- **Addition (`+`)**: Adds two values.
  ```cpp
  int sum = 5 + 3;  // sum is 8
  ```

- **Subtraction (`-`)**: Subtracts one value from another.
  ```cpp
  int difference = 10 - 4;  // difference is 6
  ```

- **Multiplication (`*`)**: Multiplies two values.
  ```cpp
  int product = 7 * 6;  // product is 42
  ```

- **Division (`/`)**: Divides one value by another.
  ```cpp
  int quotient = 20 / 4;  // quotient is 5
  ```

- **Modulus (`%`)**: Returns the remainder of division.
  ```cpp
  int remainder = 10 % 3;  // remainder is 1
  ```

### 2. Relational Operators

Relational operators are used to compare two values:

- **Equal to (`==`)**: Checks if two values are equal.
  ```cpp
  bool isEqual = (5 == 5);  // isEqual is true
  ```

- **Not equal to (`!=`)**: Checks if two values are not equal.
  ```cpp
  bool isNotEqual = (5 != 3);  // isNotEqual is true
  ```

- **Greater than (`>`)**: Checks if one value is greater than another.
  ```cpp
  bool isGreater = (7 > 4);  // isGreater is true
  ```

- **Less than (`<`)**: Checks if one value is less than another.
  ```cpp
  bool isLess = (3 < 5);  // isLess is true
  ```

- **Greater than or equal to (`>=`)**: Checks if one value is greater than or equal to another.
  ```cpp
  bool isGreaterOrEqual = (5 >= 5);  // isGreaterOrEqual is true
  ```

- **Less than or equal to (`<=`)**: Checks if one value is less than or equal to another.
  ```cpp
  bool isLessOrEqual = (4 <= 6);  // isLessOrEqual is true
  ```

### 3. Logical Operators

Logical operators are used to combine or invert boolean values:

- **Logical AND (`&&`)**: Returns true if both operands are true.
  ```cpp
  bool result = (5 > 3 && 7 > 4);  // result is true
  ```

- **Logical OR (`||`)**: Returns true if at least one operand is true.
  ```cpp
  bool result = (5 > 3 || 7 < 4);  // result is true
  ```

- **Logical NOT (`!`)**: Inverts the boolean value.
  ```cpp
  bool result = !(5 > 3);  // result is false
  ```

### 4. Assignment Operators

Assignment operators are used to assign values to variables:

- **Assignment (`=`)**: Assigns a value to a variable.
  ```cpp
  int x = 10;  // x is 10
  ```

- **Addition assignment (`+=`)**: Adds a value to a variable and assigns the result.
  ```cpp
  x += 5;  // x is now 15
  ```

- **Subtraction assignment (`-=`)**: Subtracts a value from a variable and assigns the result.
  ```cpp
  x -= 3;  // x is now 12
  ```

- **Multiplication assignment (`*=`)**: Multiplies a variable by a value and assigns the result.
  ```cpp
  x *= 2;  // x is now 24
  ```

- **Division assignment (`/=`)**: Divides a variable by a value and assigns the result.
  ```cpp
  x /= 4;  // x is now 6
  ```

- **Modulus assignment (`%=`)**: Takes the modulus of a variable by a value and assigns the result.
  ```cpp
  x %= 4;  // x is now 2
  ```

### 5. Increment and Decrement Operators

Increment and decrement operators are used to increase or decrease a value by one:

- **Increment (`++`)**: Increases a value by one.
  ```cpp
  int a = 5;
  a++;  // a is now 6
  ```

- **Decrement (`--`)**: Decreases a value by one.
  ```cpp
  int b = 10;
  b--;  // b is now 9
  ```


### 6. Bitwise Shift Operators

Bitwise shift operators move bits of a number to the left or right. They are commonly used in low-level programming, optimizations, and bit manipulation.

* **Left Shift (`<<`)**: Shifts bits to the left by a specified number of positions. Each left shift multiplies the value by 2 for each shift.
  General rule:
  $$n << k = n \times 2^k$$

  ```cpp
  int x = 5;        // binary: 0000 0101
  int result = x << 1;  // binary: 0000 1010 → result is 10
  ```

* **Right Shift (`>>`)**: Shifts bits to the right by a specified number of positions. Each right shift divides the value by 2 for each shift (for positive integers).
  General rule:
  $$n >> k = n \div 2^k$$

  ```cpp
  int y = 20;       // binary: 0001 0100
  int result = y >> 2;  // binary: 0000 0101 → result is 5
  ```

**Notes:**

* Left shift (`<<`) discards bits that overflow on the left and fills with zeros on the right.
* Right shift (`>>`) discards bits that overflow on the right. For signed integers, behavior may depend on compiler (arithmetic vs. logical shift).

## Example

Here’s a simple example that uses various operators:

```cpp
#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    
    // Arithmetic Operators
    int sum = a + b;
    int product = a * b;
    
    // Relational Operators
    bool isEqual = (a == b);
    
    // Logical Operators
    bool result = (a < b) && (b > 10);
    
    // Bitwise Shift Operators
    int leftShift = a << 1;   // a * 2^1 = 20
    int rightShift = b >> 2;  // b / 2^2 = 5
    
    // Output results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Is Equal: " << (isEqual ? "True" : "False") << std::endl;
    std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    std::cout << "Left Shift (a << 1): " << leftShift << std::endl;
    std::cout << "Right Shift (b >> 2): " << rightShift << std::endl;
    
    return 0;
}

```

## Summary

Operators are essential in C++ for performing calculations, comparisons, and logical operations. By understanding and using different types of operators, you can manipulate and evaluate data effectively.

