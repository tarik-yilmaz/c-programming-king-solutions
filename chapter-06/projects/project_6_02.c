/*
 * Chapter 6, Project 2 – Greatest Common Divisor (GCD) Calculator
 * ---------------------------------------------------------------
 * This program prompts the user to enter two integers, then calculates and displays
 * their greatest common divisor (GCD) using Euclid's algorithm.
 *
 * Process (Euclid's Algorithm):
 * -----------------------------
 * 1. Let m and n be the two integers.
 * 2. If n is 0, then m is the GCD.
 * 3. Otherwise, compute the remainder when m is divided by n.
 * 4. Replace m with n and n with the remainder.
 * 5. Repeat the process until n becomes 0.
 *
 * Example Run:
 * ------------
 *  Enter two integers: 12 28
 *  Greatest common divisor: 4
 *
 * Note:
 * -----
 * - This program uses a while loop to iteratively compute the GCD.
 * - At the end of the loop, num1 contains the GCD.
 */

 #include <stdio.h>

 int main(void) {
 
     int num1, num2, remainder; // Variables to store the two integers and the remainder
 
     // Prompt the user to enter two integers
     printf("Enter two integers: ");
     scanf("%d %d", &num1, &num2);
 
     // Euclid's algorithm: Iteratively find the GCD
     while (num2 > 0) {
         remainder = num1 % num2; // Calculate the remainder of num1 divided by num2
         num1 = num2;             // Update num1 to the current value of num2
         num2 = remainder;        // Update num2 to the remainder
     }
 
     // At this point, num1 contains the GCD
     printf("Greatest common divisor: %d\n", num1);
 
     return 0; // Indicate successful program termination
 }
 
 /*
 // Example Inputs/Outputs:
 // -----------------------
 // Input: 12 28
 // Output: Greatest common divisor: 4
 */
 