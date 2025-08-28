# Sudoku Solution Validator

## Objective
Create a program that validates whether a completed Sudoku puzzle solution is correct according to the standard Sudoku rules.

## Background
Sudoku is a logic-based number-placement puzzle. The objective is to fill a 9×9 grid with digits so that each column, each row, and each of the nine 3×3 sub-grids (also known as "boxes" or "blocks") contains all of the digits from 1 to 9 without repetition.

---

## Requirements

### Input Format
- Your program should accept a 9x9 grid as input.
- The grid can be input as:
  - A 2D array/list of integers
  - 9 lines of text with 9 numbers each
  - A single string with 81 characters
- Each cell contains a number from 1 to 9.
- Assume the input grid is completely filled (no empty cells).

### Output Requirements
- Return `true` if the solution is valid.
- Return `false` if the solution violates any Sudoku rules.
- Identify which specific rule was violated (row, column, or 3x3 box).

---

## Validation Rules (Mandatory)
Your program must verify that:
1. Each row contains all numbers from 1-9 without repetition.
2. Each column contains all numbers from 1-9 without repetition.
3. Each 3×3 sub-grid contains all numbers from 1-9 without repetition.

---

## Example Test Cases

### Valid Sudoku Solution
```
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
---------------------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
---------------------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9
```

### Invalid Sudoku Solution (Duplicate in Row)
```
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
---------------------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
---------------------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 2 

# Note the duplicate 2 in the last row
```

---

## Implementation Requirements
- Write clear, well-documented code.
- Use appropriate data structures wherever possible.
- Include comments explaining your logic.
- Handle input validation.
- Include at least 5 test cases.

---

## Bonus Challenges (Optional) [2 Marks]
1. Extend your program to validate partially filled Sudoku grids.
2. Add detailed error reporting (exactly which numbers are duplicated and where).

---

## Submission Guidelines
1. Submit your source code file(s).
2. Include a README with:
   - Setup/running instructions.
   - Description of your approach.
   - List of test cases.
   - Any assumptions made.

