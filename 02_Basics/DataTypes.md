# Data Types in C++

Data types are a fundamental concept in C++ that define the kind of data a variable can hold. Understanding data types is crucial for writing efficient and error-free code. In this document, we’ll cover the basic data types available in C++ and their usage.

## Basic Data Types

C++ provides several built-in data types that you can use to store different kinds of data. Here are the primary data types:

### 1. Integer Types

- **`int`**: Represents integer values. Typically, it can hold values from -2,147,483,648 to 2,147,483,647 (on most systems).

  ```cpp
  int age = 25;
  ```

- **`short`**: Represents a smaller range of integer values. It is usually 16 bits.

  ```cpp
  short temperature = -10;
  ```

- **`long`**: Represents a larger range of integer values. It is usually 32 or 64 bits, depending on the system.

  ```cpp
  long distance = 1234567890;
  ```

- **`long long`**: Represents an even larger range of integer values, typically 64 bits.

  ```cpp
  long long largeNumber = 1234567890123456789;
  ```

### 2. Floating-Point Types

- **`float`**: Represents single-precision floating-point numbers. It has a precision of about 6-7 decimal digits.

  ```cpp
  float pi = 3.14f;
  ```

- **`double`**: Represents double-precision floating-point numbers. It has a precision of about 15-16 decimal digits.

  ```cpp
  double e = 2.718281828459;
  ```

- **`long double`**: Represents extended-precision floating-point numbers. Precision is system-dependent.

  ```cpp
  long double largePi = 3.141592653589793238L;
  ```

### 3. Character Type

- **`char`**: Represents a single character. It typically uses 1 byte of memory.

  ```cpp
  char initial = 'S';
  ```

### 4. Boolean Type

- **`bool`**: Represents a boolean value, either `true` or `false`.

  ```cpp
  bool isActive = true;
  ```

## Type Modifiers

C++ also allows the modification of these basic types using type modifiers to adjust their size and sign:

- **`signed`**: Indicates that the variable can hold both negative and positive values.
- **`unsigned`**: Indicates that the variable can only hold non-negative values.
- **`short`**: Specifies a shorter version of the integer types.
- **`long`**: Specifies a longer version of the integer types.

## Type Example

Here’s a simple example demonstrating different data types:

```cpp
#include <iostream>

int main() {
    int age = 25;
    float height = 5.9f;
    char initial = 'S';
    bool isStudent = true;
    
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Is Student: " << (isStudent ? "Yes" : "No") << std::endl;

    return 0;
}
```

## Summary

Understanding and using the correct data type is essential for writing efficient and effective C++ programs. Each data type has specific characteristics and uses, so choosing the right one based on the data you need to handle is important.
