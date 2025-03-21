/*
 * Chapter 9, Exercise 6 – Extracting the k-th Digit from a Number
 * ---------------------------------------------------------------
 * Implement a function `digit(n, k)` that returns the `k`-th digit from the right
 * in a positive integer `n`. If `k` is greater than the number of digits in `n`,
 * the function should return `0`.
 *
 * Algorithm:
 * ----------
 * - Extract the last digit using `n % 10`.
 * - Remove the last digit using `n /= 10`.
 * - Repeat `k` times to reach the desired digit.
 * - If `k` exceeds the number of digits, return `0`.
 *
 * Example Runs:
 * -------------
 * digit(829, 1) → 9
 * digit(829, 2) → 2
 * digit(829, 3) → 8
 * digit(829, 4) → 0
 */

 #include <stdio.h>

 // Function to extract the k-th digit from the right in n
 int digit(int n, int k) {
     int last_digit;
 
     if (n == 0) return 0; // Edge case for n = 0
 
     for (int i = 1; i <= k; i++) {
         last_digit = n % 10; // Extract last digit
         n /= 10; // Remove last digit
     }
     return last_digit;
 }
 
 int main() {
     // Test cases
     printf("digit(829, 1): %d\n", digit(829, 1));  // Expected: 9
     printf("digit(829, 2): %d\n", digit(829, 2));  // Expected: 2
     printf("digit(829, 3): %d\n", digit(829, 3));  // Expected: 8
     printf("digit(829, 4): %d\n", digit(829, 4));  // Expected: 0
 
     return 0;
 }
 
 /*
  * Explanation:
  * ------------
  * - The function extracts digits by repeatedly taking `n % 10` and reducing `n` by `/= 10`.
  * - If `k` is greater than the number of digits in `n`, the loop will consume `n`
  *   and return `0` (since `n` will reach zero).
  *
  * Expected Output:
  * ----------------
  * digit(829, 1): 9
  * digit(829, 2): 2
  * digit(829, 3): 8
  * digit(829, 4): 0
  *
  * Now, the function correctly extracts digits from any positive integer!
  */
 