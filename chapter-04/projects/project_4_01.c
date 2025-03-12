/*
 * Chapter 4, Project 1 – Reverse a Two-Digit Number
 * -------------------------------------------------
 * This program takes a **two-digit number** from user input
 * and **reverses** its digits before displaying the result.
 *
 * Example Run:
 * ------------
 *  Enter a two-digit number: 28
 *  The reversal is: 82
 *
 * Explanation:
 * ------------
 * - The ones digit is extracted using `number % 10`.
 * - The tens digit is obtained by integer division (`number / 10`).
 * - The reversed number is printed by swapping their positions.
 */

 #include <stdio.h>

 int main(void)
 {
     int number; // Variable to store the two-digit number
 
     // Prompt the user to enter a two-digit number
     printf("Enter a two-digit number: ");
     scanf("%d", &number);
 
     // Extract the ones (units) digit by finding the remainder when dividing by 10
     int ones = number % 10;
 
     // Extract the tens digit by dividing the number by 10
     int tens = number / 10;
 
     // Display the reversed number
     printf("The reversal is: %d%d\n", ones, tens);
 
     return 0; // End of program
 }
 