/*
 * Chapter 2, Project 6 – Polynomial Evaluation Using Horner's Rule
 * -----------------------------------------------------------------
 * This program evaluates the polynomial:
 *
 *      3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6
 *
 * but optimizes the calculations using **Horner's Rule**, reducing
 * the number of multiplications needed.
 *
 * Horner’s Rule transforms the polynomial into:
 *
 *      ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6
 *
 * This improves efficiency, particularly for larger exponents.
 *
 * Key Concepts:
 *  - Using **Horner’s Rule** to simplify polynomial evaluation.
 *  - Efficient computation by reducing unnecessary multiplications.
 *  - Proper use of `scanf()` for user input.
 *
 * Expected Input/Output:
 * ----------------------
 * Enter a value for x: 2
 * The value of the polynomial is: 50.00
 */

 #include <stdio.h>

 int main(void) {
     // Declare variable for user input
     int x;
 
     // Prompt user for input value of x
     printf("Enter a value for x: ");
     scanf("%d", &x);
 
     // Compute the polynomial using Horner's Rule
     float polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
 
     // Display the result formatted to 2 decimal places
     printf("The value of the polynomial is: %.2f\n", polynomial);
 
     return 0;
 }
 