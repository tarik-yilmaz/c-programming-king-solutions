/*
 * Chapter 4, Project 2 – Reverse a Three-Digit Number
 * ----------------------------------------------------
 * This program takes a **three-digit number** from user input
 * and **reverses** its digits before displaying the result.
 *
 * Example Run:
 * ------------
 *  Enter a three-digit number: 456
 *  The reversal is: 654
 *
 * Explanation:
 * ------------
 * - The ones digit is extracted using `number % 10`.
 * - The tens digit is extracted by `(number / 10) % 10`.
 * - The hundreds digit is extracted by `number / 100`.
 * - The reversed number is printed by swapping their positions.
 */

 #include <stdio.h>

 int main(void)
 {
     int number; // Variable to store the three-digit number
 
     // Prompt the user to enter a three-digit number
     printf("Enter a three-digit number: ");
     scanf("%d", &number);
 
     // Extract the ones (units) digit
     int ones = number % 10;
 
     // Extract the tens digit
     int tens = (number / 10) % 10;
 
     // Extract the hundreds digit
     int hundreds = number / 100;
 
     // Display the reversed number
     printf("The reversal is: %d%d%d\n", ones, tens, hundreds);
 
     return 0; // End of program
 }
 