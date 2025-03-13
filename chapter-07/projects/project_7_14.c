/*
 * Chapter 7, Project 14 – Square Root Calculator using Newton’s Method
 * ---------------------------------------------------------------------
 * This program computes the square root of a positive floating-point number
 * using Newton’s method.
 *
 * Process:
 * --------
 *  1. The user is prompted to enter a positive number, x.
 *  2. An initial guess for the square root, y, is set to 1.0.
 *  3. Newton's method is applied iteratively:
 *         new_y = (y + x/y) / 2
 *     The new guess is the average of y and x/y.
 *  4. The iterations continue until the absolute difference between the new guess
 *     and the previous guess is less than (.00001 * new_y).
 *  5. The final guess is displayed as the approximate square root of x.
 *
 * Example Run:
 * ------------
 *  Enter a positive number: 3
 *  Square root: 1.73205
 *
 * Note:
 * -----
 * - For greater accuracy, all variables are of type double.
 * - The fabs() function (from <math.h>) is used to compute the absolute difference.
 */

 #include <stdio.h>
 #include <math.h>
 
 int main(void) {
 
     double x;         // The number entered by the user
     double y = 1.0;   // Initial guess for the square root
     double old_y, new_y; // Variables to store the previous and updated guesses
 
     // Prompt the user to enter a positive number
     printf("Enter a positive number: ");
     scanf("%lf", &x);
 
     // Use Newton's method to compute the square root of x
     do {
         old_y = y;                     // Save the previous guess
         new_y = (y + x / y) / 2;         // Compute the new guess
         y = new_y;                     // Update the current guess
     } while (fabs(old_y - new_y) >= 0.00001 * new_y);
 
     // Print the final approximate square root with five decimal places
     printf("Square root: %.5lf\n", new_y);
 
     return 0; // End of program
 }
 