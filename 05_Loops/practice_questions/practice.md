# Practice Problems for Loops

## Basic Problems

1. **Print Even Numbers Between 1 and N**  
   Write a C++ program that takes a number `N` as input and prints all even numbers between 1 and `N` using a `for` loop.

2. **Sum of Odd Numbers**  
   Write a C++ program that calculates and prints the sum of all odd numbers between 1 and a given number `N`, using a `while` loop.

3. **Find the Factorial of a Number**  
   Write a C++ program to find the factorial of a number `N` entered by the user using a `for` loop.

4. **Count the Digits of a Number**  
   Write a C++ program that counts the number of digits in an integer entered by the user using a `do-while` loop.

5. **Print Multiples of 3**  
   Write a C++ program that prints all multiples of 3 between 1 and a number `N` entered by the user. Use a `for` loop for this task.

6. **Sum of Digits**  
   Write a C++ program that takes a number as input and calculates the sum of its digits using a `while` loop.

---

## Intermediate Problems

1. **Print a Multiplication Table**
   Write a C++ program that prints the multiplication table of a number entered by the user. Use a `for` loop to print the table from 1 to 10.

2. **Reverse a Number**
   Write a C++ program that reverses the digits of a number entered by the user using a `while` loop. For example, input `1234` should result in output `4321`.

3. **Sum and Count Positive Numbers**
   Write a C++ program that takes input from the user until they enter `0`. The program should sum all positive numbers and count how many were entered. Use a `while` loop to implement this.

4. **Check if a Number is Prime**
   Write a C++ program that checks whether a number is prime or not. Use a `for` loop to check divisibility for numbers less than the input value.

5. **Palindrome Number Check**
   Write a C++ program that checks if a number is a palindrome (a number that reads the same backward and forward). Use a `do-while` loop to reverse the number and compare it with the original.

6. **Fibonacci Series**
   Write a C++ program that generates and prints the Fibonacci series up to `N` terms, where `N` is entered by the user. Use a `for` loop to calculate the terms in the sequence.

---

## Advanced Problems

1. **Perfect Number Check**
   Write a C++ program that checks whether a number is a perfect number or not. A perfect number is one where the sum of its divisors (excluding the number itself) equals the number. For example, `6` is a perfect number because `1 + 2 + 3 = 6`. Use a `for` loop to find the divisors.

2. **Pattern Printing (Pyramid Shape)**
   Write a C++ program that prints the following pyramid pattern for a number `N` (number of rows), using nested `for` loops:
   ```
       *
      ***
     *****
    *******
   ```

3. **Armstrong Number**
   Write a C++ program that checks whether a number is an Armstrong number or not. An Armstrong number is one where the sum of the cubes of its digits equals the number itself (e.g., 153 is an Armstrong number because `1^3 + 5^3 + 3^3 = 153`). Use a `while` loop to solve this.

4. **Find the GCD of Two Numbers**
   Write a C++ program to find the greatest common divisor (GCD) of two numbers using Euclid’s algorithm. Use a `while` loop to repeatedly subtract the smaller number from the larger until one of them becomes zero.

5. **Number Guessing Game with Multiple Ranges**
   Modify the number guessing game where the program generates a number between 1 and 100. The user has 7 attempts to guess the number. After each guess, provide feedback on whether the guess is too low, too high, or correct. If the user doesn't guess the number within 7 attempts, reveal the number. Use a `for` loop and `switch` statement.

6. **Find the LCM of Two Numbers**
   Write a C++ program to find the least common multiple (LCM) of two numbers. Use a `while` loop to increment the larger of the two numbers until it is divisible by both.

---

### More Challenging Advanced Problems

1. **Collatz Conjecture**
   Write a C++ program that implements the Collatz Conjecture. For any positive integer `n`, the sequence is defined as follows: if `n` is even, divide it by 2; if `n` is odd, multiply it by 3 and add 1. The sequence continues until `n` becomes 1. Use a `while` loop to print the sequence starting from any number entered by the user.

2. **Find Prime Factors of a Number**
   Write a C++ program to find all prime factors of a given number. Use a `for` loop to divide the number by prime factors until it becomes 1.

3. **Sudoku Row Validator**
   Write a C++ program that takes an array of 9 numbers (between 1 and 9) and checks whether it forms a valid Sudoku row (i.e., all numbers must be unique). Use a `for` loop to validate the array.

4. **Digit Occurrences in a Range**
   Write a C++ program that takes two integers, `L` and `R`, and counts how many times a given digit `D` appears in all numbers from `L` to `R`. Use a combination of `for` and `while` loops to check each number in the range and count occurrences of the digit.

5. **Nth Fibonacci Number Using Memoization**
   Write a C++ program that finds the Nth Fibonacci number using memoization (storing previously computed Fibonacci numbers to avoid recalculating them). Use a loop to implement the memoization.

6. **Print Pascal's Triangle**
   Write a C++ program that prints the first `N` rows of Pascal’s triangle. Pascal’s triangle is formed by summing adjacent elements in preceding rows. Use nested `for` loops to build and print each row.

---

These problems are designed to build your understanding of loops, starting from simple iterations to complex applications involving patterns, mathematical calculations, and optimization techniques like memoization.