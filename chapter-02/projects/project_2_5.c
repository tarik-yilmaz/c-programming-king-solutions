/*
 * Chapter 2, Project 5 – Evaluating a Polynomial
 * -----------------------------------------------
 * This program computes the value of the polynomial:
 *
 *      3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6
 *
 * based on a user-provided integer value for x.
 *
 * Key Concepts:
 *  - Using `scanf()` to get user input.
 *  - Manually computing powers of x (since C lacks an exponentiation operator).
 *  - Applying the order of operations correctly.
 *
 * Expected Input/Output:
 * ----------------------
 * Enter a value for x: 2
 * The value of the polynomial is: 50.00
 */

 #include <stdio.h>

 int main(void) {
     // Declare an integer variable to store the user-provided x value
     int x;
 
     // Prompt the user to enter a value for x
     printf("Enter a value for x: ");
     scanf("%d", &x);
 
     // Compute the polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
     float polynomial = 
           3 * (x * x * x * x * x) 
         + 2 * (x * x * x * x) 
         - 5 * (x * x * x) 
         - (x * x) 
         + 7 * x 
         - 6;
 
     // Display the result formatted to 2 decimal places
     printf("The value of the polynomial is: %.2f\n", polynomial);
 
     return 0;
 }
 