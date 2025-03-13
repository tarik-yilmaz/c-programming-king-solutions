/*
 * Chapter 8, Exercise 5 – Fibonacci Numbers Array
 * ------------------------------------------------
 * The Fibonacci numbers are defined as follows:
 *     F(0) = 0, F(1) = 1, and F(n) = F(n-1) + F(n-2) for n >= 2.
 *
 * This program declares an array named fib_numbers with 40 elements and fills it with
 * the first 40 Fibonacci numbers. The first two values are initialized explicitly,
 * and a loop computes the remaining values using the recurrence relation.
 *
 * Steps:
 * 1. Initialize the array with the first two Fibonacci numbers: {0, 1}.
 * 2. Use a loop to compute each subsequent Fibonacci number:
 *        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2]
 * 3. Print the sequence to verify correctness.
 *
 * Example Run:
 * ------------
 *  Output: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 */

 #include <stdio.h>

 int main(void) {
     int fib_numbers[40] = {0, 1}; // Initialize the first two Fibonacci numbers
 
     // Print the first two numbers
     printf("%d, %d", fib_numbers[0], fib_numbers[1]);
 
     // Calculate and print the remaining Fibonacci numbers
     for (int i = 2; i < 40; i++) {
         fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
         printf(", %d", fib_numbers[i]);
     }
 
     printf("\n"); // Newline for better output formatting
     return 0;
 }
 