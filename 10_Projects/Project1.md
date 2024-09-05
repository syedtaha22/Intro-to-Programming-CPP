### Project 1: Simple Command-Line Calculator

**Project Description:**

Create a simple calculator that performs one arithmetic operation based on user input. The program should:
1. Display a menu with the following options:

    ```
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    ```

2. Ask the user to select an option.

    ```
    Please Enter an option (1-4): 
    ```

3. Prompt the user for two numbers.
4. Perform the selected operation and display the result.

---


### **Example Output: Addition**

```
======= Simple Command Line Calculator =======

1. Addition
2. Subtraction
3. Multiplication
4. Division

Select an Option (1-4): 1

Addition Selected!

Enter Number one: 5
Enter Number Two: 7

Calculating => 5 + 7

Answer is 12
```

**Explanation**:
- The user selects **1** for addition.
- They are prompted to enter two numbers: `5` and `7`.
- The program calculates `5 + 7` and outputs the result as `12`.

---

### **Example Output: Subtraction**

```
======= Simple Command Line Calculator =======

1. Addition
2. Subtraction
3. Multiplication
4. Division

Select an Option (1-4): 2

Subtraction Selected!

Enter Number one: 3
Enter Number Two: 4

Calculating => 3 - 4

Answer is -1
```

**Explanation**:
- The user selects **2** for subtraction.
- They are prompted to enter two numbers: `3` and `4`.
- The program calculates `3 - 4` and outputs the result as `-1`.

---

### **Example Output: Multiplication**

```
======= Simple Command Line Calculator =======

1. Addition
2. Subtraction
3. Multiplication
4. Division

Select an Option (1-4): 3

Multiplication Selected!

Enter Number one: 6
Enter Number Two: 7

Calculating => 6 * 7

Answer is 42
```

**Explanation**:
- The user selects **3** for multiplication.
- They are prompted to enter two numbers: `6` and `7`.
- The program calculates `6 * 7` and outputs the result as `42`.

---

### **Example Output: Division**

```
======= Simple Command Line Calculator =======

1. Addition
2. Subtraction
3. Multiplication
4. Division

Select an Option (1-4): 4

Division Selected!

Enter Number one: 10
Enter Number Two: 2

Calculating => 10 / 2

Answer is 5
```

**Explanation**:
- The user selects **4** for division.
- They are prompted to enter two numbers: `10` and `2`.
- The program calculates `10 / 2` and outputs the result as `5`.

---

### **Example Output: Division by Zero**

```
======= Simple Command Line Calculator =======

1. Addition
2. Subtraction
3. Multiplication
4. Division

Select an Option (1-4): 4

Division Selected!

Enter Number one: 10
Enter Number Two: 0

Calculating => 10 / 0

Error: Cannot divide by zero!
```

**Explanation**:
- The user selects **4** for division.
- They are prompted to enter two numbers: `10` and `0`.
- Since division by zero is undefined, the program detects this and prints an error message: `"Cannot divide by zero!"`.

