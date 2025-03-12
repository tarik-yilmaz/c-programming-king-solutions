/*
 * Chapter 6, Project 3 – Fraction Reduction to Lowest Terms
 * -----------------------------------------------------------
 * This program asks the user to enter a fraction and then reduces that fraction
 * to its lowest terms.
 *
 * Process:
 * --------
 * 1. The user enters a fraction in the format numerator/denominator.
 * 2. The program uses Euclid's algorithm to compute the greatest common divisor (GCD)
 *    of the numerator and denominator.
 * 3. Both the numerator and denominator are divided by the GCD to obtain the fraction
 *    in lowest terms.
 *
 * Example Run:
 * ------------
 *  Enter a fraction: 6/12
 *  In lowest terms: 1/2
 *
 * Hint:
 * -----
 * To reduce a fraction, first compute the GCD of the numerator and denominator, then
 * divide both by the GCD.
 */

 #include <stdio.h>

 int main(void) {
 
     int numerator, denominator, num1, num2, remainder, gcd;
 
     // Prompt the user to enter a fraction
     printf("Enter a fraction: ");
     scanf("%d/%d", &numerator, &denominator);
 
     // Copy numerator and denominator for GCD calculation
     num1 = numerator;
     num2 = denominator;
 
     // Calculate GCD using Euclid's algorithm
     while (num2 > 0) {
         remainder = num1 % num2;
         num1 = num2;
         num2 = remainder;
     }
     gcd = num1; // After the loop, num1 contains the GCD
 
     // Reduce the fraction by dividing both numerator and denominator by the GCD
     numerator /= gcd;
     denominator /= gcd;
 
     // Output the reduced fraction
     printf("In lowest terms: %d/%d\n", numerator, denominator);
 
     return 0; // End of program
 }
 
 /*
 // Example Input/Output:
 // ---------------------
 // Input: 6/12
 // Output: In lowest terms: 1/2
 */
 