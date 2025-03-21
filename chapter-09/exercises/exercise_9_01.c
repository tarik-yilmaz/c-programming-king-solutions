/*
 * Chapter 9, Exercise 1 – Fixing Errors in a Triangle Area Function
 * -----------------------------------------------------------------
 * The given function is intended to calculate the area of a triangle.
 * However, it contains **two errors** that prevent it from compiling and running correctly.
 *
 * Identified Errors:
 * ------------------
 * 1. **Missing type for the second parameter (`height`)**:
 *    - The function declaration uses `double triangle_area(double base, height)`,
 *      but `height` is missing its type.
 *    - **Fix:** Change it to `double height`.
 *
 * 2. **Invalid variable declaration (`double product;`) outside of a block**:
 *    - The function has `double product;` incorrectly placed before the opening `{`.
 *    - **Fix:** Move the declaration inside the function block.
 *
 * Corrected Function:
 * -------------------
 * Below is the corrected function that compiles successfully.
 */

 #include <stdio.h>

 // Corrected function definition
 double triangle_area(double base, double height) {
     double product = base * height; // Declare inside function block
     return product / 2;
 }
 
 int main() {
     // Test the function with a sample input
     double base = 5.0, height = 3.0;
     printf("Triangle Area: %.2f\n", triangle_area(base, height));
 
     return 0;
 }
 
 /*
  * Explanation of Fixes:
  * ---------------------
  * - The function signature is corrected to `double triangle_area(double base, double height)`.
  * - The `double product;` declaration is moved **inside** the function block.
  * - A `main` function is added to test the correctness of the function.
  *
  * Expected Output:
  * ----------------
  * Triangle Area: 7.50
  *
  * Now, the function correctly calculates the area of a triangle.
  */
 