# Division by Zero Bug in C
This repository demonstrates a common error in C programming: division by zero.  The `bug.c` file contains the buggy code, which attempts to divide an integer by zero. This results in undefined behavior, typically a segmentation fault or crash. The solution is provided in `bugSolution.c`.

## How to reproduce
1. Compile `bug.c` using a C compiler (like GCC):
   ```bash
   gcc bug.c -o bug
   ```
2. Run the executable:
   ```bash
   ./bug
   ```
This will likely result in a segmentation fault.

## Solution
The `bugSolution.c` file demonstrates how to prevent the division by zero error by checking the denominator before performing the division.