/*
 * Chapter 6, Project 5 – Generalized Digit Reversal
 * --------------------------------------------------
 * This program generalizes the digit reversal task so that the number can have one,
 * two, three, or more digits. It repeatedly extracts the last digit of the entered number
 * and prints them in reverse order using a do loop.
 *
 * Process:
 * --------
 *  - The user is prompted to enter an integer.
 *  - The program uses a do loop to extract the last digit using the modulus operator (% 10).
 *  - The number is then divided by 10 to remove the extracted digit.
 *  - The loop continues until the number becomes 0.
 *
 * Example Run:
 * ------------
 *  Enter a number: 374
 *  Output: 473
 *
 * Note:
 * -----
 * - The digits are printed consecutively without any spaces.
 */

 #include <stdio.h>

 int main(void) {
 
     int num, digit; // Variables to store the user-entered number and the extracted digit
 
     // Prompt the user to enter a number
     printf("Enter a number: ");
     scanf("%d", &num);
 
     // Loop to extract and print each digit in reverse order
     do {  
         digit = num % 10;    // Extract the last digit
         printf("%d", digit); // Print the digit
         num /= 10;           // Remove the last digit from the number
     } while (num > 0);       // Continue until the number becomes 0
 
     return 0; // End of program
 }
 