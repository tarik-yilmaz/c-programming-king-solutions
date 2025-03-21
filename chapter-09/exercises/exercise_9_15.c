/*
 * Chapter 9, Exercise 15 – Median of Three Numbers
 * -------------------------------------------------
 * This program defines a function `median` that calculates the median of three
 * `double` values (i.e., the value that is neither the maximum nor the minimum).
 *
 * The original version used multiple return statements and nested `if` conditions.
 * The goal here is to simplify the logic and rewrite the function using only **one**
 * `return` statement.
 *
 * Approach:
 * ---------
 * - Compare the three values using conditional logic.
 * - Assign the median to a temporary variable.
 * - Return the median at the end of the function.
 *
 * Example:
 * --------
 *  median(3, 9, 5) → 5
 *  median(10, 1, 7) → 7
 */

 #include <stdio.h>

 // Function to compute the median of three numbers using a single return
 double median(double x, double y, double z) {
     double result;
 
     if (x <= y) {
         if (y <= z)
             result = y;
         else if (x <= z)
             result = z;
         else
             result = x;
     } else {
         if (z <= y)
             result = y;
         else if (x <= z)
             result = x;
         else
             result = z;
     }
 
     return result;
 }
 
 int main() {
     printf("Median of (3, 9, 5): %.2f\n", median(3, 9, 5));
     printf("Median of (10, 1, 7): %.2f\n", median(10, 1, 7));
     printf("Median of (4, 4, 4): %.2f\n", median(4, 4, 4));
     return 0;
 }
 