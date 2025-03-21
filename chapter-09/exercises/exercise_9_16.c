/*
 * Chapter 9, Exercise 16 – Condensed Factorial Function
 * -----------------------------------------------------
 * This program defines a condensed recursive function `fact` that computes the
 * factorial of a number. The function follows the same one-line style used for
 * the `power()` function in earlier examples.
 *
 * Factorial Definition:
 * ---------------------
 * fact(n) = n * fact(n - 1), with base case fact(0) = 1
 *
 * Condensed Logic:
 * ----------------
 * The ternary operator is used to handle the base case and recursive case
 * in a single return statement.
 *
 * Example:
 * --------
 *  Input: 5 → Output: 120
 *  Input: 0 → Output: 1
 */

 #include <stdio.h>

 // Condensed recursive factorial function
 int fact(int n) {
     return n <= 1 ? 1 : n * fact(n - 1);
 }
 
 int main() {
     printf("Factorial of 5: %d\n", fact(5));  // 5! = 120
     printf("Factorial of 0: %d\n", fact(0));  // 0! = 1
     printf("Factorial of 1: %d\n", fact(1));  // 1! = 1
     return 0;
 }
 