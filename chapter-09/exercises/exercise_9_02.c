/*
 * Chapter 9, Exercise 2 – Checking Range of Two Numbers
 * -----------------------------------------------------
 * Write a function `check(x, y, n)` that verifies whether `x` and `y` both fall 
 * within the range `[0, n - 1]` (inclusive). If they do, the function returns 1; 
 * otherwise, it returns 0. Assume `x`, `y`, and `n` are all integers.
 *
 * Function Definition:
 * --------------------
 * - The function takes three parameters: `x`, `y`, and `n`.
 * - If `0 ≤ x < n` and `0 ≤ y < n`, it returns `1` (valid range).
 * - Otherwise, it returns `0` (out of range).
 *
 * Example Runs:
 * -------------
 * check(2, 3, 5)  → returns 1 (valid range)
 * check(-1, 4, 5) → returns 0 (x is out of range)
 * check(5, 2, 5)  → returns 0 (x is out of range)
 *
 * Corrected Function:
 * -------------------
 */

 #include <stdio.h>

 // Function to check if x and y are within valid bounds
 int check(int x, int y, int n) {
     if (x >= 0 && x < n && y >= 0 && y < n) {
         return 1;
     }
     return 0;
 }
 
 int main() {
     // Sample tests
     printf("check(2, 3, 5): %d\n", check(2, 3, 5));  // Expected: 1
     printf("check(-1, 4, 5): %d\n", check(-1, 4, 5)); // Expected: 0
     printf("check(5, 2, 5): %d\n", check(5, 2, 5));  // Expected: 0
 
     return 0;
 }
 
 /*
  * Explanation:
  * ------------
  * - The function checks if `x` and `y` lie in the inclusive range `[0, n-1]`.
  * - If both values satisfy the condition, it returns `1`; otherwise, `0`.
  * - The `main()` function tests several cases to verify correctness.
  *
  * Expected Output:
  * ----------------
  * check(2, 3, 5): 1
  * check(-1, 4, 5): 0
  * check(5, 2, 5): 0
  *
  * Now, the function works correctly and follows best practices.
  */
 