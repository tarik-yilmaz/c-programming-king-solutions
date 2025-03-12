/*
 * Chapter 6, Project 12 – Approximating e until Term < Epsilon
 * -------------------------------------------------------------
 * This program approximates the mathematical constant e by summing the series:
 *
 *   e = 1 + 1/1! + 1/2! + 1/3! + ... 
 *
 * Instead of summing a fixed number of terms, the program continues adding terms
 * until the current term becomes less than a small positive number, Epsilon, entered by the user.
 *
 * Process:
 * --------
 *  1. The series starts with e = 1 (accounting for 1/0!).
 *  2. The program prompts the user for Epsilon, a small threshold value.
 *  3. A while loop iterates, computing each term as 1/i!.
 *  4. The loop continues until the current term is less than Epsilon.
 *  5. The final value of e is then displayed.
 *
 * Example Run:
 * ------------
 *  Enter an Epsilon (a small positive number): 0.000001
 *  The value of e is: 2.718282
 *
 * Note:
 * -----
 * - A higher precision (smaller Epsilon) yields a more accurate approximation of e.
 */

 #include <stdio.h>

 int main(void) {
     double e = 1.0;     // Start with the first term of the series (1)
     double epsilon;     // Epsilon value entered by the user
     double term = 1.0;  // Current term (1/n!)
     int factorial = 1;  // Factorial starts at 1 (0! = 1)
     int i = 1;          // Counter for the current term
 
     // Prompt the user for Epsilon (a small positive number)
     printf("Enter an Epsilon (a small positive number): ");
     scanf("%lf", &epsilon);
 
     // Loop until the current term is smaller than Epsilon
     while (term >= epsilon) {
         factorial *= i;         // Update factorial: factorial = i!
         term = 1.0 / factorial;   // Compute the current term: 1/i!
         e += term;                // Add the term to the approximation of e
         i++;                      // Move to the next term
     }
 
     // Display the approximated value of e with six decimal places
     printf("The value of e is: %.6f\n", e);
 
     return 0; // End of program
 }
 