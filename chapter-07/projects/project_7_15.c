/*
 * Chapter 7, Project 15 – Factorial Calculator with Various Data Types
 * ----------------------------------------------------------------------
 * This program computes the factorial of a positive integer and allows you to test
 * the calculation using different data types. For each type, the largest value of n 
 * that produces a correct factorial before overflow (or imprecision) occurs will differ.
 *
 * Instructions:
 * -------------
 *  - Uncomment the appropriate declaration for 'factorial' to test a specific data type.
 *  - Adjust the printf format specifier accordingly.
 *
 * Example Run (using int):
 * ------------
 *  Enter a positive integer: 6
 *  Factorial of 6: 720
 *
 * Experiment Results:
 * -------------------
 *  | Data Type    | Largest n                | Reason                                                                |
 *  |--------------|--------------------------|-----------------------------------------------------------------------|
 *  | short        | 7                        | Maximum short value is ~32,767; factorial(n) overflows beyond n = 7.    |
 *  | int          | 12                       | Maximum int value is ~2.14e9; factorial(n) overflows beyond n = 12.     |
 *  | long         | 12 (32-bit) / 20 (64-bit) | On a 32-bit system, long is similar to int; on a 64-bit system, long is larger. |
 *  | long long    | 20                       | Maximum long long is ~9.22e18; factorial(n) overflows beyond n = 20.      |
 *  | float        | ~34–38                   | Limited precision; the result is an approximation due to rounding.      |
 *  | double       | ~170                     | Higher precision; the result is an approximation.                     |
 *  | long double  | 170+                     | Even higher precision and range, depending on the system and compiler.  |
 *
 * Note:
 * -----
 * In cases (e) through (g), the program will display a close approximation of the factorial,
 * not necessarily the exact integer value.
 */

 #include <stdio.h>

 int main(void) {
     int x; // Input number
 
     /* Part (a): Using short */
     // short factorial = 1; // Uncomment to test with 'short'
 
     /* Part (b): Using int */
     int factorial = 1; // Uncomment to test with 'int'
 
     /* Part (c): Using long */
     // long factorial = 1; // Uncomment to test with 'long'
 
     /* Part (d): Using long long */
     // long long factorial = 1; // Uncomment to test with 'long long'
 
     /* Part (e): Using float */
     // float factorial = 1.0f; // Uncomment to test with 'float'
 
     /* Part (f): Using double */
     // double factorial = 1.0; // Uncomment to test with 'double'
 
     /* Part (g): Using long double */
     // long double factorial = 1.0; // Uncomment to test with 'long double'
 
     // Prompt the user to enter a positive integer
     printf("Enter a positive integer: ");
     scanf("%d", &x);
 
     // Calculate the factorial of x
     for (int i = 1; i <= x; i++) {
         factorial *= i; // Multiply and update factorial
     }
 
     // Print the result (adjust the format specifier based on the data type used)
     printf("Factorial of %d: ", x);
     printf("%d\n", factorial);        // For int
     // printf("%hd\n", factorial);    // For short
     // printf("%ld\n", factorial);    // For long
     // printf("%lld\n", factorial);   // For long long
     // printf("%.0f\n", factorial);    // For float
     // printf("%.0lf\n", factorial);   // For double
     // printf("%.0Lf\n", factorial);   // For long double
 
     return 0; // End of program
 }
 