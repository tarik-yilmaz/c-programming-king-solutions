/*
 * Chapter 9, Exercise 18 – Recursive GCD Function
 * -----------------------------------------------
 * This program implements a recursive version of the `gcd` (Greatest Common Divisor)
 * function using Euclid's algorithm.
 *
 * Logic:
 * ------
 * - If n == 0, return m.
 * - Otherwise, return gcd(n, m % n).
 *
 * This approach ensures that the function reduces the problem size at every step
 * and reaches a base case when the second number becomes 0.
 *
 * Example:
 * --------
 *  Input: gcd(48, 18) → Output: 6
 */

 #include <stdio.h>

 // Recursive GCD using Euclid's algorithm
 int gcd(int m, int n) {
     return n == 0 ? m : gcd(n, m % n);
 }
 
 int main() {
     printf("GCD of 48 and 18 is: %d\n", gcd(48, 18)); // Output: 6
     printf("GCD of 100 and 25 is: %d\n", gcd(100, 25)); // Output: 25
     printf("GCD of 81 and 27 is: %d\n", gcd(81, 27)); // Output: 27
     
     return 0;
 }
 