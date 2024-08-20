# Variables in C++

Variables are fundamental to programming in C++. They act as containers for storing data values that can be changed during the execution of a program. This guide will cover the declaration, initialization, and usage of variables in C++.

## 1. Declaring Variables

To declare a variable, you specify its data type followed by the variable name. Here’s the basic syntax:

```cpp
data_type variable_name;
```

### Example:

```cpp
int age;
float salary;
char grade;
```

In this example:
- `int age;` declares an integer variable named `age`.
- `float salary;` declares a floating-point variable named `salary`.
- `char grade;` declares a character variable named `grade`.

## 2. Initializing Variables

Initialization refers to assigning an initial value to a variable at the time of declaration. This can be done as follows:

```cpp
data_type variable_name = value;
```

### Example:

```cpp
int age = 25;
float salary = 50000.50;
char grade = 'A';
```

Here:
- `int age = 25;` declares and initializes the `age` variable with the value `25`.
- `float salary = 50000.50;` declares and initializes the `salary` variable with the value `50000.50`.
- `char grade = 'A';` declares and initializes the `grade` variable with the value `'A'`.

## 3. Modifying Variables

After a variable is declared, you can modify its value by assigning a new one. This is done using the assignment operator `=`.

### Example:

```cpp
age = 30;      // Now age is 30
salary = 60000.75; // Now salary is 60000.75
grade = 'B';   // Now grade is 'B'
```

## 4. Using Variables

Once declared and initialized, variables can be used in expressions and operations. For instance, you can perform arithmetic operations, display their values, or use them in conditional statements.

### Example:

```cpp
int a = 10;
int b = 20;
int sum = a + b;  // sum now holds the value 30
std::cout << "The sum of a and b is: " << sum << std::endl;
```

## 5. Variable Scope

The scope of a variable determines where in the program it can be accessed. Variables declared inside a function are called local variables and can only be accessed within that function. Variables declared outside all functions are called global variables and can be accessed anywhere in the program.

### Example:

```cpp
int globalVar = 10; // Global variable

void someFunction() {
    int localVar = 5; // Local variable
    std::cout << "Local Variable: " << localVar << std::endl;
}

int main() {
    std::cout << "Global Variable: " << globalVar << std::endl;
    someFunction();
    return 0;
}
```

In this example:
- `globalVar` is a global variable and can be accessed anywhere in the program.
- `localVar` is a local variable and can only be accessed within `someFunction()`.

## 6. Constants

Sometimes, you may want to declare a variable whose value should not change after it is initialized. Such variables are called constants and are declared using the `const` keyword.

### Example:

```cpp
const int daysInWeek = 7;
const float pi = 3.14159;
```

In this case:
- `daysInWeek` is a constant integer that will always hold the value `7`.
- `pi` is a constant floating-point number that represents the value of π.

## Conclusion

Understanding variables is crucial in programming, as they form the basis of how data is stored and manipulated. Practice declaring, initializing, and using variables in different scenarios to build a strong foundation in C++ programming.
