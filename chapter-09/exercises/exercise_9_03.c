/*
 * Chapter 9, Exercise 3 – Computing the Greatest Common Divisor (GCD)
 * -------------------------------------------------------------------
 * Implement a function `gcd(m, n)` that calculates the greatest common divisor 
 * (GCD) of two integers `m` and `n` using Euclid's algorithm.
 *
 * Algorithm:
 * ----------
 * - If `n` is zero, `m` is the GCD.
 * - Otherwise, recursively compute `gcd(n, m % n)`.
 * - This continues until `n` becomes zero.
 *
 * Example Runs:
 * -------------
 * Enter two integers: 56 98
 * The GCD is: 14
 *
 * Enter two integers: 101 10
 * The GCD is: 1
 *
 * Corrected Function:
 * -------------------
 */

 #include <stdio.h>

 // Function to compute the greatest common divisor using Euclid's algorithm
 int gcd(int m, int n) {
     int remainder;
     while (n > 0) {
         remainder = m % n;
         m = n;
         n = remainder;
     }
     return m; // Return the final GCD
 }
 
 int main() {
     int num1, num2;
 
     // Prompt user for input
     printf("Enter two integers: ");
     scanf("%d %d", &num1, &num2);
 
     // Compute and print the GCD
     printf("The GCD is: %d\n", gcd(num1, num2));
 
     return 0;
 }
 
 /*
  * Explanation:
  * ------------
  * - The function uses Euclid's algorithm to compute the GCD iteratively.
  * - It continuously replaces `m` with `n` and `n` with `m % n` until `n` is zero.
  * - The final value of `m` is the greatest common divisor.
  *
  * Expected Output:
  * ----------------
  * Enter two integers: 48 18
  * The GCD is: 6
  *
  * Enter two integers: 101 103
  * The GCD is: 1
  *
  * Now, the function correctly computes the greatest common divisor!
  */
 