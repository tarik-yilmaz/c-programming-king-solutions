/*
 * Chapter 9, Project 6 – Polynomial Evaluator
 * --------------------------------------------
 * This program evaluates the value of the polynomial:
 *
 *     3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 *
 * The user is prompted to enter a value for x, and the result of the polynomial
 * evaluation is printed using a dedicated function.
 *
 * Original polynomial implementation using power expressions.
 * For performance, a Horner’s Rule version is also provided as a comment.
 *
 * Example:
 * --------
 *  Input: 2
 *  Output: The result is: 36.00
 */

 #include <stdio.h>
 #include <math.h>
 
 // Function to evaluate the polynomial using the power expression version
 double polynomial_calculator(int x) {
     double degree5 = pow(x, 5);
     double degree4 = pow(x, 4);
     double degree3 = pow(x, 3);
     double degree2 = pow(x, 2);
 
     return 3 * degree5 + 2 * degree4 - 5 * degree3 - degree2 + 7 * x - 6;
 }
 
 /*
  * Alternative version using Horner’s Rule for improved performance:
  *
  * double polynomial_calculator(int x) {
  *     return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  * }
  */
 
 int main(void) {
     int x;
     printf("Enter a value for x: ");
     scanf("%d", &x);
 
     double result = polynomial_calculator(x);
     printf("The result is: %.2f\n", result);
 
     return 0;
 }
 