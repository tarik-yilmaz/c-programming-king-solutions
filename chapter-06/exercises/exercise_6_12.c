/*
 * Chapter 6, Exercise 12 – Efficient Prime Testing Loop
 * -------------------------------------------------------
 * This exercise modifies the "prime-testing" loop from Section 6.4 to take advantage
 * of the fact that it is only necessary to test divisors up to the square root of n.
 *
 * Original Code:
 * --------------
 * for (d = 2; d < n; d++) {
 *     if (n % d == 0)
 *         break;
 * }
 *
 * Modified Code:
 * --------------
 * for (d = 2; d * d <= n; d++) {
 *     if (n % d == 0)
 *         break;
 * }
 *
 * Explanation:
 * ------------
 * - Instead of checking every divisor from 2 to n-1, the loop now only tests
 *   divisors while d*d <= n. This is equivalent to testing all divisors up to sqrt(n)
 *   without explicitly computing the square root.
 * - If a divisor is found within this range, the loop breaks and n is determined to be non-prime.
 * - If no divisor is found (i.e., the loop completes), then n is prime.
 *
 * Efficiency Improvement:
 * -------------------------
 * - For large values of n, this modification significantly reduces the number of iterations,
 *   making the prime test much more efficient.
 *
 * Example:
 * --------
 * For n = 29:
 *   - Original loop checks divisors 2 through 28.
 *   - Modified loop checks divisors 2 through 5 (since 5*5 = 25 < 29, but 6*6 = 36 > 29).
 *
 * Output:
 * -------
 * - The modified loop produces the same result as the original loop but with improved efficiency.
 */

 #include <stdio.h>

 int main(void) {
     int n, d;
 
     // Prompt the user to enter a number to test for primality
     printf("Enter a number: ");
     scanf("%d", &n);
 
     // Modified prime-testing loop: check divisors up to the square root of n
     for (d = 2; d * d <= n; d++) {
         if (n % d == 0)
             break;
     }
 
     // If no divisor was found, d*d will be greater than n; otherwise, a divisor was found
     if (d * d > n)
         printf("%d is prime.\n", n);
     else
         printf("%d is not prime.\n", n);
 
     return 0;
 }
 