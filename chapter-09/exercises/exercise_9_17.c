/*
 * Chapter 9, Exercise 17 – Iterative Factorial Function
 * ------------------------------------------------------
 * This program defines a non-recursive (iterative) version of the factorial
 * function `fact`. It calculates the factorial of a non-negative integer `n`
 * by using a `for` loop instead of recursion.
 *
 * Factorial Definition:
 * ---------------------
 * fact(n) = n * (n - 1) * (n - 2) * ... * 1
 * Special case: fact(0) = 1
 *
 * Advantages of Iteration:
 * ------------------------
 * - Avoids function call overhead from recursion
 * - No risk of stack overflow for large `n`
 *
 * Example:
 * --------
 *  Input: 5 → Output: 120
 *  Input: 0 → Output: 1
 */

 #include <stdio.h>

 // Iterative factorial function
 int fact(int n) {
     int result = 1;
 
     for (int i = 2; i <= n; i++) {
         result *= i;
     }
 
     return result;
 }
 
 int main() {
     printf("Factorial of 5: %d\n", fact(5));  // 5! = 120
     printf("Factorial of 0: %d\n", fact(0));  // 0! = 1
     printf("Factorial of 1: %d\n", fact(1));  // 1! = 1
     printf("Factorial of 6: %d\n", fact(6));  // 6! = 720
     return 0;
 }
 