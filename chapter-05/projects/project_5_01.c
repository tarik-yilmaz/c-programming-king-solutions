/*
 * Chapter 5, Project 1 – Digit Counter
 * -------------------------------------
 * This program calculates how many digits a number contains.
 *
 * Input:
 * -------------
 * - The user is prompted to enter a number.
 *
 * Output:
 * --------------
 * - The program prints the number along with the count of its digits.
 *
 * Example Run:
 * ------------
 *  Enter a number: 374
 *  The number 374 has 3 digits
 *
 * Assumptions:
 * -------------
 * - You may assume that the number has no more than four digits.
 * - The program uses a series of if statements to test the number.
 *   For example, if the number is between 0 and 9, it has one digit; if it's
 *   between 10 and 99, it has two digits, etc.
 */

 #include <stdio.h>

 int main(void) {
     int number; // Variable to store the user-entered number
 
     // Prompt the user to enter a number
     printf("Enter a number: ");
     scanf("%d", &number);
 
     // Check the number of digits based on the input
     if (number < 10) {
         // If the number is less than 10, it has 1 digit
         printf("The number %d has 1 digit", number);
     }
     else if (number < 100) {
         // If the number is between 10 and 99, it has 2 digits
         printf("The number %d has 2 digits", number);
     }
     else if (number < 1000) {
         // If the number is between 100 and 999, it has 3 digits
         printf("The number %d has 3 digits", number);
     }
     else if (number < 10000) {
         // If the number is between 1000 and 9999, it has 4 digits
         printf("The number %d has 4 digits", number);
     }
     else {
         // If the number is greater than or equal to 10000, show an error message
         printf("Enter a number between 0 and 9999");
     }
 
     return 0; // End of program
 }
 
 /*
 // Example Runs:
 // -------------
 // Input: 374
 // Output: The number 374 has 3 digits
 //
 // Input: 5
 // Output: The number 5 has 1 digit
 //
 // Input: 1234
 // Output: The number 1234 has 4 digits
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ Uses if-else statements to determine the number of digits.
 // ✅ Assumes the number is within 0 to 9999.
 // ✅ Provides clear, user-friendly output.
 */
 