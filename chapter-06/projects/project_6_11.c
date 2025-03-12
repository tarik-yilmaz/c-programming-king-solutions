/*
 * Chapter 6, Project 11 – Approximating e using a Series
 * --------------------------------------------------------
 * The mathematical constant e can be expressed as an infinite series:
 *
 *   e = 1 + 1/1! + 1/2! + 1/3! + ... 
 *
 * This program approximates e by computing the sum:
 *
 *   e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 *
 * where n is an integer entered by the user.
 *
 * Process:
 * --------
 * 1. The variable e is initialized to 1 (accounting for the first term, 1/0!).
 * 2. A loop calculates each subsequent term (1/i!) incrementally.
 * 3. The factorial is computed iteratively.
 * 4. Each term is added to e to update the approximation.
 *
 * Example Run:
 * ------------
 *  Enter a value for n: 5
 *  The value of e is: 2.716667
 *
 * Note:
 * -----
 * - The higher the value of n, the more accurate the approximation of e.
 * - The program prints the value of e with six decimal places.
 */

 #include <stdio.h>

 int main(void) {
     int n;
     double e = 1.0;       // Start with the first term of the series: 1/0! = 1
     int factorial = 1;    // Factorial starts at 1 (0! = 1)
 
     // Prompt the user to enter the number of terms (n) to approximate e
     printf("Enter a value for n: ");
     scanf("%d", &n);
 
     // Loop to compute the series from 1/1! up to 1/n!
     for (int i = 1; i <= n; i++) {
         factorial *= i;         // Compute i! incrementally
         e += 1.0 / factorial;   // Add the term 1/i! to e
     }
 
     // Display the approximated value of e with six decimal places
     printf("The value of e is: %.6f\n", e);
 
     return 0; // End of program
 }
 